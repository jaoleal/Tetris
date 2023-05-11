@echo off
    g++ src/main.cpp -o binaries/release.exe -I src/ -L lib/ -lraylib -Wall -Wno-missing-braces  -lopengl32 -lgdi32 -lwinmm