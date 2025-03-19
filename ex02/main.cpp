#include "MutantStack.hpp"
#include <iostream>

int main()
{
	// creates an instance of MutantStack that holds ints
    MutantStack<int> mstack;
	// add ints to the stack
    mstack.push(5);
    mstack.push(17);

    std::cout << "Top element: " << mstack.top() << std::endl;

	// removes the top element from the stack
    mstack.pop();

    std::cout << "Size after pop: " << mstack.size() << std::endl;

	// add more ints to the stack 
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

	// obtains iterators to the beginning and end of stack
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

	// iterates over all elements in the stack using the iterator
	// deferences the iterator to print each element
	// since the underlying container preserves the order of insertion
	// the printed order is the order stored in this->c
    while (it != ite)
	{
        std::cout << *it << std::endl;
        ++it;
    }

	// creates a new std::stack<int> named s by copying mstack
    std::stack<int> s(mstack);

    return 0;
}