/*
 █████╗ ██╗     ██╗  ██╗ █████╗ ███╗   ██╗ ██████╗ ██╗
██╔══██╗██║     ██║ ██╔╝██╔══██╗████╗  ██║██╔═══██╗██║
███████║██║     █████╔╝ ███████║██╔██╗ ██║██║   ██║██║
██╔══██║██║     ██╔═██╗ ██╔══██║██║╚██╗██║██║   ██║██║
██║  ██║███████╗██║  ██╗██║  ██║██║ ╚████║╚██████╔╝███████╗
╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝ ╚══════╝
*/
// standard libraries
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

// directives-> brings all the names from specified namespace to current scope
using namespace std;
using namespace __gnu_pbds;

// standard_templates
template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;
template <typename K, typename V>
using ordered_map = tree<
    K,
    V,
    less<K>,
    rb_tree_tag,
    tree_order_statistics_node_update>;

template <typename T>
T power(T base, int exp)
{
    T result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}
// fastio
void alkanol()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// debugging stuff
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << endl;
#else
#define debug(x)
#endif

// easing initialisation
#define vll vector<ll>
#define pll pair<ll, ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define vs vector<string>
#define pq priority_queue
#define elif else if
#define dub double

// easing technicalities
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sum(v) accumulate(all(v), 0LL)
#define clz(x) __builtin_clzll(x)
#define maxm(v) *max_element(all(v))
#define minm(v) *min_element(all(v))
#define cnt_setbits(x) __builtin_popcountll(x)

// short_hands
#define int long long
#define ll long long
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define popb pop_back

// loop_ups
#define copy(a, b)                    \
    for (ll i = 0; i < b.size(); i++) \
        a[i] = b[i];
#define prefix(a, v)                  \
    a[0] = v[0];                      \
    for (ll i = 1; i < v.size(); i++) \
        a[i] = min(v[i], a[i - 1]);
#define loopin(v, n)           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define loopout(v)       \
    for (auto &elem : v) \
        cout << elem << " ";
#define loop(n) for (auto i = 0; i < n; i++)

void solve();

// Entry-Point
signed main()
{
    alkanol();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// Tackling it
void solve()
{
    int n, k;
    cin >> n >> k;
    vll v(n);
    loop(n)
    {
        cin >> v[i];
    }
}
