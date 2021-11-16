#include "easyfind.hpp"

#include <vector>
#include <deque>
#include <iostream>

template<typename _Container>
void tryFind(_Container container, int value) {
	typename _Container::iterator it = easyfind(container, value);
	typename _Container::iterator expectedIt = std::find(container.begin(), container.end(), value);

	if (it != container.end()) {
		std::cout << "value " << value << " found (iterator value: " << *it << ")" << std::endl;
	} else {
		std::cout << "value " << value << " not found" << std::endl;
	}


	if (expectedIt == it) {
		std::cout << "returned iterator IS the same as std::find" << std::endl;
	} else {
		std::cout << "returned iterator is NOT the same as std::find" << std::endl;
	}
}

int main(void) {
	std::vector<int> hereYouAre;
	hereYouAre.push_back(5);
	hereYouAre.push_back(42);
	hereYouAre.push_back(666);
	hereYouAre.push_back(69420);
	hereYouAre.push_back(21);
	hereYouAre.push_back(0);
	hereYouAre.push_back(-456);

	std::deque<int> itsADeque;
	itsADeque.push_back(5);
	itsADeque.push_front(42);
	itsADeque.push_front(666);
	itsADeque.push_front(69420);
	itsADeque.push_front(21);
	itsADeque.push_front(0);
	itsADeque.push_front(-456);
	itsADeque.push_front(456);

	tryFind(hereYouAre, 5);
	tryFind(hereYouAre, 50);
	tryFind(hereYouAre, 42);
	tryFind(hereYouAre, 456);
	tryFind(hereYouAre, -456);

	tryFind(itsADeque, 5);
	tryFind(itsADeque, 50);
	tryFind(itsADeque, 42);
	tryFind(itsADeque, 456);
	tryFind(itsADeque, -456);

	return 0;
}
