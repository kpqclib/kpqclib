# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test

# Include any dependencies generated for this target.
include rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/compiler_depend.make

# Include the progress variables for this target.
include rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/progress.make

# Include the compile flags for this target's objects.
include rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/flags.make

rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.o: rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/flags.make
rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.o: rbc_79_elt/test_rbc_79_elt.cpp
rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.o: rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.o"
	cd /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test/rbc_79_elt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.o -MF CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.o.d -o CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.o -c /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test/rbc_79_elt/test_rbc_79_elt.cpp

rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.i"
	cd /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test/rbc_79_elt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test/rbc_79_elt/test_rbc_79_elt.cpp > CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.i

rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.s"
	cd /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test/rbc_79_elt && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test/rbc_79_elt/test_rbc_79_elt.cpp -o CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.s

# Object files for target test_rbc_79_elt
test_rbc_79_elt_OBJECTS = \
"CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.o"

# External object files for target test_rbc_79_elt
test_rbc_79_elt_EXTERNAL_OBJECTS =

/home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/bin/test_rbc_79_elt: rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/test_rbc_79_elt.cpp.o
/home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/bin/test_rbc_79_elt: rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/build.make
/home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/bin/test_rbc_79_elt: /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/script/preprocessing/../../bin/librbc.a
/home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/bin/test_rbc_79_elt: /usr/lib/x86_64-linux-gnu/libcrypto.so
/home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/bin/test_rbc_79_elt: /usr/lib/x86_64-linux-gnu/libntl.so
/home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/bin/test_rbc_79_elt: /usr/lib/x86_64-linux-gnu/libgmp.so
/home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/bin/test_rbc_79_elt: rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/bin/test_rbc_79_elt"
	cd /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test/rbc_79_elt && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_rbc_79_elt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/build: /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/bin/test_rbc_79_elt
.PHONY : rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/build

rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/clean:
	cd /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test/rbc_79_elt && $(CMAKE_COMMAND) -P CMakeFiles/test_rbc_79_elt.dir/cmake_clean.cmake
.PHONY : rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/clean

rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/depend:
	cd /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test/rbc_79_elt /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test/rbc_79_elt /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/test/unit_test/rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : rbc_79_elt/CMakeFiles/test_rbc_79_elt.dir/depend

