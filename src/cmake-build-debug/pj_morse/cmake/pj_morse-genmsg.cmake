# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "pj_morse: 1 messages, 0 services")

set(MSG_I_FLAGS "-Ipj_morse:/home/lj/catkin_ws/src/pj_morse/msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(pj_morse_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/lj/catkin_ws/src/pj_morse/msg/morse.msg" NAME_WE)
add_custom_target(_pj_morse_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "pj_morse" "/home/lj/catkin_ws/src/pj_morse/msg/morse.msg" ""
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(pj_morse
  "/home/lj/catkin_ws/src/pj_morse/msg/morse.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pj_morse
)

### Generating Services

### Generating Module File
_generate_module_cpp(pj_morse
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pj_morse
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(pj_morse_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(pj_morse_generate_messages pj_morse_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lj/catkin_ws/src/pj_morse/msg/morse.msg" NAME_WE)
add_dependencies(pj_morse_generate_messages_cpp _pj_morse_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(pj_morse_gencpp)
add_dependencies(pj_morse_gencpp pj_morse_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pj_morse_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(pj_morse
  "/home/lj/catkin_ws/src/pj_morse/msg/morse.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/pj_morse
)

### Generating Services

### Generating Module File
_generate_module_eus(pj_morse
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/pj_morse
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(pj_morse_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(pj_morse_generate_messages pj_morse_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lj/catkin_ws/src/pj_morse/msg/morse.msg" NAME_WE)
add_dependencies(pj_morse_generate_messages_eus _pj_morse_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(pj_morse_geneus)
add_dependencies(pj_morse_geneus pj_morse_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pj_morse_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(pj_morse
  "/home/lj/catkin_ws/src/pj_morse/msg/morse.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pj_morse
)

### Generating Services

### Generating Module File
_generate_module_lisp(pj_morse
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pj_morse
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(pj_morse_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(pj_morse_generate_messages pj_morse_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lj/catkin_ws/src/pj_morse/msg/morse.msg" NAME_WE)
add_dependencies(pj_morse_generate_messages_lisp _pj_morse_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(pj_morse_genlisp)
add_dependencies(pj_morse_genlisp pj_morse_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pj_morse_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(pj_morse
  "/home/lj/catkin_ws/src/pj_morse/msg/morse.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/pj_morse
)

### Generating Services

### Generating Module File
_generate_module_nodejs(pj_morse
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/pj_morse
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(pj_morse_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(pj_morse_generate_messages pj_morse_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lj/catkin_ws/src/pj_morse/msg/morse.msg" NAME_WE)
add_dependencies(pj_morse_generate_messages_nodejs _pj_morse_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(pj_morse_gennodejs)
add_dependencies(pj_morse_gennodejs pj_morse_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pj_morse_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(pj_morse
  "/home/lj/catkin_ws/src/pj_morse/msg/morse.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pj_morse
)

### Generating Services

### Generating Module File
_generate_module_py(pj_morse
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pj_morse
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(pj_morse_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(pj_morse_generate_messages pj_morse_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/lj/catkin_ws/src/pj_morse/msg/morse.msg" NAME_WE)
add_dependencies(pj_morse_generate_messages_py _pj_morse_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(pj_morse_genpy)
add_dependencies(pj_morse_genpy pj_morse_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS pj_morse_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pj_morse)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/pj_morse
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(pj_morse_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/pj_morse)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/pj_morse
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(pj_morse_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pj_morse)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/pj_morse
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(pj_morse_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/pj_morse)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/pj_morse
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(pj_morse_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pj_morse)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pj_morse\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/pj_morse
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(pj_morse_generate_messages_py std_msgs_generate_messages_py)
endif()
