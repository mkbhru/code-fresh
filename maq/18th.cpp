#include <iostream>
using namespace std;

const int MOD = 1000000007;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return (n * factorial(n - 1)) % MOD;
}

int arrangements(int p, int c, int n)
{
    int totalSubjects = p + c;
    int result = factorial(totalSubjects);
    int div = (factorial(p) * factorial(c)) % MOD;

    // Calculate arrangements and apply modulo
    result = (result / div) % MOD;

    // Subtract arrangements where a subject is taught for more than N hours continuously
    for (int i = n + 1; i <= totalSubjects; ++i)
    {
        result = (result - (factorial(i - n - 1) * factorial(totalSubjects - i)) % MOD) % MOD;
    }

    return (result + MOD) % MOD;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int P, C, N;
        cin >> P >> C >> N;

        int result = arrangements(P, C, N);
        cout << result << endl;
    }

    return 0;
}
