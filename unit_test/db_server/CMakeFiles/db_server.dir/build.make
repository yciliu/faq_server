# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gl/faq_server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gl/faq_server/unit_test

# Include any dependencies generated for this target.
include db_server/CMakeFiles/db_server.dir/depend.make

# Include the progress variables for this target.
include db_server/CMakeFiles/db_server.dir/progress.make

# Include the compile flags for this target's objects.
include db_server/CMakeFiles/db_server.dir/flags.make

db_server/CMakeFiles/db_server.dir/db_client.cpp.o: db_server/CMakeFiles/db_server.dir/flags.make
db_server/CMakeFiles/db_server.dir/db_client.cpp.o: ../db_server/db_client.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gl/faq_server/unit_test/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object db_server/CMakeFiles/db_server.dir/db_client.cpp.o"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/db_server.dir/db_client.cpp.o -c /home/gl/faq_server/db_server/db_client.cpp

db_server/CMakeFiles/db_server.dir/db_client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/db_server.dir/db_client.cpp.i"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gl/faq_server/db_server/db_client.cpp > CMakeFiles/db_server.dir/db_client.cpp.i

db_server/CMakeFiles/db_server.dir/db_client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/db_server.dir/db_client.cpp.s"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gl/faq_server/db_server/db_client.cpp -o CMakeFiles/db_server.dir/db_client.cpp.s

db_server/CMakeFiles/db_server.dir/db_client.cpp.o.requires:
.PHONY : db_server/CMakeFiles/db_server.dir/db_client.cpp.o.requires

db_server/CMakeFiles/db_server.dir/db_client.cpp.o.provides: db_server/CMakeFiles/db_server.dir/db_client.cpp.o.requires
	$(MAKE) -f db_server/CMakeFiles/db_server.dir/build.make db_server/CMakeFiles/db_server.dir/db_client.cpp.o.provides.build
.PHONY : db_server/CMakeFiles/db_server.dir/db_client.cpp.o.provides

db_server/CMakeFiles/db_server.dir/db_client.cpp.o.provides.build: db_server/CMakeFiles/db_server.dir/db_client.cpp.o

db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.o: db_server/CMakeFiles/db_server.dir/flags.make
db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.o: ../db_server/action_data_work_message.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gl/faq_server/unit_test/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.o"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/db_server.dir/action_data_work_message.cpp.o -c /home/gl/faq_server/db_server/action_data_work_message.cpp

db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/db_server.dir/action_data_work_message.cpp.i"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gl/faq_server/db_server/action_data_work_message.cpp > CMakeFiles/db_server.dir/action_data_work_message.cpp.i

db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/db_server.dir/action_data_work_message.cpp.s"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gl/faq_server/db_server/action_data_work_message.cpp -o CMakeFiles/db_server.dir/action_data_work_message.cpp.s

db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.o.requires:
.PHONY : db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.o.requires

db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.o.provides: db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.o.requires
	$(MAKE) -f db_server/CMakeFiles/db_server.dir/build.make db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.o.provides.build
.PHONY : db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.o.provides

db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.o.provides.build: db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.o

db_server/CMakeFiles/db_server.dir/db_service.cpp.o: db_server/CMakeFiles/db_server.dir/flags.make
db_server/CMakeFiles/db_server.dir/db_service.cpp.o: ../db_server/db_service.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gl/faq_server/unit_test/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object db_server/CMakeFiles/db_server.dir/db_service.cpp.o"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/db_server.dir/db_service.cpp.o -c /home/gl/faq_server/db_server/db_service.cpp

db_server/CMakeFiles/db_server.dir/db_service.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/db_server.dir/db_service.cpp.i"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gl/faq_server/db_server/db_service.cpp > CMakeFiles/db_server.dir/db_service.cpp.i

db_server/CMakeFiles/db_server.dir/db_service.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/db_server.dir/db_service.cpp.s"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gl/faq_server/db_server/db_service.cpp -o CMakeFiles/db_server.dir/db_service.cpp.s

db_server/CMakeFiles/db_server.dir/db_service.cpp.o.requires:
.PHONY : db_server/CMakeFiles/db_server.dir/db_service.cpp.o.requires

db_server/CMakeFiles/db_server.dir/db_service.cpp.o.provides: db_server/CMakeFiles/db_server.dir/db_service.cpp.o.requires
	$(MAKE) -f db_server/CMakeFiles/db_server.dir/build.make db_server/CMakeFiles/db_server.dir/db_service.cpp.o.provides.build
.PHONY : db_server/CMakeFiles/db_server.dir/db_service.cpp.o.provides

db_server/CMakeFiles/db_server.dir/db_service.cpp.o.provides.build: db_server/CMakeFiles/db_server.dir/db_service.cpp.o

db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.o: db_server/CMakeFiles/db_server.dir/flags.make
db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.o: ../db_server/db_connection_pool.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gl/faq_server/unit_test/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.o"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/db_server.dir/db_connection_pool.cpp.o -c /home/gl/faq_server/db_server/db_connection_pool.cpp

db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/db_server.dir/db_connection_pool.cpp.i"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gl/faq_server/db_server/db_connection_pool.cpp > CMakeFiles/db_server.dir/db_connection_pool.cpp.i

db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/db_server.dir/db_connection_pool.cpp.s"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gl/faq_server/db_server/db_connection_pool.cpp -o CMakeFiles/db_server.dir/db_connection_pool.cpp.s

db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.o.requires:
.PHONY : db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.o.requires

db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.o.provides: db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.o.requires
	$(MAKE) -f db_server/CMakeFiles/db_server.dir/build.make db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.o.provides.build
.PHONY : db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.o.provides

db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.o.provides.build: db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.o

db_server/CMakeFiles/db_server.dir/data_worker.cpp.o: db_server/CMakeFiles/db_server.dir/flags.make
db_server/CMakeFiles/db_server.dir/data_worker.cpp.o: ../db_server/data_worker.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gl/faq_server/unit_test/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object db_server/CMakeFiles/db_server.dir/data_worker.cpp.o"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/db_server.dir/data_worker.cpp.o -c /home/gl/faq_server/db_server/data_worker.cpp

db_server/CMakeFiles/db_server.dir/data_worker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/db_server.dir/data_worker.cpp.i"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gl/faq_server/db_server/data_worker.cpp > CMakeFiles/db_server.dir/data_worker.cpp.i

db_server/CMakeFiles/db_server.dir/data_worker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/db_server.dir/data_worker.cpp.s"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gl/faq_server/db_server/data_worker.cpp -o CMakeFiles/db_server.dir/data_worker.cpp.s

db_server/CMakeFiles/db_server.dir/data_worker.cpp.o.requires:
.PHONY : db_server/CMakeFiles/db_server.dir/data_worker.cpp.o.requires

db_server/CMakeFiles/db_server.dir/data_worker.cpp.o.provides: db_server/CMakeFiles/db_server.dir/data_worker.cpp.o.requires
	$(MAKE) -f db_server/CMakeFiles/db_server.dir/build.make db_server/CMakeFiles/db_server.dir/data_worker.cpp.o.provides.build
.PHONY : db_server/CMakeFiles/db_server.dir/data_worker.cpp.o.provides

db_server/CMakeFiles/db_server.dir/data_worker.cpp.o.provides.build: db_server/CMakeFiles/db_server.dir/data_worker.cpp.o

db_server/CMakeFiles/db_server.dir/db_application.cpp.o: db_server/CMakeFiles/db_server.dir/flags.make
db_server/CMakeFiles/db_server.dir/db_application.cpp.o: ../db_server/db_application.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gl/faq_server/unit_test/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object db_server/CMakeFiles/db_server.dir/db_application.cpp.o"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/db_server.dir/db_application.cpp.o -c /home/gl/faq_server/db_server/db_application.cpp

db_server/CMakeFiles/db_server.dir/db_application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/db_server.dir/db_application.cpp.i"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gl/faq_server/db_server/db_application.cpp > CMakeFiles/db_server.dir/db_application.cpp.i

db_server/CMakeFiles/db_server.dir/db_application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/db_server.dir/db_application.cpp.s"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gl/faq_server/db_server/db_application.cpp -o CMakeFiles/db_server.dir/db_application.cpp.s

db_server/CMakeFiles/db_server.dir/db_application.cpp.o.requires:
.PHONY : db_server/CMakeFiles/db_server.dir/db_application.cpp.o.requires

db_server/CMakeFiles/db_server.dir/db_application.cpp.o.provides: db_server/CMakeFiles/db_server.dir/db_application.cpp.o.requires
	$(MAKE) -f db_server/CMakeFiles/db_server.dir/build.make db_server/CMakeFiles/db_server.dir/db_application.cpp.o.provides.build
.PHONY : db_server/CMakeFiles/db_server.dir/db_application.cpp.o.provides

db_server/CMakeFiles/db_server.dir/db_application.cpp.o.provides.build: db_server/CMakeFiles/db_server.dir/db_application.cpp.o

db_server/CMakeFiles/db_server.dir/work_manager.cpp.o: db_server/CMakeFiles/db_server.dir/flags.make
db_server/CMakeFiles/db_server.dir/work_manager.cpp.o: ../db_server/work_manager.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/gl/faq_server/unit_test/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object db_server/CMakeFiles/db_server.dir/work_manager.cpp.o"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/db_server.dir/work_manager.cpp.o -c /home/gl/faq_server/db_server/work_manager.cpp

db_server/CMakeFiles/db_server.dir/work_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/db_server.dir/work_manager.cpp.i"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/gl/faq_server/db_server/work_manager.cpp > CMakeFiles/db_server.dir/work_manager.cpp.i

db_server/CMakeFiles/db_server.dir/work_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/db_server.dir/work_manager.cpp.s"
	cd /home/gl/faq_server/unit_test/db_server && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/gl/faq_server/db_server/work_manager.cpp -o CMakeFiles/db_server.dir/work_manager.cpp.s

db_server/CMakeFiles/db_server.dir/work_manager.cpp.o.requires:
.PHONY : db_server/CMakeFiles/db_server.dir/work_manager.cpp.o.requires

db_server/CMakeFiles/db_server.dir/work_manager.cpp.o.provides: db_server/CMakeFiles/db_server.dir/work_manager.cpp.o.requires
	$(MAKE) -f db_server/CMakeFiles/db_server.dir/build.make db_server/CMakeFiles/db_server.dir/work_manager.cpp.o.provides.build
.PHONY : db_server/CMakeFiles/db_server.dir/work_manager.cpp.o.provides

db_server/CMakeFiles/db_server.dir/work_manager.cpp.o.provides.build: db_server/CMakeFiles/db_server.dir/work_manager.cpp.o

# Object files for target db_server
db_server_OBJECTS = \
"CMakeFiles/db_server.dir/db_client.cpp.o" \
"CMakeFiles/db_server.dir/action_data_work_message.cpp.o" \
"CMakeFiles/db_server.dir/db_service.cpp.o" \
"CMakeFiles/db_server.dir/db_connection_pool.cpp.o" \
"CMakeFiles/db_server.dir/data_worker.cpp.o" \
"CMakeFiles/db_server.dir/db_application.cpp.o" \
"CMakeFiles/db_server.dir/work_manager.cpp.o"

# External object files for target db_server
db_server_EXTERNAL_OBJECTS =

../game_exe/db_server: db_server/CMakeFiles/db_server.dir/db_client.cpp.o
../game_exe/db_server: db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.o
../game_exe/db_server: db_server/CMakeFiles/db_server.dir/db_service.cpp.o
../game_exe/db_server: db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.o
../game_exe/db_server: db_server/CMakeFiles/db_server.dir/data_worker.cpp.o
../game_exe/db_server: db_server/CMakeFiles/db_server.dir/db_application.cpp.o
../game_exe/db_server: db_server/CMakeFiles/db_server.dir/work_manager.cpp.o
../game_exe/db_server: db_server/CMakeFiles/db_server.dir/build.make
../game_exe/db_server: ../game_lib/libcommon.a
../game_exe/db_server: game_lib/libmessage_lib.a
../game_exe/db_server: db_server/CMakeFiles/db_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../game_exe/db_server"
	cd /home/gl/faq_server/unit_test/db_server && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/db_server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
db_server/CMakeFiles/db_server.dir/build: ../game_exe/db_server
.PHONY : db_server/CMakeFiles/db_server.dir/build

db_server/CMakeFiles/db_server.dir/requires: db_server/CMakeFiles/db_server.dir/db_client.cpp.o.requires
db_server/CMakeFiles/db_server.dir/requires: db_server/CMakeFiles/db_server.dir/action_data_work_message.cpp.o.requires
db_server/CMakeFiles/db_server.dir/requires: db_server/CMakeFiles/db_server.dir/db_service.cpp.o.requires
db_server/CMakeFiles/db_server.dir/requires: db_server/CMakeFiles/db_server.dir/db_connection_pool.cpp.o.requires
db_server/CMakeFiles/db_server.dir/requires: db_server/CMakeFiles/db_server.dir/data_worker.cpp.o.requires
db_server/CMakeFiles/db_server.dir/requires: db_server/CMakeFiles/db_server.dir/db_application.cpp.o.requires
db_server/CMakeFiles/db_server.dir/requires: db_server/CMakeFiles/db_server.dir/work_manager.cpp.o.requires
.PHONY : db_server/CMakeFiles/db_server.dir/requires

db_server/CMakeFiles/db_server.dir/clean:
	cd /home/gl/faq_server/unit_test/db_server && $(CMAKE_COMMAND) -P CMakeFiles/db_server.dir/cmake_clean.cmake
.PHONY : db_server/CMakeFiles/db_server.dir/clean

db_server/CMakeFiles/db_server.dir/depend:
	cd /home/gl/faq_server/unit_test && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gl/faq_server /home/gl/faq_server/db_server /home/gl/faq_server/unit_test /home/gl/faq_server/unit_test/db_server /home/gl/faq_server/unit_test/db_server/CMakeFiles/db_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : db_server/CMakeFiles/db_server.dir/depend

