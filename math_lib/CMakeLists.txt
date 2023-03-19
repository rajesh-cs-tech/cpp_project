project(math_lib)

file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/${PROJECT_NAME}/*.cpp)

add_library(${PROJECT_NAME} ${SOURCES})

add_library(sub::math_lib ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/)
