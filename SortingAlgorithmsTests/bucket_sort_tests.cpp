#include "pch.h"

#include "bucket_sort.h"

TEST(BucketSort, Should_sort_already_sorted_vector)
{
    const std::vector<int> vec{ 1, 2, 3, 4, 5 };

    const std::vector<int> res = bucket_sort(vec);

    ASSERT_EQ(vec, res);
}
