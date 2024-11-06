cmake_minimum_required(VERSION 3.16)

project(file_compress VERSION 0.1 LANGUAGES CXX)

# 启用 Qt 自动处理 UI、MOC 和 RCC
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# 设置 C++17 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 查找 Qt 5 或 Qt 6 库的 Widgets 模块
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# 查找 OpenSSL 库
find_package(OpenSSL REQUIRED)

# 设置项目源文件列表，包含所有 .cpp、.h 和 .ui 文件
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    filecompressor.cpp
    filecompressor.hpp
    huffman.cpp
    huffman.hpp
    bitstream.cpp        # 新增的文件
    bitstream.hpp        # 新增的文件
)

# 添加可执行文件（根据 Qt 版本区分）
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(file_compress
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(file_compress SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(file_compress
            ${PROJECT_SOURCES}
        )
    endif()
endif()

# 链接 Qt 的 Widgets 模块和 OpenSSL 库
target_link_libraries(file_compress PRIVATE Qt${QT_VERSION_MAJOR}::Widgets OpenSSL::SSL OpenSSL::Crypto)

# 设置 macOS 应用程序的 Bundle 属性
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.file_compress)
endif()
set_target_properties(file_compress PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# 安装可执行文件
include(GNUInstallDirs)
install(TARGETS file_compress
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# 在 Qt 6 中使用 qt_finalize_executable 完成设置
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(file_compress)
endif()
