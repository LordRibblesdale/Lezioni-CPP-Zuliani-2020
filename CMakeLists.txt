cmake_minimum_required(VERSION 3.15)
project(Projects_CPP)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "-Wall -c")
#set(CMAKE_CXX_FLAGS_DEBUG "-g")

#set(SourceFolder "Exercises/Exercise 13")
#set(SourceInnerFolder "Exercises/Exercise 10/People")
#set(SourceInnerFolder2 "Exercises/Exercise 10/Home")

#set(SourceFiles "${SourceFolder}/Main.cpp")
#set(SourceFiles2 "${SourceInnerFolder}/Persona.h" "${SourceInnerFolder}/Studente.h" "${SourceInnerFolder}/Docente.h")
#set(SourceFiles3 "${SourceInnerFolder}/Persona.cpp" "${SourceInnerFolder}/Studente.cpp" "${SourceInnerFolder}/Docente.cpp")
#set(SourceFiles4 "${SourceInnerFolder2}/Casa.h" "${SourceInnerFolder2}/Casa.cpp")

#add_executable(Projects_CPP ${SourceFiles} ${SourceFiles2} ${SourceFiles3} ${SourceFiles4})

#set(SourceFiles ${SourceFolder}/Main.cpp ${SourceFolder}/Home ${SourceFolder}/People)

file(GLOB_RECURSE SourceFolder "Exercises/Exercise 15-16/*.cpp" "Exercises/Exercise 15-16/*.h")
add_executable(Projects_CPP ${SourceFolder} "Lessons/Project21.cpp")