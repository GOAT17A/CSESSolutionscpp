#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long result = 1;
    long long base = 2;

    // Calculate (2^N) % MOD using modular exponentiation
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base)% MOD;
        n /= 2;
    }

    cout << result << endl;

    return 0;
}
