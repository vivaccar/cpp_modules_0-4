# C++ Module 03: Inheritance

Inheritance is a fundamental concept in object-oriented programming that allows one class (the derived class) to inherit properties and behaviors (methods) from another class (the base class). This promotes code reusability and establishes a relationship between classes.

## Key Concepts

1. **Base Class**: The class whose properties and methods are inherited by another class. For example, `Animal` can be considered a base class.

2. **Derived Class**: The class that inherits from the base class. For example, `Cat` is a derived class that inherits from `Animal`.

3. **Access Specifiers**: In C++, inheritance can be public, protected, or private, determining how the members of the base class are accessed in the derived class:
   - **Public Inheritance**: Public members of the base class remain public in the derived class, and protected members remain protected.
   - **Protected Inheritance**: Public and protected members of the base class become protected in the derived class.
   - **Private Inheritance**: Public and protected members of the base class become private in the derived class.


## Example Code

Here’s a simple example demonstrating inheritance, where the `Cat` class inherits from the `Animal` class:

```cpp
#include <iostream>

// Base class
class Animal {
public:
    Animal() {
        std::cout << "Animal constructor called" << std::endl;
    }

    virtual void makeSound() const {
        std::cout << "Some generic animal sound" << std::endl;
    }

    virtual ~Animal() {
        std::cout << "Animal destructor called" << std::endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    Cat() {
        std::cout << "Cat constructor called" << std::endl;
    }

    void makeSound() const override {
        std::cout << "Meow" << std::endl;
    }

    ~Cat() {
        std::cout << "Cat destructor called" << std::endl;
    }
};

int main() {
    Animal* animal = new Cat(); // Polymorphism
    animal->makeSound(); // Calls Cat's makeSound

    delete animal; // Calls destructors in the reverse order
    return 0;
}
```

### Output
When you run the above code, the output will be:

```bash
Copy code
Animal constructor called
Cat constructor called
Meow
Cat destructor called
Animal destructor called
```
