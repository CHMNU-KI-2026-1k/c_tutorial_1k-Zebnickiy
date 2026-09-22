project("lab01.1")

file(GLOB SRC src/*.c)

include_directories(include)

add_executable(${PROJECT_NAME} ${SRC})
