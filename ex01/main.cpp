#include "Span.hpp"
#include <iostream>

int main()
{
	// create a Span obj sp with max size 5
	Span sp = Span(5);
	// add nbs to span
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}
