#include <iostream>

#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

#define int long long int

using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int n, t, m;
    cin >> n >> t >> m;
    int out = n * t * m;

    cout << out;
}
