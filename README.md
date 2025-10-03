# Competitive Programming Quick Run

This workspace lets you compile `practice.cpp` and run it with `input.txt`, saving output to `output.txt`.

## Prerequisites

Pick ONE environment:

- Windows + MinGW-w64 (recommended on Windows)
  - Install MSYS2: https://www.msys2.org/
  - In MSYS2 MinGW64 shell, install: `pacman -S --needed mingw-w64-ucrt-x86_64-gcc`
  - Add the MinGW-w64 bin folder to PATH, e.g. `C:\msys64\ucrt64\bin` or `C:\msys64\mingw64\bin`.
- OR Windows Subsystem for Linux (WSL) with g++: `sudo apt update && sudo apt install -y g++`
- OR Git Bash with g++ available on PATH

## VS Code Tasks

Use one of the tasks:

- Build and Run CP (Windows MinGW) — default build task (Ctrl+Shift+B)
- Build and Run CP (WSL)
- Build and Run CP (Git Bash)

These compile and run:

- Compile: `g++ practice.cpp -std=gnu++17 -O2 -pipe -Wall -Wextra -o obj(.exe)`
- Run with input redirection: `obj < input.txt > output.txt`

## Tips

- Edit `practice.cpp` to solve a problem. Use `input.txt` for sample input.
- Output appears in `output.txt`.
- If you see "g++: command not found", install a compiler and ensure it's on PATH. See Prerequisites above.
