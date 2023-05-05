@echo off
gcc src\main.cpp -o binaries\release.exe -lraylib -Wall -Wno-missing-braces -I .\src\ -L .\lib\ -lopengl32 -lgdi32 -lwinmm
