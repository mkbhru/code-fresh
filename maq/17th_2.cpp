#include <iostream>

std::string can_be_represented_as_sum(int n, int k)
{
    // Check if the number of set bits in binary representation of n is equal to k
    return (__builtin_popcount(n) == k) ? "YES" : "NO";
}

int main()
{
    // Sample Input
    int n = 12, k = 2;
    // Sample Output
    std::cout << can_be_represented_as_sum(n, k) << std::endl;

    return 0;
}
