
# C Programming — First Semester Notes

This repository contains simple C programs and exercises for first-semester C programming. The notes below cover basic concepts, common patterns, and quick commands to compile and run programs on Windows using GCC.

## Topics covered

- C program structure (headers, main function)
- Data types and variables (int, float, double, char)
- Operators (arithmetic, assignment, relational, logical)
- Input/Output using `printf` and `scanf`
- Control flow (if, if-else, switch)
- Loops (for, while, do-while)
- Arrays and strings
- Functions (declaration, definition, call, return values)
- Pointers (basic use, pointer arithmetic)
- Structures and `typedef` (basic introduction)
- File I/O (fopen, fprintf, fscanf, fclose) — basic usage

## Files in this repository

The repository contains the following C exercises and examples. Click a filename to open the source.

- [add.c](add.c) — Sum of first 10 even numbers
- [q4.c](q4.c) — exercise
- [q5.c](q5.c) — exercise (unique elements example)
- [q6.c](q6.c) — exercise
- [q7.c](q7.c) — exercise
- [q8.c](q8.c) — exercise
- [q9.c](q9.c) — exercise
- [q10.c](q10.c) — exercise
- [q13.c](q13.c) — exercise
- [q14.c](q14.c) — exercise
- [q15.c](q15.c) — exercise
- [q16.c](q16.c) — exercise
- [q17.c](q17.c) — exercise
- [ques3.c](ques3.c) — exercise
- [reverse.c](reverse.c) — reverse-array example
- [storeelements.c](storeelements.c) — store elements example

Quick compile hint for any file (PowerShell / Windows):

```powershell
gcc -g filename.c -o filename.exe
.\filename.exe
```

## Quick examples

1) Hello world

```c
#include <stdio.h>

int main(void) {
    printf("Hello, world!\n");
    return 0;
}
```

2) Sum of first 10 even numbers (example from this repo)

```c
#include <stdio.h>

int main(void) {
    int sum = 0;
    for (int i = 1; i <= 10; ++i) sum += 2 * i;
    printf("Sum of first 10 even numbers = %d\n", sum);
    return 0;
}
```

## Compile & run (Windows PowerShell with GCC)

1. Open PowerShell in the project folder (for example: `C:\Users\Varsha\array`).
2. Compile:

```powershell
gcc -g add.c -o add.exe
```

3. Run:

```powershell
.\add.exe
```

If you don't have GCC installed, install Git for Windows (includes mingw) or install MinGW/GCC and add it to PATH.

## Common tips

- Always check return values of `scanf` when reading input in real programs.
- Use meaningful variable names and keep functions small.
- Prefer `size_t` for sizes and indexes when working with arrays in portable code.
- Be careful with buffer sizes when working with strings; prefer `fgets` over `gets`.

## Resources

- The C Programming Language — Kernighan & Ritchie (classic)
- online references: cplusplus.com (C subset) and cppreference.com (C and C++)
- TutorialsPoint, GeeksforGeeks — many beginner-friendly examples

---

If you want, I can expand this README with:
- lab exercises and their sample solutions from this folder
- a table of contents linking to each `.c` file
- instructions for setting up GCC on Windows step-by-step

## Install GCC on Windows (step-by-step)

Below are three reliable ways to get GCC on Windows. Use the MSYS2 method for a current toolchain; MinGW-w64 is another popular option. If you prefer package managers, winget can install MSYS2 for you.

Important: after installing, close and re-open PowerShell or your terminal so PATH changes take effect.

Option A — MSYS2 (recommended)

1. Download the installer from https://www.msys2.org and run it.
2. Open the newly installed "MSYS2 MSYS" or "MSYS2 MinGW 64-bit" shell (use the MinGW 64-bit shell for 64-bit builds).
3. Update packages (you may need to run the update command more than once if the system prompts):

```bash
pacman -Syu
# close the shell if pacman updated the package database, then reopen the MinGW 64-bit shell and run:
pacman -Su
```

4. Install the GCC toolchain:

```bash
pacman -S --needed base-devel mingw-w64-x86_64-toolchain
```

5. Either run compilation from the MinGW 64-bit shell (recommended), or add the MinGW bin folder to your Windows PATH (for example: `C:\msys64\mingw64\bin`).

Verify:

```powershell
#gcc --version
```

Option B — MinGW-w64 installer

1. Download the MinGW-w64 installer from SourceForge (search "mingw-w64 installer") and run it.
2. Choose appropriate settings (architecture: x86_64, threads: posix or win32, exception: seh for 64-bit) and install to a folder such as `C:\mingw-w64`.
3. Add the compiler bin folder to PATH (example below). Then reopen PowerShell.

Add to PATH (example — replace with the folder you installed to):

```powershell
# Append to current user's PATH (PowerShell)
$old = [Environment]::GetEnvironmentVariable('PATH', 'User')
[Environment]::SetEnvironmentVariable('PATH', "$old;C:\mingw-w64\mingw64\bin", 'User')
# Close and reopen PowerShell afterwards
```

Verify:

```powershell
gcc --version
```

Option C — Install via winget (installs MSYS2 or other packages)

1. If you have winget (Windows 10/11), you can install MSYS2 with:

```powershell
winget install --id msys2.MSYS2 -e
```

2. After installation, open the MSYS2 MinGW 64-bit shell and follow the MSYS2 steps above to install the toolchain.

Quick compile & run (PowerShell example)

```powershell
# run in the folder containing add.c
gcc -g add.c -o add.exe
.\add.exe
```

Troubleshooting

- If `git` or `gcc` returns "not recognized", verify the installation folder is added to PATH and restart your terminal.
- To see where PowerShell finds an executable:

```powershell
Get-Command gcc
# or
where.exe gcc
```

- If PATH changes don't take effect, sign out and sign back in or restart your machine.
- If `setx` truncates PATH, use the Windows Environment Variables GUI (System Properties → Advanced → Environment Variables) to edit the user PATH safely.

Links

- MSYS2: https://www.msys2.org
- MinGW-w64 (installer): https://sourceforge.net/projects/mingw-w64/
- winget docs: https://learn.microsoft.com/windows/package-manager/winget/

