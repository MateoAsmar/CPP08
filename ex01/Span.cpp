#include "Span.hpp"
#include <iostream>
#include <limits>

// Initialize maxSize with N
Span::Span(unsigned int N) : maxSize(N) {}

// Initalize a new Span by copying numbers and maxSize from another Span obj
Span::Span(const Span& other) : numbers(other.numbers), maxSize(other.maxSize) {}

// checks for self-assignment, if not, copies nbs and maxsz from other obj
// returns reference to current obj
Span& Span::operator=(const Span& other) {
    if (this != &other) {
        numbers = other.numbers;
        maxSize = other.maxSize;
    }
    return *this;
}

// destructor empty because STL containers clean up automatically
Span::~Span() {}

// checks current size of numbers compared to maxSize
// if full throw overflow error
// else add num to the vector
void Span::addNumber(int num) {
    if (numbers.size() >= maxSize)
        throw std::overflow_error("Span is full!");
    numbers.push_back(num);
}

// if there is < than 2 nbs -> impossible to compute span, logic error thrown
int Span::shortestSpan() const {
    if (numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span!");

	// creates a copy of numbers and sorts it in ascending order
    std::vector<int> sorted = numbers;
    std::sort(sorted.begin(), sorted.end());

	// initializes minSpan to the max possible int value
    int minSpan = std::numeric_limits<int>::max();
	// iterates over sorted vector, computing the diff btwn each pair of consec nbs
	// keeps track of the smallest diff found
    for (size_t i = 1; i < sorted.size(); ++i) {
        int diff = sorted[i] - sorted[i - 1];
        if (diff < minSpan)
            minSpan = diff;
    }

    return minSpan;
}

// also, < than 2 nbs, logic error thrown
int Span::longestSpan() const {
    if (numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span!");

	// finds min and max elems in numbers using STL algorithms
    int minNum = *std::min_element(numbers.begin(), numbers.end());
    int maxNum = *std::max_element(numbers.begin(), numbers.end());

    return maxNum - minNum;
}