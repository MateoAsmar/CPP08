#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
	// Declaring a vector of ints called vec
    std::vector<int> vec;
	// Adding some ints to vec
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

	// Declaring a list of ints called lst
    std::list<int> lst;
	// Adding some ints to lst
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
	lst.push_back(50);

    try {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Found in vector: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::list<int>::iterator it = easyfind(lst, 25);
        std::cout << "Found in list: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}