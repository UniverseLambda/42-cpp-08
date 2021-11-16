#include "easyfind.hpp"

#include <vector>
#include <array>
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

	std::array<int, 8> itsAnArray;
	itsAnArray[0] = 5;
	itsAnArray[1] = 42;
	itsAnArray[2] = 666;
	itsAnArray[3] = 69420;
	itsAnArray[4] = 21;
	itsAnArray[5] = 0;
	itsAnArray[6] = -456;
	itsAnArray[7] = 456;

	tryFind(hereYouAre, 5);
	tryFind(hereYouAre, 50);
	tryFind(hereYouAre, 42);
	tryFind(hereYouAre, 456);
	tryFind(hereYouAre, -456);

	tryFind(itsAnArray, 5);
	tryFind(itsAnArray, 50);
	tryFind(itsAnArray, 42);
	tryFind(itsAnArray, 456);
	tryFind(itsAnArray, -456);

	return 0;
}
