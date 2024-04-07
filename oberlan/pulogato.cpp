#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int numeroManeirasChegarAoTopo(int N) {
    vector<int> dp(N + 1, 0);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= N; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }

    return dp[N];
}

int main() {
    int N;
    cin >> N;

    int maneiras = numeroManeirasChegarAoTopo(N);
    cout << maneiras;

    return 0;
}