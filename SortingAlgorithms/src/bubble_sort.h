#pragma once

#include <vector>

template<class T>
std::vector<T> bubble_sort(const std::vector<T>&);

template std::vector<int> bubble_sort<int>(const std::vector<int>&);
