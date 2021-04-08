cmake_minimum_required(VERSION 3.17)
project(turism_1511_2021)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(json
        GIT_REPOSITORY https://github.com/ArthurSonzogni/nlohmann_json_cmake_fetchcontent
        GIT_TAG v3.7.3)

FetchContent_GetProperties(json)
if (NOT json_POPULATED)
    FetchContent_Populate(json)
    add_subdirectory(${json_SOURCE_DIR} ${json_BINARY_DIR} EXCLUDE_FROM_ALL)
endif ()


add_executable(turism_1511_2021
        main.cpp Turist.cpp Turist.h Obiectiv.cpp Obiectiv.h Locatie.cpp Locatie.h Sejur.cpp Sejur.h fonduri_insuficiente.cpp fonduri_insuficiente.h LocatieMunte.cpp LocatieMunte.h LocatieMare.cpp LocatieMare.h)

target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json)
