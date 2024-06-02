## ABOUT

This repository contains basic math functions (add, subtract, multiply, divide) written in C and a test example to ensure their correctness. It also includes a GitHub Actions workflow for continuous integration (CI) to automatically compile and test the code.

## FILES

- `math.c`: Contains the implementation of the math functions.
- `math.h`: Header file declaring the math functions.
- `test_math.c`: Contains test cases to verify the functionality of the math functions.
- `.github/workflows/ci.yml`: GitHub Actions workflow configuration for continuous integration (CI).

## FUNCTIONS

```c
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
```

## TEST LOCALLY

To compile and run the tests locally, you need to have GCC installed.

1. Clone the repository:
   ```sh
   git clone https://github.com/yourusername/math-functions.git
   cd math-functions
   ```

2. Compile the code:
   ```sh
   gcc -o test_math math.c test_math.c
   ```

3. Run the tests:
   ```sh
   ./test_math
   ```

If all tests pass, you will see the message:
```
All tests passed
```

## CI WORKFLOW STEPS

1. **Checkout Code**: Checks out the repository code.
2. **Install Dependencies**: Installs GCC.
3. **Compile**: Compiles the `math.c` and `test_math.c` files.
4. **Run Tests**: Runs the compiled test executable.

The tests are run automatically on every push and pull request to the repository. Other events that triiger workflows are available [here](https://docs.github.com/en/actions/using-workflows/events-that-trigger-workflows).

## CONTRIBUTING

If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.

## LICENSE

This project is licensed under the The Unlicense License. See the [LICENSE](https://github.com/jotavare/github-actions-overview/blob/main/LICENSE) file for details.