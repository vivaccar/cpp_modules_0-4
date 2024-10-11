# C++ Module 00

## Introduction
In C++ Module 00, I explored fundamental concepts of object-oriented programming through exercises that involved classes, namespaces, and member functions. The exercises aimed to deepen my understanding of C++'s capabilities and syntactical structure.

## Key Concepts

### Classes
Classes are blueprints for creating objects in C++. They encapsulate data and functions that operate on that data. In this module, I implemented two classes: `PhoneBook` and `Contact`. 

- **PhoneBook**: Manages an array of `Contact` objects, allowing operations like adding and searching for contacts.
- **Contact**: Represents individual contact information such as first name, last name, and phone number.

### Namespaces
Namespaces prevent name collisions in larger projects by encapsulating identifiers in a named scope. This is particularly useful when integrating multiple libraries or modules.

### Member Functions
Member functions are functions that belong to a class. They can access the class's private and public attributes and allow interaction with the class's data. For example, `addContact` is a member function of `PhoneBook` that allows adding a new contact.

### Private and Public Attributes
Attributes (or member variables) in a class can be declared as private or public:

- **Private Attributes**: These are accessible only within the class itself. This encapsulation is a core principle of object-oriented design, promoting data hiding and security.
- **Public Attributes**: These can be accessed from outside the class, allowing interaction with the class's objects. For instance, user-facing functions that modify the state of the class often utilize public attributes.
