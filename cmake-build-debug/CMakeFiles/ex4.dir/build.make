# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\idanh\CLionProjects\EX4\ex4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\ex4.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\ex4.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\ex4.dir\flags.make

CMakeFiles\ex4.dir\main.cpp.obj: CMakeFiles\ex4.dir\flags.make
CMakeFiles\ex4.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex4.dir/main.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\ex4.dir\main.cpp.obj /FdCMakeFiles\ex4.dir\ /FS -c C:\Users\idanh\CLionProjects\EX4\ex4\main.cpp
<<

CMakeFiles\ex4.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/main.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" > CMakeFiles\ex4.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\idanh\CLionProjects\EX4\ex4\main.cpp
<<

CMakeFiles\ex4.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/main.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\ex4.dir\main.cpp.s /c C:\Users\idanh\CLionProjects\EX4\ex4\main.cpp
<<

CMakeFiles\ex4.dir\Players\Player.cpp.obj: CMakeFiles\ex4.dir\flags.make
CMakeFiles\ex4.dir\Players\Player.cpp.obj: ..\Players\Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex4.dir/Players/Player.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\ex4.dir\Players\Player.cpp.obj /FdCMakeFiles\ex4.dir\ /FS -c C:\Users\idanh\CLionProjects\EX4\ex4\Players\Player.cpp
<<

CMakeFiles\ex4.dir\Players\Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Players/Player.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" > CMakeFiles\ex4.dir\Players\Player.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\idanh\CLionProjects\EX4\ex4\Players\Player.cpp
<<

CMakeFiles\ex4.dir\Players\Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Players/Player.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\ex4.dir\Players\Player.cpp.s /c C:\Users\idanh\CLionProjects\EX4\ex4\Players\Player.cpp
<<

CMakeFiles\ex4.dir\Cards\Card.cpp.obj: CMakeFiles\ex4.dir\flags.make
CMakeFiles\ex4.dir\Cards\Card.cpp.obj: ..\Cards\Card.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex4.dir/Cards/Card.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\ex4.dir\Cards\Card.cpp.obj /FdCMakeFiles\ex4.dir\ /FS -c C:\Users\idanh\CLionProjects\EX4\ex4\Cards\Card.cpp
<<

CMakeFiles\ex4.dir\Cards\Card.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Cards/Card.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" > CMakeFiles\ex4.dir\Cards\Card.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\idanh\CLionProjects\EX4\ex4\Cards\Card.cpp
<<

CMakeFiles\ex4.dir\Cards\Card.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Cards/Card.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\ex4.dir\Cards\Card.cpp.s /c C:\Users\idanh\CLionProjects\EX4\ex4\Cards\Card.cpp
<<

CMakeFiles\ex4.dir\Players\Rouge.cpp.obj: CMakeFiles\ex4.dir\flags.make
CMakeFiles\ex4.dir\Players\Rouge.cpp.obj: ..\Players\Rouge.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex4.dir/Players/Rouge.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\ex4.dir\Players\Rouge.cpp.obj /FdCMakeFiles\ex4.dir\ /FS -c C:\Users\idanh\CLionProjects\EX4\ex4\Players\Rouge.cpp
<<

CMakeFiles\ex4.dir\Players\Rouge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Players/Rouge.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" > CMakeFiles\ex4.dir\Players\Rouge.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\idanh\CLionProjects\EX4\ex4\Players\Rouge.cpp
<<

CMakeFiles\ex4.dir\Players\Rouge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Players/Rouge.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\ex4.dir\Players\Rouge.cpp.s /c C:\Users\idanh\CLionProjects\EX4\ex4\Players\Rouge.cpp
<<

CMakeFiles\ex4.dir\Players\Wizard.cpp.obj: CMakeFiles\ex4.dir\flags.make
CMakeFiles\ex4.dir\Players\Wizard.cpp.obj: ..\Players\Wizard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ex4.dir/Players/Wizard.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\ex4.dir\Players\Wizard.cpp.obj /FdCMakeFiles\ex4.dir\ /FS -c C:\Users\idanh\CLionProjects\EX4\ex4\Players\Wizard.cpp
<<

CMakeFiles\ex4.dir\Players\Wizard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Players/Wizard.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" > CMakeFiles\ex4.dir\Players\Wizard.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\idanh\CLionProjects\EX4\ex4\Players\Wizard.cpp
<<

CMakeFiles\ex4.dir\Players\Wizard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Players/Wizard.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\ex4.dir\Players\Wizard.cpp.s /c C:\Users\idanh\CLionProjects\EX4\ex4\Players\Wizard.cpp
<<

CMakeFiles\ex4.dir\Players\Fighter.cpp.obj: CMakeFiles\ex4.dir\flags.make
CMakeFiles\ex4.dir\Players\Fighter.cpp.obj: ..\Players\Fighter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ex4.dir/Players/Fighter.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\ex4.dir\Players\Fighter.cpp.obj /FdCMakeFiles\ex4.dir\ /FS -c C:\Users\idanh\CLionProjects\EX4\ex4\Players\Fighter.cpp
<<

CMakeFiles\ex4.dir\Players\Fighter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Players/Fighter.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" > CMakeFiles\ex4.dir\Players\Fighter.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\idanh\CLionProjects\EX4\ex4\Players\Fighter.cpp
<<

CMakeFiles\ex4.dir\Players\Fighter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Players/Fighter.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\ex4.dir\Players\Fighter.cpp.s /c C:\Users\idanh\CLionProjects\EX4\ex4\Players\Fighter.cpp
<<

CMakeFiles\ex4.dir\Cards\BattleCard.cpp.obj: CMakeFiles\ex4.dir\flags.make
CMakeFiles\ex4.dir\Cards\BattleCard.cpp.obj: ..\Cards\BattleCard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ex4.dir/Cards/BattleCard.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\ex4.dir\Cards\BattleCard.cpp.obj /FdCMakeFiles\ex4.dir\ /FS -c C:\Users\idanh\CLionProjects\EX4\ex4\Cards\BattleCard.cpp
<<

CMakeFiles\ex4.dir\Cards\BattleCard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Cards/BattleCard.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" > CMakeFiles\ex4.dir\Cards\BattleCard.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\idanh\CLionProjects\EX4\ex4\Cards\BattleCard.cpp
<<

CMakeFiles\ex4.dir\Cards\BattleCard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Cards/BattleCard.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\ex4.dir\Cards\BattleCard.cpp.s /c C:\Users\idanh\CLionProjects\EX4\ex4\Cards\BattleCard.cpp
<<

CMakeFiles\ex4.dir\Cards\Vampire.cpp.obj: CMakeFiles\ex4.dir\flags.make
CMakeFiles\ex4.dir\Cards\Vampire.cpp.obj: ..\Cards\Vampire.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ex4.dir/Cards/Vampire.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\ex4.dir\Cards\Vampire.cpp.obj /FdCMakeFiles\ex4.dir\ /FS -c C:\Users\idanh\CLionProjects\EX4\ex4\Cards\Vampire.cpp
<<

CMakeFiles\ex4.dir\Cards\Vampire.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Cards/Vampire.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" > CMakeFiles\ex4.dir\Cards\Vampire.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\idanh\CLionProjects\EX4\ex4\Cards\Vampire.cpp
<<

CMakeFiles\ex4.dir\Cards\Vampire.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Cards/Vampire.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\ex4.dir\Cards\Vampire.cpp.s /c C:\Users\idanh\CLionProjects\EX4\ex4\Cards\Vampire.cpp
<<

CMakeFiles\ex4.dir\Cards\Dragon.cpp.obj: CMakeFiles\ex4.dir\flags.make
CMakeFiles\ex4.dir\Cards\Dragon.cpp.obj: ..\Cards\Dragon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ex4.dir/Cards/Dragon.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\ex4.dir\Cards\Dragon.cpp.obj /FdCMakeFiles\ex4.dir\ /FS -c C:\Users\idanh\CLionProjects\EX4\ex4\Cards\Dragon.cpp
<<

CMakeFiles\ex4.dir\Cards\Dragon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Cards/Dragon.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" > CMakeFiles\ex4.dir\Cards\Dragon.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\idanh\CLionProjects\EX4\ex4\Cards\Dragon.cpp
<<

CMakeFiles\ex4.dir\Cards\Dragon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Cards/Dragon.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\ex4.dir\Cards\Dragon.cpp.s /c C:\Users\idanh\CLionProjects\EX4\ex4\Cards\Dragon.cpp
<<

CMakeFiles\ex4.dir\Cards\Pitfall.cpp.obj: CMakeFiles\ex4.dir\flags.make
CMakeFiles\ex4.dir\Cards\Pitfall.cpp.obj: ..\Cards\Pitfall.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ex4.dir/Cards/Pitfall.cpp.obj"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\ex4.dir\Cards\Pitfall.cpp.obj /FdCMakeFiles\ex4.dir\ /FS -c C:\Users\idanh\CLionProjects\EX4\ex4\Cards\Pitfall.cpp
<<

CMakeFiles\ex4.dir\Cards\Pitfall.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex4.dir/Cards/Pitfall.cpp.i"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" > CMakeFiles\ex4.dir\Cards\Pitfall.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\idanh\CLionProjects\EX4\ex4\Cards\Pitfall.cpp
<<

CMakeFiles\ex4.dir\Cards\Pitfall.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex4.dir/Cards/Pitfall.cpp.s"
	"C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\ex4.dir\Cards\Pitfall.cpp.s /c C:\Users\idanh\CLionProjects\EX4\ex4\Cards\Pitfall.cpp
<<

# Object files for target ex4
ex4_OBJECTS = \
"CMakeFiles\ex4.dir\main.cpp.obj" \
"CMakeFiles\ex4.dir\Players\Player.cpp.obj" \
"CMakeFiles\ex4.dir\Cards\Card.cpp.obj" \
"CMakeFiles\ex4.dir\Players\Rouge.cpp.obj" \
"CMakeFiles\ex4.dir\Players\Wizard.cpp.obj" \
"CMakeFiles\ex4.dir\Players\Fighter.cpp.obj" \
"CMakeFiles\ex4.dir\Cards\BattleCard.cpp.obj" \
"CMakeFiles\ex4.dir\Cards\Vampire.cpp.obj" \
"CMakeFiles\ex4.dir\Cards\Dragon.cpp.obj" \
"CMakeFiles\ex4.dir\Cards\Pitfall.cpp.obj"

# External object files for target ex4
ex4_EXTERNAL_OBJECTS =

ex4.exe: CMakeFiles\ex4.dir\main.cpp.obj
ex4.exe: CMakeFiles\ex4.dir\Players\Player.cpp.obj
ex4.exe: CMakeFiles\ex4.dir\Cards\Card.cpp.obj
ex4.exe: CMakeFiles\ex4.dir\Players\Rouge.cpp.obj
ex4.exe: CMakeFiles\ex4.dir\Players\Wizard.cpp.obj
ex4.exe: CMakeFiles\ex4.dir\Players\Fighter.cpp.obj
ex4.exe: CMakeFiles\ex4.dir\Cards\BattleCard.cpp.obj
ex4.exe: CMakeFiles\ex4.dir\Cards\Vampire.cpp.obj
ex4.exe: CMakeFiles\ex4.dir\Cards\Dragon.cpp.obj
ex4.exe: CMakeFiles\ex4.dir\Cards\Pitfall.cpp.obj
ex4.exe: CMakeFiles\ex4.dir\build.make
ex4.exe: CMakeFiles\ex4.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable ex4.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\ex4.dir --rc="C:\PROGRA~2\Windows Kits\10\bin\10.0.19041.0\x86\rc.exe" --mt="C:\PROGRA~2\Windows Kits\10\bin\10.0.19041.0\x86\mt.exe" --manifests -- "C:\PROGRA~2\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\ex4.dir\objects1.rsp @<<
 /out:ex4.exe /implib:ex4.lib /pdb:C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug\ex4.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\ex4.dir\build: ex4.exe
.PHONY : CMakeFiles\ex4.dir\build

CMakeFiles\ex4.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ex4.dir\cmake_clean.cmake
.PHONY : CMakeFiles\ex4.dir\clean

CMakeFiles\ex4.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\idanh\CLionProjects\EX4\ex4 C:\Users\idanh\CLionProjects\EX4\ex4 C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug C:\Users\idanh\CLionProjects\EX4\ex4\cmake-build-debug\CMakeFiles\ex4.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\ex4.dir\depend

