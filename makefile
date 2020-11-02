CXX = g++
CXX_FLAGS = -std=c++14 -g -Wall

Practica_5: data_types references arithmetic_operators boolean_operators
 data_types: data_types.cc
    $(CXX) $(CXX_FLAGS) -o data_types.out data_types.cc
 references: references.cc
    $(CXX) $(CXX_FLAGS) -o references.out references.cc
 arithmetic_operators: arithmetic_operators.cc
    $(CXX) $(CXX_FLAGS) -o arithmetic_operators.out arithmetic_operators.cc
 boolean_operators: boolean_operators.cc
    $(CXX) $(CXX_FLAGS) -o boolean_operators.out boolean_operators.cc

.PHONY: clean
 clean:
  rm -f *.out
