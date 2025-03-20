# CPP08
(C++ Templated Containers, Iterators, and Algorithms)
## Grade: Pending


## Overview

This project consists of three exercises that focus on advanced uses of C++ templates, specifically with containers, iterators, and algorithms:

1. **Exercise 00: Easy find**
   - Implement a function template `easyfind` that:
     - Accepts a container of integers and searches for the first occurrence of a specified integer.
     - Can throw an exception or return an error if the integer is not found.
   - This function template helps understand the behaviors of standard containers when an element is not found.

2. **Exercise 01: Span**
   - Develop a class `Span` that can:
     - Store up to N integers.
     - Add numbers to the collection and throw an exception if adding beyond its capacity.
     - Calculate the shortest and longest span (or distance) between the numbers stored.
   - Implementations should handle cases with no numbers or only one number by throwing exceptions.

3. **Exercise 02: Mutated Abomination**
   - Extend the non-iterable `std::stack` to create a `MutantStack` class that:
     - Provides all the functionalities of `std::stack`.
     - Adds iterator capabilities to traverse the stack.
   - This exercise underscores the limitations of certain STL containers and demonstrates how to extend them.

## File Structure

- **Makefile**  
  Automates the build process.

- **main.cpp**  
  Contains tests demonstrating the functionality of the implemented templates and classes.

- **easyfind.h / easyfind.hpp** and optionally **easyfind.tpp**  
  Contain the implementation of the `easyfind` function template.

- **Span.h / Span.hpp / Span.cpp**  
  Contain the declaration and definition of the `Span` class.

- **MutantStack.h / MutantStack.hpp** and optionally **MutantStack.tpp**  
  Contain the declaration and definition of the `MutantStack` class, enhancing `std::stack` with iterator functionality.

## How to Compile and Run

***To run the project:***
```bash
cd ex00
make
./executable_filename
```

## What I Learned

**Advanced Templating:** Enhanced my skills in creating and using templates to handle generic data structures efficiently.

**Iterators and Custom Containers:** Gained practical experience in extending STL containers to add additional functionalities, like iterators in `MutantStack`.

**Exception Handling and Robustness:** Developed a deeper understanding of managing exceptions in scenarios with dynamic data structures, ensuring robust error handling and container safety.

**Efficiency in Algorithms:** The `Span` class project solidified my understanding of calculating spans efficiently, especially when handling large data sets.


## Conclusion

CPP08 provided a comprehensive exposure to advanced C++ features involving templated containers, custom iterators, and efficient algorithm implementations. It deepened my understanding of C++’s powerful templating capabilities and their practical applications in creating flexible and efficient software components.
