#include "pch.h"

#include "selection_sort.h"

TEST(SelectionSort, Should_sort_already_sorted_vector)
{
    const std::vector<int> vec{ 1, 2, 3, 4, 5 };

    const std::vector<int> res = selection_sort(vec);

    ASSERT_EQ(vec, res);
}
