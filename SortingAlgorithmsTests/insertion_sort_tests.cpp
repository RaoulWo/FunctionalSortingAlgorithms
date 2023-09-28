#include "pch.h"

#include "insertion_sort.h"

TEST(InsertionSort, Should_sort_already_sorted_vector)
{
    const std::vector<int> vec{ 1, 2, 3, 4, 5 };

    const std::vector<int> res = insertion_sort(vec);

    ASSERT_EQ(vec, res);
}
