#!/bin/bash

gcc -lstdc++ -c search_menu.cpp

gcc -lstdc++ -c main.cpp

gcc -lstdc++ -c search_sort.cpp

gcc -lstdc++ -c ucitaj.cpp

gcc -lstdc++ -c search_sekvencijalno.cpp
gcc -lstdc++ -c search_binarno.cpp


gcc -lstdc++ -c sort_insertion.cpp
gcc -lstdc++ -c sort_selection.cpp

gcc -lstdc++ -c sort_bubble.cpp
gcc -lstdc++ -c sort_quick.cpp


gcc -lstdc++ -c sort.cpp


gcc -lstdc++ main.o search_menu.o search_sort.o ucitaj.o \
     search_binarno.o search_sekvencijalno.o \
     sort_insertion.o sort_selection.o \
     sort_bubble.o sort_quick.o \
     sort.o

