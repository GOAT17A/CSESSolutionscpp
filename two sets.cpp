#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
   #endif
    long long n;
    cin >> n;

    long long total_sum = n * (n + 1) / 2;

    if (total_sum % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    long long target_sum = total_sum / 2;

    vector<long long> setA, setB;

    for (long long i = n; i >= 1; i--) {
        if (i <= target_sum) {
            setA.push_back(i);
            target_sum -= i;
        } else {
            setB.push_back(i);
        }
    }

    cout << "YES" << endl;
    cout << setA.size() << endl;
    for (long long i : setA) {
        cout << i << " ";
    }
    cout << endl;

    cout << setB.size() << endl;
    for (long long i : setB) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
