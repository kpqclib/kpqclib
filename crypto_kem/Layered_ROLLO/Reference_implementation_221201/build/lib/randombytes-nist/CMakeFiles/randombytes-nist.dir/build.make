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
CMAKE_SOURCE_DIR = /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build

# Include any dependencies generated for this target.
include lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/progress.make

# Include the compile flags for this target's objects.
include lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/flags.make

lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/randombytes.c.o: lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/flags.make
lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/randombytes.c.o: lib/randombytes-nist/randombytes.c
lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/randombytes.c.o: lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/randombytes.c.o"
	cd /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/lib/randombytes-nist && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/randombytes.c.o -MF CMakeFiles/randombytes-nist.dir/randombytes.c.o.d -o CMakeFiles/randombytes-nist.dir/randombytes.c.o -c /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/lib/randombytes-nist/randombytes.c

lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/randombytes.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/randombytes-nist.dir/randombytes.c.i"
	cd /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/lib/randombytes-nist && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/lib/randombytes-nist/randombytes.c > CMakeFiles/randombytes-nist.dir/randombytes.c.i

lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/randombytes.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/randombytes-nist.dir/randombytes.c.s"
	cd /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/lib/randombytes-nist && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/lib/randombytes-nist/randombytes.c -o CMakeFiles/randombytes-nist.dir/randombytes.c.s

randombytes-nist: lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/randombytes.c.o
randombytes-nist: lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/build.make
.PHONY : randombytes-nist

# Rule to build all files generated by this target.
lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/build: randombytes-nist
.PHONY : lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/build

lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/clean:
	cd /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/lib/randombytes-nist && $(CMAKE_COMMAND) -P CMakeFiles/randombytes-nist.dir/cmake_clean.cmake
.PHONY : lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/clean

lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/depend:
	cd /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/lib/randombytes-nist /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/lib/randombytes-nist /home/mingiiiiiiii/KPQClean_0728/KPQClean/crypto_kem/Layered_ROLLO/Reference_implementation_221201/build/lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/randombytes-nist/CMakeFiles/randombytes-nist.dir/depend

