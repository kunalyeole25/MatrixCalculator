# Matrix Calculator in C

This is a simple C program that allows you to perform various matrix operations, including addition, subtraction, multiplication, determinant calculation, inverse calculation, rank determination, and eigenvalue calculation for square matrices.

## Getting Started

You can either run a prebuilt release binary (no compiler needed) or compile locally.

1. Clone or download this repository.
2. Choose one option:
   - **Download prebuilt binary:** go to **Releases** and download the file for your OS/architecture:
     - `MatrixCalculator-windows-<arch>.exe`
     - `MatrixCalculator-linux-<arch>`
     - `MatrixCalculator-macos-<arch>`
   - **Build locally:** compile with your preferred C compiler.
3. Run the binary in your terminal or command prompt.

### Local build

```bash
gcc -std=c11 -O2 -DNDEBUG -Wall -Wextra -pedantic MatrixCalculator.c -lm -o MatrixCalculator
```

### Release automation

GitHub Actions builds binaries for Windows, Linux, and macOS.  
When a tag like `v1.0.0` is pushed (or a workflow is manually triggered), the workflow publishes those binaries as GitHub Release assets.

## Usage

1. The program will prompt you to enter the order of the matrix A.
2. You'll need to provide the elements of matrix A.
3. Choose one of the following operations:
   - Addition
   - Subtraction
   - Multiplication
   - Determinant Calculation
   - Inverse Calculation
   - Rank Determination
   - Eigenvalue Calculation
4. Follow the on-screen instructions for each operation.

## Supported Matrix Operations

- Matrix Addition
- Matrix Subtraction
- Matrix Multiplication
- Determinant Calculation (for square matrices)
- Inverse Calculation (for square matrices)
- Rank Determination
- Eigenvalue Calculation (for square matrices)

## Note

- The program supports square matrices only for determinant calculation, inverse calculation, and eigenvalue calculation.
- Some operations may have restrictions, and the program will notify you if the operation is not possible.

Feel free to use and modify this program as needed. If you encounter any issues or have suggestions for improvement, please create an issue or pull request.

Happy matrix calculations!
