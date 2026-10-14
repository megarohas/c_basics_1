# C Basics 1

Two small C programs that read numbers from the keyboard and evaluate a math
formula. Both use `scanf`, `printf` and `<math.h>`.

## Programs

### `5_1_11.c`

Reads `x`, `y` and `z` and prints them in scientific notation. It then
computes:

```
b = y^(∛|x|) + cos³(y) · |x − y| · (1 + sin²(x) / √(x + y)) / (x/2 + e^|x − y|)
```

`z` is read and printed but not used in the formula. With the test values
`x = 6.251`, `y = 0.827`, `z = 25.001` it prints `b = 7.120770e-01`.

### `5_2_11.c`

Reads `a`, `b` and `x` and computes three values:

```
K = √|1 − ln²(x)| + e^(x − a)
M = ∛((b + sin²(x)) / (7x)) − lg(x²)
R = K² + M²
```

It prints `K`, `M` and `R`. With the test values `a = 2.2`, `b = 3.9`, `x = 3`
it prints `K ≈ 2.680`, `M ≈ −0.383` and `R ≈ 7.331`.

## Build and run

```bash
gcc 5_1_11.c -o 5_1_11 -lm && ./5_1_11
gcc 5_2_11.c -o 5_2_11 -lm && ./5_2_11
```

`-lm` links the math library. It is required on Linux and harmless on macOS.

## Context

Basic C exercises (tasks 5.1 and 5.2, variant 11), April 2022.
