#pragma once

#include <vector>

template<class T>
std::vector<T> selection_sort(const std::vector<T>&);

template std::vector<int> selection_sort<int>(const std::vector<int>&);
