/*
digu_J - Digvijay Janartha
NIT Hamirpur - INDIA
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3")

using namespace std;
using namespace __gnu_pbds;

template<typename T> using ordered_set = tree <T, null_type, less <T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using MinPriorityQueue = priority_queue <T, vector <T>, greater <T>>;

#ifdef HOME
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1) {
    cout << name << " : " << arg1 << std :: endl;
}
template < typename Arg1, typename... Args >
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    int len = comma - names;
    for (int i = 0; i < len; ++i) {
        cout << names[i];
    }
    cout <<  " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define trace(...)
#endif

typedef double db;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef complex<double> com;

#define eb emplace_back
#define pb push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define unique_sort(x) (sort(x.begin(), x.end()), x.resize(distance(x.begin(), unique(x.begin(), x.end()))))
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll LINF = LLONG_MAX, SZ = 1e3, MOD = 1e9 + 7, N = 1e5 + 5, M = 1e3 + 5, LG = 20;
const int INF = INT_MAX;
const db PI = acos(-1), EPS = 1 / db(1e6);
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

void test() {
    
}

int main() {
    fast_io();
    #ifdef HOME
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    cout << fixed << setprecision(15);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cout << "Case #" << i + 1 << ": ";
        test();
    }
    #ifdef HOME
        cout << "Time: " << (int)(clock() * 1000. / CLOCKS_PER_SEC) << "ms";
    #endif
    return 0;
}
