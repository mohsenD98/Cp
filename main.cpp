#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory.h>
#include <bitset>
#include <set>
#include <math.h>
#include <unordered_map>
#include <algorithm>
#include <map>
#include <stdlib.h>
#include <numeric>
#include <stdio.h>
#include <cstdio>
#include <iomanip>
#define _CRT_SECURE_NO_DEPRECATE

using namespace std;

#define gogogo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define int long long
#define ll long long
#define f first
#define s second
#define pb push_back
#define all(x) begin(x), end(x)
#define endl '\n'
#define sep "->"
#define on :
#define print(x) for(auto a: x) cout << a <<" "
#define nl cout << "\n"

int binary_search_find_index(const std::vector<int>& v, int data) {
    auto it = std::lower_bound(v.begin(), v.end(), data);
    if (it == v.end() || *it != data) {
        return -1;
    } else {
        std::size_t index = std::distance(v.begin(), it);
        return index;
    }
}

int arraySum(vector<int> &v)
{
    int initial_sum = 0;
    return accumulate(v.begin(), v.end(), initial_sum);
}

void file(const string file = "Test")
{
    if (fopen((file + ".inp").c_str(), "r"))
    {
        freopen((file + ".inp").c_str(), "r", stdin);
        freopen((file + ".err").c_str(), "w", stderr);
        freopen((file + ".out").c_str(), "w", stdout);
    }
}

void solve();

void presolve(int t = -1) {
   if (t == -1) cin >> t;
   while (t-- > 0) {
        // cout << "Case " << i++  << ": ";
        solve();
   }
}

int32_t main() {
    // cout.precision(0);
    // cout.setf(ios::fixed);
    gogogo;
    file("Test");
    presolve();
}

int sim(int a, int b){
    if (a > b) return 1;
    if (a == b) return 0;
    if (a < b) return -1;
}

void solve() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = 0;
    if (sim(a, c) + sim(b, d) > 0)
        ans += 1;
    if (sim(a, d) + sim(b, c) > 0)
        ans += 1;
    if (sim(b, c) + sim(a, d) > 0)
        ans += 1;
    if (sim(b, d) + sim(a, c) > 0)
        ans += 1;
    cout << ans << endl;

}
