cmake_minimum_required(VERSION 3.12)
project(SCC)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
include_directories(src)
include_directories(test)

add_executable(scc
#        example/heart.c
        include/float.h
        include/iso646.h
        include/stdalign.h
        include/stdarg.h
        include/stdbool.h
        include/stddef.h
        include/stdnoreturn.h
        include/scc.h
        src/ast.cc
        src/ast.h
        src/code_gen.cc
        src/code_gen.h
        src/cpp.cc
        src/cpp.h
        src/encoding.cc
        src/encoding.h
        src/error.cc
        src/error.h
        src/evaluator.cc
        src/evaluator.h
        src/main.cc
        src/mem_pool.h
        src/parser.cc
        src/parser.h
        src/scanner.cc
        src/scanner.h
        src/scope.cc
        src/scope.h
        src/token.cc
        src/token.h
        src/type.cc
        src/type.h
        src/visitor.h
)
