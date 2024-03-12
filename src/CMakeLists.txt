set(TARGET_NAME sqlitecxx)

set(SQLITECXX_SOURCES
  Database.cpp
)

set(SQLITECXX_HEADERS
  ../include/Database.h
)

add_library(${TARGET_NAME} ${SQLITECXX_SOURCES} ${SQLITECXX_HEADERS})
add_library("${TARGET_NAME}::${TARGET_NAME}" ALIAS ${TARGET_NAME})

target_include_directories(${TARGET_NAME}
  PRIVATE
    "${CMAKE_SOURCE_DIR}/include"
  SYSTEM INTERFACE
    "${CMAKE_SOURCE_DIR}/include"
)
