#pragma once

#include <vector>

template<class T>
std::vector<T> bucket_sort(const std::vector<T>&);

template std::vector<int> bucket_sort<int>(const std::vector<int>&);
