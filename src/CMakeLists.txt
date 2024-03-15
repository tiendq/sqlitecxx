set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(TARGET_NAME sqlitecxx)

set(SQLITECXX_SOURCES
  Database.cpp
)

set(SQLITECXX_HEADERS
  ../include/sqlitecxx/Database.h
)

find_package(SQLite3 REQUIRED)

add_library(${TARGET_NAME} ${SQLITECXX_SOURCES} ${SQLITECXX_HEADERS})
add_library("${TARGET_NAME}::${TARGET_NAME}" ALIAS ${TARGET_NAME})

target_include_directories(${TARGET_NAME}
  PRIVATE
    "${CMAKE_SOURCE_DIR}/include/sqlitecxx"
  SYSTEM INTERFACE
    "${CMAKE_SOURCE_DIR}/include/sqlitecxx"
)

target_link_libraries(${TARGET_NAME}
  PRIVATE
    SQLite::SQLite3
)

install(TARGETS ${TARGET_NAME}
  EXPORT "${TARGET_NAME}-export"
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
)
