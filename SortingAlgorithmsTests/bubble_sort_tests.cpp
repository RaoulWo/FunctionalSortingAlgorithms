#include "pch.h"

#include "bubble_sort.h"

TEST(BubbleSort, Should_sort_already_sorted_vector)
{
    const std::vector<int> vec{ 1, 2, 3, 4, 5 };

    const std::vector<int> res = bubble_sort(vec);

    ASSERT_EQ(vec, res);
}
