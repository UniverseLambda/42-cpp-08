#pragma once

template<typename _Tp>
typename _Tp::iterator easyfind(_Tp &container, int val) {
	for (typename _Tp::iterator it = container.begin(); it != container.end(); ++it) {
		if (*it == val) {
			return it;
		}
	}
	return container.end();
}
