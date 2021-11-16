#include "span.hpp"

#include <vector>
#include <iostream>

void test0() {
	Span sp = Span(2000);

	for (unsigned int i  = 0; i < 2000; ++i) {
		sp.addNumber(i + 1);
	}
	std::cout << "test0 shortestSpan: " << sp.shortestSpan() << " (1 expected)" << std::endl;
	std::cout << "test0 longestSpan: " << sp.longestSpan() << " (1999 expected)" << std::endl;
}

void test1() {
	Span sp = Span(10);

	try {
		for (unsigned int i  = 0; i < 11; ++i) {
			sp.addNumber(i + 1);
		}
		std::cout << "test1 did not crash :(" << std::endl;
	} catch (...) {
		std::cout << "test1 crashed :) * that's the point of the test *" << std::endl;
	}
}

void test2() {
	Span sp = Span(1);

	try {
		sp.addNumber(666);
		sp.longestSpan();
		std::cout << "test2 did not crash :(" << std::endl;
	} catch (...) {
		std::cout << "test2 crashed :) * that's the point of the test *" << std::endl;
	}
}

void test3() {
	Span sp = Span(1);

	try {
		sp.addNumber(42);
		sp.shortestSpan();
		std::cout << "test3 did not crash :(" << std::endl;
	} catch (...) {
		std::cout << "test3 crashed :) * that's the point of the test *" << std::endl;
	}
}

void test4() {
	Span sp = Span(5000);

	std::vector<int> v;

	for (int i = 0; i < 5000; ++i) {
		v.push_back((i + 54) ^ 42 * 654 - 5 / 4);
	}

	sp.addNumbers(v.begin(), v.end());

	std::cout << "test4 shortestSpan: " << sp.shortestSpan() << " (1 expected)" << std::endl;
	std::cout << "test4 longestSpan: " << sp.longestSpan() << " (7167 expected)" << std::endl;
}

int main(void) {
	test0();
	test1();
	test2();
	test3();
	test4();
	return 0;
}
