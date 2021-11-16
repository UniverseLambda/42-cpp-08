#pragma once

#include <vector>

class Span {
private:
	unsigned int mSize;
	std::vector<int> mBackingArray;

public:
	Span(unsigned int n);
	Span(const Span &cpy);
	~Span();

	Span &operator=(const Span &rhs);

	void addNumber(int val);

	template<typename _Iterator>
	void addNumbers(_Iterator begin, _Iterator end) {
		for (_Iterator it = begin; it != end; ++it) {
			addNumber(*it);
		}
	}

	int shortestSpan() const;
	int longestSpan() const;
};
