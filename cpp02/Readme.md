# C++ Module 02

## Concepts Learned

### Ad-hoc Polymorphism
Ad-hoc polymorphism allows functions to operate on different types through function overloading. In C++, this means defining multiple functions or operators with the same name but different parameter types or numbers. This enhances code flexibility and readability, allowing developers to perform similar operations on various data types without altering the function name.

### Operator Overloading
Operator overloading is the ability to define custom behavior for standard operators (like `+`, `-`, `*`, and `/`) when they are applied to user-defined types (such as classes). By overloading operators, you can make your custom types behave more like built-in types, providing intuitive interfaces for mathematical operations or comparisons.

### Orthodox Canonical Class Form
The Orthodox Canonical Class Form is a standardized way of designing classes in C++. It requires the implementation of four essential member functions:
- **Default Constructor**: Initializes objects with default values.
- **Copy Constructor**: Creates a new object as a copy of an existing object, ensuring deep copy of dynamically allocated resources.
- **Copy Assignment Operator**: Assigns the values from one object to another, managing memory and preventing resource leaks.
- **Destructor**: Cleans up resources when an object goes out of scope, ensuring proper resource management.

Using the Orthodox Canonical Form improves class reliability and maintainability by ensuring proper handling of resource management and object lifecycle.

### Fixed-point Numbers
Fixed-point numbers are a numerical representation that allows for a fixed number of digits after the decimal point, providing a balance between performance, accuracy, range, and precision. Unlike floating-point numbers, which can introduce rounding errors, fixed-point numbers maintain a consistent precision, making them particularly useful in applications like computer graphics, sound processing, and scientific calculations.

By implementing a fixed-point number class, you learn how to manage numerical data effectively while controlling precision and performance, enhancing your ability to handle various data types in C++.

### Summary
In summary, C++ Module 02 introduced crucial concepts of ad-hoc polymorphism, operator overloading, and the Orthodox Canonical Class Form. Additionally, it emphasized the importance of fixed-point numbers for precise numerical representation. These concepts are foundational for writing robust and efficient C++ programs, enhancing your understanding of the language's capabilities.
