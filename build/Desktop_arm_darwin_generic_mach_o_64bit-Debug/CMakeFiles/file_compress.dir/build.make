# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.4/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/huan/file_compress

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug

# Include any dependencies generated for this target.
include CMakeFiles/file_compress.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/file_compress.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/file_compress.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/file_compress.dir/flags.make

file_compress_autogen/timestamp: /opt/homebrew/share/qt/libexec/moc
file_compress_autogen/timestamp: /opt/homebrew/share/qt/libexec/uic
file_compress_autogen/timestamp: CMakeFiles/file_compress.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target file_compress"
	/opt/homebrew/Cellar/cmake/3.30.4/bin/cmake -E cmake_autogen /Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles/file_compress_autogen.dir/AutogenInfo.json Debug
	/opt/homebrew/Cellar/cmake/3.30.4/bin/cmake -E touch /Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/file_compress_autogen/timestamp

CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.o: CMakeFiles/file_compress.dir/flags.make
CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.o: file_compress_autogen/mocs_compilation.cpp
CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.o: CMakeFiles/file_compress.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.o -MF CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.o -c /Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/file_compress_autogen/mocs_compilation.cpp

CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/file_compress_autogen/mocs_compilation.cpp > CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.i

CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/file_compress_autogen/mocs_compilation.cpp -o CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.s

CMakeFiles/file_compress.dir/main.cpp.o: CMakeFiles/file_compress.dir/flags.make
CMakeFiles/file_compress.dir/main.cpp.o: /Users/huan/file_compress/main.cpp
CMakeFiles/file_compress.dir/main.cpp.o: CMakeFiles/file_compress.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/file_compress.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/file_compress.dir/main.cpp.o -MF CMakeFiles/file_compress.dir/main.cpp.o.d -o CMakeFiles/file_compress.dir/main.cpp.o -c /Users/huan/file_compress/main.cpp

CMakeFiles/file_compress.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/file_compress.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/huan/file_compress/main.cpp > CMakeFiles/file_compress.dir/main.cpp.i

CMakeFiles/file_compress.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/file_compress.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/huan/file_compress/main.cpp -o CMakeFiles/file_compress.dir/main.cpp.s

CMakeFiles/file_compress.dir/mainwindow.cpp.o: CMakeFiles/file_compress.dir/flags.make
CMakeFiles/file_compress.dir/mainwindow.cpp.o: /Users/huan/file_compress/mainwindow.cpp
CMakeFiles/file_compress.dir/mainwindow.cpp.o: CMakeFiles/file_compress.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/file_compress.dir/mainwindow.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/file_compress.dir/mainwindow.cpp.o -MF CMakeFiles/file_compress.dir/mainwindow.cpp.o.d -o CMakeFiles/file_compress.dir/mainwindow.cpp.o -c /Users/huan/file_compress/mainwindow.cpp

CMakeFiles/file_compress.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/file_compress.dir/mainwindow.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/huan/file_compress/mainwindow.cpp > CMakeFiles/file_compress.dir/mainwindow.cpp.i

CMakeFiles/file_compress.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/file_compress.dir/mainwindow.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/huan/file_compress/mainwindow.cpp -o CMakeFiles/file_compress.dir/mainwindow.cpp.s

CMakeFiles/file_compress.dir/filecompressor.cpp.o: CMakeFiles/file_compress.dir/flags.make
CMakeFiles/file_compress.dir/filecompressor.cpp.o: /Users/huan/file_compress/filecompressor.cpp
CMakeFiles/file_compress.dir/filecompressor.cpp.o: CMakeFiles/file_compress.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/file_compress.dir/filecompressor.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/file_compress.dir/filecompressor.cpp.o -MF CMakeFiles/file_compress.dir/filecompressor.cpp.o.d -o CMakeFiles/file_compress.dir/filecompressor.cpp.o -c /Users/huan/file_compress/filecompressor.cpp

CMakeFiles/file_compress.dir/filecompressor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/file_compress.dir/filecompressor.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/huan/file_compress/filecompressor.cpp > CMakeFiles/file_compress.dir/filecompressor.cpp.i

CMakeFiles/file_compress.dir/filecompressor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/file_compress.dir/filecompressor.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/huan/file_compress/filecompressor.cpp -o CMakeFiles/file_compress.dir/filecompressor.cpp.s

CMakeFiles/file_compress.dir/huffman.cpp.o: CMakeFiles/file_compress.dir/flags.make
CMakeFiles/file_compress.dir/huffman.cpp.o: /Users/huan/file_compress/huffman.cpp
CMakeFiles/file_compress.dir/huffman.cpp.o: CMakeFiles/file_compress.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/file_compress.dir/huffman.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/file_compress.dir/huffman.cpp.o -MF CMakeFiles/file_compress.dir/huffman.cpp.o.d -o CMakeFiles/file_compress.dir/huffman.cpp.o -c /Users/huan/file_compress/huffman.cpp

CMakeFiles/file_compress.dir/huffman.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/file_compress.dir/huffman.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/huan/file_compress/huffman.cpp > CMakeFiles/file_compress.dir/huffman.cpp.i

CMakeFiles/file_compress.dir/huffman.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/file_compress.dir/huffman.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/huan/file_compress/huffman.cpp -o CMakeFiles/file_compress.dir/huffman.cpp.s

CMakeFiles/file_compress.dir/bitstream.cpp.o: CMakeFiles/file_compress.dir/flags.make
CMakeFiles/file_compress.dir/bitstream.cpp.o: /Users/huan/file_compress/bitstream.cpp
CMakeFiles/file_compress.dir/bitstream.cpp.o: CMakeFiles/file_compress.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/file_compress.dir/bitstream.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/file_compress.dir/bitstream.cpp.o -MF CMakeFiles/file_compress.dir/bitstream.cpp.o.d -o CMakeFiles/file_compress.dir/bitstream.cpp.o -c /Users/huan/file_compress/bitstream.cpp

CMakeFiles/file_compress.dir/bitstream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/file_compress.dir/bitstream.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/huan/file_compress/bitstream.cpp > CMakeFiles/file_compress.dir/bitstream.cpp.i

CMakeFiles/file_compress.dir/bitstream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/file_compress.dir/bitstream.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/huan/file_compress/bitstream.cpp -o CMakeFiles/file_compress.dir/bitstream.cpp.s

# Object files for target file_compress
file_compress_OBJECTS = \
"CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/file_compress.dir/main.cpp.o" \
"CMakeFiles/file_compress.dir/mainwindow.cpp.o" \
"CMakeFiles/file_compress.dir/filecompressor.cpp.o" \
"CMakeFiles/file_compress.dir/huffman.cpp.o" \
"CMakeFiles/file_compress.dir/bitstream.cpp.o"

# External object files for target file_compress
file_compress_EXTERNAL_OBJECTS =

file_compress.app/Contents/MacOS/file_compress: CMakeFiles/file_compress.dir/file_compress_autogen/mocs_compilation.cpp.o
file_compress.app/Contents/MacOS/file_compress: CMakeFiles/file_compress.dir/main.cpp.o
file_compress.app/Contents/MacOS/file_compress: CMakeFiles/file_compress.dir/mainwindow.cpp.o
file_compress.app/Contents/MacOS/file_compress: CMakeFiles/file_compress.dir/filecompressor.cpp.o
file_compress.app/Contents/MacOS/file_compress: CMakeFiles/file_compress.dir/huffman.cpp.o
file_compress.app/Contents/MacOS/file_compress: CMakeFiles/file_compress.dir/bitstream.cpp.o
file_compress.app/Contents/MacOS/file_compress: CMakeFiles/file_compress.dir/build.make
file_compress.app/Contents/MacOS/file_compress: /opt/homebrew/lib/QtWidgets.framework/Versions/A/QtWidgets
file_compress.app/Contents/MacOS/file_compress: /opt/homebrew/lib/libssl.dylib
file_compress.app/Contents/MacOS/file_compress: /opt/homebrew/lib/libcrypto.dylib
file_compress.app/Contents/MacOS/file_compress: /opt/homebrew/lib/QtGui.framework/Versions/A/QtGui
file_compress.app/Contents/MacOS/file_compress: /opt/homebrew/lib/QtCore.framework/Versions/A/QtCore
file_compress.app/Contents/MacOS/file_compress: CMakeFiles/file_compress.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable file_compress.app/Contents/MacOS/file_compress"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/file_compress.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/file_compress.dir/build: file_compress.app/Contents/MacOS/file_compress
.PHONY : CMakeFiles/file_compress.dir/build

CMakeFiles/file_compress.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/file_compress.dir/cmake_clean.cmake
.PHONY : CMakeFiles/file_compress.dir/clean

CMakeFiles/file_compress.dir/depend: file_compress_autogen/timestamp
	cd /Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/huan/file_compress /Users/huan/file_compress /Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug /Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug /Users/huan/file_compress/build/Desktop_arm_darwin_generic_mach_o_64bit-Debug/CMakeFiles/file_compress.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/file_compress.dir/depend

