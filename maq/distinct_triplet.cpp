#include <iostream>
#include <vector>
#include <unordered_map>

int countTriplets(const std::vector<int> &arr, int n, int d)
{
  int count = 0;

  std::vector<int> prefixSum(n + 1, 0);

  // Calculate the prefix sum array
  for (int i = 1; i <= n; ++i)
  {
    prefixSum[i] = prefixSum[i - 1] + arr[i];
  }

  // Use an unordered map to store frequency of remainder values
  std::unordered_map<int, int> remainderFreq;

  for (int j = 2; j <= n; ++j)
  {
    int remainder = prefixSum[j - 1] % d;
    count += remainderFreq[remainder];

    // Update the frequency of the current remainder
    ++remainderFreq[(remainder + arr[j]) % d];
  }

  return count;
}

int main()
{
  int n, d;
  std::cout << "Enter the size of the array (n): ";
  std::cin >> n;

  std::vector<int> arr(n + 1); // Indexing from 1 to n
  std::cout << "Enter the array elements: ";
  for (int i = 1; i <= n; ++i)
  {
    std::cin >> arr[i];
  }

  std::cout << "Enter the value of d: ";
  std::cin >> d;

  int result = countTriplets(arr, n, d);
  std::cout << "Number of distinct triplets divisible by " << d << ": " << result << std::endl;

  return 0;
}
