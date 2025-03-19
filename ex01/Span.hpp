#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <algorithm>

class Span {
private:
    std::vector<int> numbers; // stores nbs added to Span
    unsigned int maxSize; // max nbs of elems holded by Span

public:
	// Constructor
    Span(unsigned int N);
	// Copy constructor
    Span(const Span& other);
	// Assignment operator overload
    Span& operator=(const Span& other);
	// Destructor
    ~Span();

	// add a number to the span
    void addNumber(int num);
	// calculates and returns the smallest diff between any 2 nbs
    int shortestSpan() const;
	// calculates and returns the largest diff between < and > nbs
    int longestSpan() const;

    template <typename Iterator>
    void addNumbers(Iterator begin, Iterator end) {
		// checking if it would exceed the max size
        if (numbers.size() + std::distance(begin, end) > maxSize)
            throw std::overflow_error("Span is full!");
		// insert all numbers in the range [begin, end)
        numbers.insert(numbers.end(), begin, end);
    }
};

#endif