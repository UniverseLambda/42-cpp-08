#pragma once

#include <stack>
#include <deque>

template< typename _Tp, typename _Container = std::deque<_Tp> >
struct MutantStack: std::stack<_Tp, _Container> {
	typedef typename _Container::iterator				iterator;
	typedef typename _Container::const_iterator			const_iterator;
	typedef typename _Container::reverse_iterator		reverse_iterator;
	typedef typename _Container::const_reverse_iterator	const_reverse_iterator;

	explicit MutantStack(const _Container& cont = _Container()):
		std::stack<_Tp, _Container>(cont) {}

	MutantStack(const MutantStack &cpy):
		std::stack<_Tp, _Container>(cpy) {}

	~MutantStack() {}

	MutantStack &operator=(const MutantStack &rhs) {
		std::stack<_Tp, _Container>::operator=(rhs);
	}

	iterator begin() {
		return MutantStack::c.begin();
	}

	iterator end() {
		return MutantStack::c.end();
	}

	const_iterator begin() const {
		return MutantStack::c.begin();
	}

	const_iterator end() const {
		return MutantStack::c.end();
	}

	reverse_iterator rbegin() {
		return MutantStack::c.rbegin();
	}

	reverse_iterator rend() {
		return MutantStack::c.rend();
	}

	const_reverse_iterator rbegin() const {
		return MutantStack::c.rbegin();
	}

	const_reverse_iterator rend() const {
		return MutantStack::c.rend();
	}
};
