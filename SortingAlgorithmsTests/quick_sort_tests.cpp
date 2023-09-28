#include "pch.h"

#include "quick_sort.h"

TEST(QuickSort, Should_sort_already_sorted_vector)
{
    const std::vector<int> vec{ 1, 2, 3, 4, 5 };

    const std::vector<int> res = quick_sort(vec);

    ASSERT_EQ(vec, res);
}
