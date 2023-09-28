#pragma once

#include <vector>

template<class T>
std::vector<T> insertion_sort(const std::vector<T>&);

template std::vector<int> insertion_sort<int>(const std::vector<int>&);
