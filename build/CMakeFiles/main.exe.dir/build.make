# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\Application\cmake\bin\cmake.exe

# The command to remove a file.
RM = D:\Application\cmake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Code\C++\workermanagement

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Code\C++\workermanagement\build

# Include any dependencies generated for this target.
include CMakeFiles/main.exe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.exe.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.exe.dir/flags.make

CMakeFiles/main.exe.dir/src/main.cpp.obj: CMakeFiles/main.exe.dir/flags.make
CMakeFiles/main.exe.dir/src/main.cpp.obj: ../src/main.cpp
CMakeFiles/main.exe.dir/src/main.cpp.obj: CMakeFiles/main.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\C++\workermanagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.exe.dir/src/main.cpp.obj"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.exe.dir/src/main.cpp.obj -MF CMakeFiles\main.exe.dir\src\main.cpp.obj.d -o CMakeFiles\main.exe.dir\src\main.cpp.obj -c E:\Code\C++\workermanagement\src\main.cpp

CMakeFiles/main.exe.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.exe.dir/src/main.cpp.i"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\C++\workermanagement\src\main.cpp > CMakeFiles\main.exe.dir\src\main.cpp.i

CMakeFiles/main.exe.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.exe.dir/src/main.cpp.s"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\C++\workermanagement\src\main.cpp -o CMakeFiles\main.exe.dir\src\main.cpp.s

CMakeFiles/main.exe.dir/src/workerManagement.cpp.obj: CMakeFiles/main.exe.dir/flags.make
CMakeFiles/main.exe.dir/src/workerManagement.cpp.obj: ../src/workerManagement.cpp
CMakeFiles/main.exe.dir/src/workerManagement.cpp.obj: CMakeFiles/main.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\C++\workermanagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.exe.dir/src/workerManagement.cpp.obj"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.exe.dir/src/workerManagement.cpp.obj -MF CMakeFiles\main.exe.dir\src\workerManagement.cpp.obj.d -o CMakeFiles\main.exe.dir\src\workerManagement.cpp.obj -c E:\Code\C++\workermanagement\src\workerManagement.cpp

CMakeFiles/main.exe.dir/src/workerManagement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.exe.dir/src/workerManagement.cpp.i"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\C++\workermanagement\src\workerManagement.cpp > CMakeFiles\main.exe.dir\src\workerManagement.cpp.i

CMakeFiles/main.exe.dir/src/workerManagement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.exe.dir/src/workerManagement.cpp.s"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\C++\workermanagement\src\workerManagement.cpp -o CMakeFiles\main.exe.dir\src\workerManagement.cpp.s

CMakeFiles/main.exe.dir/src/personnel.cpp.obj: CMakeFiles/main.exe.dir/flags.make
CMakeFiles/main.exe.dir/src/personnel.cpp.obj: ../src/personnel.cpp
CMakeFiles/main.exe.dir/src/personnel.cpp.obj: CMakeFiles/main.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\C++\workermanagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.exe.dir/src/personnel.cpp.obj"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.exe.dir/src/personnel.cpp.obj -MF CMakeFiles\main.exe.dir\src\personnel.cpp.obj.d -o CMakeFiles\main.exe.dir\src\personnel.cpp.obj -c E:\Code\C++\workermanagement\src\personnel.cpp

CMakeFiles/main.exe.dir/src/personnel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.exe.dir/src/personnel.cpp.i"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\C++\workermanagement\src\personnel.cpp > CMakeFiles\main.exe.dir\src\personnel.cpp.i

CMakeFiles/main.exe.dir/src/personnel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.exe.dir/src/personnel.cpp.s"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\C++\workermanagement\src\personnel.cpp -o CMakeFiles\main.exe.dir\src\personnel.cpp.s

CMakeFiles/main.exe.dir/src/finance.cpp.obj: CMakeFiles/main.exe.dir/flags.make
CMakeFiles/main.exe.dir/src/finance.cpp.obj: ../src/finance.cpp
CMakeFiles/main.exe.dir/src/finance.cpp.obj: CMakeFiles/main.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\C++\workermanagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.exe.dir/src/finance.cpp.obj"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.exe.dir/src/finance.cpp.obj -MF CMakeFiles\main.exe.dir\src\finance.cpp.obj.d -o CMakeFiles\main.exe.dir\src\finance.cpp.obj -c E:\Code\C++\workermanagement\src\finance.cpp

CMakeFiles/main.exe.dir/src/finance.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.exe.dir/src/finance.cpp.i"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\C++\workermanagement\src\finance.cpp > CMakeFiles\main.exe.dir\src\finance.cpp.i

CMakeFiles/main.exe.dir/src/finance.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.exe.dir/src/finance.cpp.s"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\C++\workermanagement\src\finance.cpp -o CMakeFiles\main.exe.dir\src\finance.cpp.s

CMakeFiles/main.exe.dir/src/gmo.cpp.obj: CMakeFiles/main.exe.dir/flags.make
CMakeFiles/main.exe.dir/src/gmo.cpp.obj: ../src/gmo.cpp
CMakeFiles/main.exe.dir/src/gmo.cpp.obj: CMakeFiles/main.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\C++\workermanagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.exe.dir/src/gmo.cpp.obj"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.exe.dir/src/gmo.cpp.obj -MF CMakeFiles\main.exe.dir\src\gmo.cpp.obj.d -o CMakeFiles\main.exe.dir\src\gmo.cpp.obj -c E:\Code\C++\workermanagement\src\gmo.cpp

CMakeFiles/main.exe.dir/src/gmo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.exe.dir/src/gmo.cpp.i"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\C++\workermanagement\src\gmo.cpp > CMakeFiles\main.exe.dir\src\gmo.cpp.i

CMakeFiles/main.exe.dir/src/gmo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.exe.dir/src/gmo.cpp.s"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\C++\workermanagement\src\gmo.cpp -o CMakeFiles\main.exe.dir\src\gmo.cpp.s

CMakeFiles/main.exe.dir/src/sales.cpp.obj: CMakeFiles/main.exe.dir/flags.make
CMakeFiles/main.exe.dir/src/sales.cpp.obj: ../src/sales.cpp
CMakeFiles/main.exe.dir/src/sales.cpp.obj: CMakeFiles/main.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\C++\workermanagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.exe.dir/src/sales.cpp.obj"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.exe.dir/src/sales.cpp.obj -MF CMakeFiles\main.exe.dir\src\sales.cpp.obj.d -o CMakeFiles\main.exe.dir\src\sales.cpp.obj -c E:\Code\C++\workermanagement\src\sales.cpp

CMakeFiles/main.exe.dir/src/sales.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.exe.dir/src/sales.cpp.i"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\C++\workermanagement\src\sales.cpp > CMakeFiles\main.exe.dir\src\sales.cpp.i

CMakeFiles/main.exe.dir/src/sales.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.exe.dir/src/sales.cpp.s"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\C++\workermanagement\src\sales.cpp -o CMakeFiles\main.exe.dir\src\sales.cpp.s

CMakeFiles/main.exe.dir/src/production.cpp.obj: CMakeFiles/main.exe.dir/flags.make
CMakeFiles/main.exe.dir/src/production.cpp.obj: ../src/production.cpp
CMakeFiles/main.exe.dir/src/production.cpp.obj: CMakeFiles/main.exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\C++\workermanagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/main.exe.dir/src/production.cpp.obj"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.exe.dir/src/production.cpp.obj -MF CMakeFiles\main.exe.dir\src\production.cpp.obj.d -o CMakeFiles\main.exe.dir\src\production.cpp.obj -c E:\Code\C++\workermanagement\src\production.cpp

CMakeFiles/main.exe.dir/src/production.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.exe.dir/src/production.cpp.i"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\C++\workermanagement\src\production.cpp > CMakeFiles\main.exe.dir\src\production.cpp.i

CMakeFiles/main.exe.dir/src/production.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.exe.dir/src/production.cpp.s"
	D:\Application\mingw64\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\C++\workermanagement\src\production.cpp -o CMakeFiles\main.exe.dir\src\production.cpp.s

# Object files for target main.exe
main_exe_OBJECTS = \
"CMakeFiles/main.exe.dir/src/main.cpp.obj" \
"CMakeFiles/main.exe.dir/src/workerManagement.cpp.obj" \
"CMakeFiles/main.exe.dir/src/personnel.cpp.obj" \
"CMakeFiles/main.exe.dir/src/finance.cpp.obj" \
"CMakeFiles/main.exe.dir/src/gmo.cpp.obj" \
"CMakeFiles/main.exe.dir/src/sales.cpp.obj" \
"CMakeFiles/main.exe.dir/src/production.cpp.obj"

# External object files for target main.exe
main_exe_EXTERNAL_OBJECTS =

main.exe.exe: CMakeFiles/main.exe.dir/src/main.cpp.obj
main.exe.exe: CMakeFiles/main.exe.dir/src/workerManagement.cpp.obj
main.exe.exe: CMakeFiles/main.exe.dir/src/personnel.cpp.obj
main.exe.exe: CMakeFiles/main.exe.dir/src/finance.cpp.obj
main.exe.exe: CMakeFiles/main.exe.dir/src/gmo.cpp.obj
main.exe.exe: CMakeFiles/main.exe.dir/src/sales.cpp.obj
main.exe.exe: CMakeFiles/main.exe.dir/src/production.cpp.obj
main.exe.exe: CMakeFiles/main.exe.dir/build.make
main.exe.exe: CMakeFiles/main.exe.dir/linklibs.rsp
main.exe.exe: CMakeFiles/main.exe.dir/objects1.rsp
main.exe.exe: CMakeFiles/main.exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Code\C++\workermanagement\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable main.exe.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main.exe.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.exe.dir/build: main.exe.exe
.PHONY : CMakeFiles/main.exe.dir/build

CMakeFiles/main.exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\main.exe.dir\cmake_clean.cmake
.PHONY : CMakeFiles/main.exe.dir/clean

CMakeFiles/main.exe.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Code\C++\workermanagement E:\Code\C++\workermanagement E:\Code\C++\workermanagement\build E:\Code\C++\workermanagement\build E:\Code\C++\workermanagement\build\CMakeFiles\main.exe.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.exe.dir/depend
