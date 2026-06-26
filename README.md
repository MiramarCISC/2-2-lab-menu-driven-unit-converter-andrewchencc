[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=24184154)
# CISC 192 Lab 2.2: Menu-Driven Unit Converter

## Overview

In this lab, you will build a menu-driven unit converter using decisions, loops, functions, and input validation.

The program should allow a user to choose a conversion from a menu, enter a value, see the converted result, and continue using the program until they choose to exit.

## Learning Goals

By completing this lab, you will practice:

- Using `if`, `else if`, and `else`
- Using a `switch` statement
- Using `while`, `do-while`, and `for` loops where appropriate
- Using relational and logical operators
- Validating input
- Writing and calling functions
- Compiling with `make`
- Running automated tests with `make test`

## Required Features

Your program must support these conversions:

1. Inches to centimeters
2. Centimeters to inches
3. Pounds to kilograms
4. Kilograms to pounds
5. Fahrenheit to Celsius
6. Celsius to Fahrenheit

The program must also:

- Display a repeating menu
- Continue until the user chooses exit
- Reject invalid menu choices
- Reject negative values for length and weight conversions
- Allow Fahrenheit and Celsius values to be negative
- Use the required functions in `include/converter.hpp`
- Pass the automated tests

## Files You Will Edit

You should primarily edit:

- `src/converter.cpp`
- `src/main.cpp`

Do not edit the files in `tests/` unless your instructor tells you to.

## Build and Run

```bash
make
./main
```

## Run Tests

```bash
make test
```

## Clean Build Files

```bash
make clean
```

## Expected Menu Example

```text
Unit Converter

1. Inches to centimeters
2. Centimeters to inches
3. Pounds to kilograms
4. Kilograms to pounds
5. Fahrenheit to Celsius
6. Celsius to Fahrenheit
0. Exit

Enter choice:
```

## Example Run

```text
Unit Converter

1. Inches to centimeters
2. Centimeters to inches
3. Pounds to kilograms
4. Kilograms to pounds
5. Fahrenheit to Celsius
6. Celsius to Fahrenheit
0. Exit

Enter choice: 1
Enter value: 10
10 inches = 25.4 centimeters

Enter choice: 0
Goodbye!
```

## Grading Notes

Your solution should use reachable code. Do not place unused examples in separate files just to satisfy requirements. Your menu, validation, and conversion functions should be part of the working program.
