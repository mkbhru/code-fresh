#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

int countSubsets(int N, int Q, const std::vector<std::pair<int, int>> &queries)
{
    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(N + 1, 0));

    // Initialize base case
    for (int i = 0; i <= N; ++i)
    {
        dp[i][0] = 1;
    }

    // Dynamic Programming to calculate subsets
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
        }
    }

    // Calculate and print answers for each query
    for (const auto &query : queries)
    {
        int i = query.first;
        int p = query.second;

        if (p > i)
        {
            std::cout << "0\n"; // i must be greater than or equal to p
            continue;
        }

        std::cout << dp[i][p] << "\n";
    }

    return 0;
}

int main()
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int N, Q;
        std::cin >> N >> Q;

        std::vector<std::pair<int, int>> queries;
        for (int i = 0; i < Q; ++i)
        {
            int i_val, p_val;
            std::cin >> i_val >> p_val;
            queries.emplace_back(i_val, p_val);
        }

        countSubsets(N, Q, queries);
    }

    return 0;
}
