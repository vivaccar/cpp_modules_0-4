# C++ Module 01

In this module, I learned essential concepts that are crucial for programming in C++. Below are the key topics covered, along with the exercises I implemented.

## Key Concepts

### Memory Allocation

Memory allocation is the process of reserving a block of memory for use in a program. In C++, memory can be allocated dynamically using pointers, which allows for greater flexibility. There are two primary types of memory allocation:

- **Automatic Allocation**: Memory is allocated on the stack when a variable is declared and is automatically deallocated when it goes out of scope.

- **Dynamic Allocation**: Memory is allocated on the heap using the `new` operator and must be deallocated using the `delete` operator to avoid memory leaks.

### Pointers to Members

Pointers to members allow access to class members (attributes and methods) through pointers. They enable referencing specific members of a class without needing an instance of that class. The syntax for declaring a pointer to a member is as follows:

```cpp
ReturnType ClassName::*pointerToMember;
```
### References
References in C++ provide an alternative way to create aliases for variables. They allow for direct access to the original variable without copying it. A reference must be initialized when declared and cannot be changed to refer to another variable.

```cpp
int original = 5;
int &ref = original; // ref is a reference to original
```

### Switch case
The switch statement is a control statement that allows multi-way branching. It provides a way to execute different parts of code based on the value of a variable. The syntax is as follows:

```cpp
switch (variable) {
    case value1:
        // code block
        break;
    case value2:
        // code block
        break;
    default:
        // default code block
}
```
