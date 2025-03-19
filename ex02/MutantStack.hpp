#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

// declaration of template class  inheriting from std::stack<T>
// ---> it has all the behavior of a std stack
template <typename T>
class MutantStack : public std::stack<T> {
public:
	// std::stack uses an underlying container (std::deque)
	// that is stored in the protected member c
	// typedefs alias the iterator types of the underlying cont
	// so that the users of MutantStack can iterate over it elems
	// provide both mutable and const versons and reverse iterators
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	// Default constructor
    MutantStack() {}
	// Copy constructor
    MutantStack(const MutantStack& other) : std::stack<T>(other) {}
	// Assignment operator
    MutantStack& operator=(const MutantStack& other) {
        if (this != &other) {
            std::stack<T>::operator=(other);
        }
        return *this;
    }
	// Destructor
    ~MutantStack() {}

	// these 2 funcs return mutable iterators to the beginning
	// and end of the underlying container
    iterator begin() {
		return this->c.begin();
	}
    iterator end() {
		return this->c.end();
	}

	// the constant versions of begin() and end()
	// allowing read-only iteration over a const MutantStack
    const_iterator begin() const {
		return this->c.begin();
	}
    const_iterator end() const {
		return this->c.end();
	}
    
	// return mutable reverse iterators to the beginning and end
	// of the reversed underlying container
    reverse_iterator rbegin() {
		return this->c.rbegin();
	}
    reverse_iterator rend() {
		return this->c.rend();
	}

	// provide constant reverse iterators for iterating over
	// the container in reverse order without modifying it
    const_reverse_iterator rbegin() const {
		return this->c.rbegin();
	}
    const_reverse_iterator rend() const {
		return this->c.rend();
	}
};

#endif