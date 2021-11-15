#include "easyfind.hpp"

#include <vector>
#include <iostream>

template<typename _Container>
void tryFind(_Container container, int value) {
	std::vector<int>::iterator it = easyfind(container, value);

	if (it != container.end()) {
		std::cout << "value " << value << " found (iterator value: " << *it << ")" << std::endl;
	} else {
		std::cout << "value " << value << " not found" << std::endl;
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

	tryFind(hereYouAre, 5);
	tryFind(hereYouAre, 50);
	tryFind(hereYouAre, 42);
	tryFind(hereYouAre, 456);
	tryFind(hereYouAre, -456);

	return 0;
}
