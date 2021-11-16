#pragma once

#include <algorithm>

template<typename _Tp>
typename _Tp::iterator easyfind(_Tp &container, int val) {
	return std::find(container.begin(), container.end(), val);
}
