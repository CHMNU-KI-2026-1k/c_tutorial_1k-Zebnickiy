project("aud.work")

file(GLOB SRC src/*.c)

include_directories(include)

add_executable(${PROJECT_NAME} ${SRC})
