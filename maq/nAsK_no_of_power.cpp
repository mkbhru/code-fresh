// C++ implementation of the above approach
#include <iostream>
using namespace std;

// Function to print k numbers which are powers of two
// and whose sum is equal to n
bool FindAllElements(int n, int k)
{
    // Initialising the sum with k
    int sum = k;

    // Initialising an array A with k elements
    // and filling all elements with 1
    int A[k];
    fill(A, A + k, 1);

    for (int i = k - 1; i >= 0; --i)
    {

        // Iterating A[] from k-1 to 0
        while (sum + A[i] <= n)
        {

            // Update sum and A[i]
            // till sum + A[i] is less than equal to n
            sum += A[i];
            A[i] *= 2;
        }
    }

    // Impossible to find the combination
    if (sum != n)
    {
        return false;
    }

    // Possible solution is stored in A[]
    else
    {
        return true;
    }
}

// Driver code
int main()
{
    int n = 12;
    int k = 2;

    if(FindAllElements(n, k)){
        cout << "YES";

    }
    else{
        cout << "NO";
    }

    return 0;
}
