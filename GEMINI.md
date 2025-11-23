# Gemini Project Instructions

This file provides instructions for Gemini to work with this C project.

## Project Overview

This project contains C language programs covering basic concepts, conditionals, and loops.

## Building and Running

The C files in this project can be compiled using a C compiler like GCC. The recommended workflow is to first navigate into the file's directory.

**Standard Compilation Example:**

This example uses `1.Helloworld.c` from the `CBASICS` directory.

1. **Navigate to the directory:**

    ```bash
    cd CBASICS
    ```

2. **Compile the file:**

    ```bash
    gcc 1.Helloworld.c -o 1.Helloworld.exe
    ```

3. **Run the compiled program (on Windows):**

    ```bash
    .\1.Helloworld.exe
    ```

**Compiling with the Math Library:**

For programs that use functions from `<math.h>` (like `pow()`), you need to link the math library with the `-lm` flag.

**Example:**

```bash
# Assuming you are inside the 'loops' directory
gcc 9.gp.c -o 9.gp.exe -lm
```

## Coding Conventions

- Use standard C99 conventions (e.g., declaring variables inside `for` loops is acceptable).
- Source code is organized into directories like `CBASICS`, `if_else`, and `loops` based on the topic.
