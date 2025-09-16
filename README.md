# Fraction Calculator Project - cem.tomas3

A complete CI/CD demo project for fraction operations.

## Features:
- Fraction arithmetic operations
- Automated documentation with Doxygen
- Automated testing
- Docker containerization

## How to run:
```bash
# Compile main program
g++ -o fraction_app fraction.cpp main.cpp

# Run program
./fraction_app

# Compile tests
g++ -o test_app fraction.cpp test.cpp

# Run tests
./test_app

# Generate documentation
doxygen Doxyfile

# Build Docker image
docker build -t fraction-app .

# Run Docker container
docker run fraction-app
