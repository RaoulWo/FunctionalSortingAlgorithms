#pragma once

#include <vector>

template<class T>
std::vector<T> quick_sort(const std::vector<T>&);

template std::vector<int> quick_sort<int>(const std::vector<int>&);
