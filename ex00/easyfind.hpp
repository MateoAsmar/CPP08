#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iterator>  
#include <exception>  

// Defining a new exception class, inheriting from std::exception
class NotFoundException : public std::exception {
public:
// Overriding the what() to return custom error
    const char* what() const throw() {
        return "Element not found!";
    }
};

// Declaration of function template easyfind
// that works with any containter type T
template <typename T>
typename T::iterator easyfind(T& container, int value) {
	// std::find to search container for given value 
	// from begin to end
	// iterator result stored in it
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw NotFoundException();
    }
    return it;
}

#endif