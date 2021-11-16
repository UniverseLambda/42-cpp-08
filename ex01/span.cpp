#include "span.hpp"

#include <stdexcept>

Span::Span(unsigned int n): mSize(n) {
}

Span::Span(const Span &cpy): mSize(cpy.mSize), mBackingArray(cpy.mBackingArray) {
}

Span::~Span() {
}

Span &Span::operator=(const Span &rhs) {
	mSize = rhs.mSize;
	mBackingArray = rhs.mBackingArray;

	return (*this);
}

void Span::addNumber(int val) {
	if (mBackingArray.size() >= mSize) {
		throw std::out_of_range("no more space available");
	}

	mBackingArray.push_back(val);
	std::sort(mBackingArray.begin(), mBackingArray.end());

}

int Span::shortestSpan() const {
	if (mBackingArray.size() < 2) {
		throw std::length_error("not enough number");
	}
	return mBackingArray[1] - mBackingArray[0];
}

int Span::longestSpan() const {
	if (mBackingArray.size() < 2) {
		throw std::length_error("not enough number");
	}
	return mBackingArray[mBackingArray.size() - 1] - mBackingArray[0];
}
