/*
 █████╗ ██╗     ██╗  ██╗ █████╗ ███╗   ██╗ ██████╗ ██╗
██╔══██╗██║     ██║ ██╔╝██╔══██╗████╗  ██║██╔═══██╗██║
███████║██║     █████╔╝ ███████║██╔██╗ ██║██║   ██║██║
██╔══██║██║     ██╔═██╗ ██╔══██║██║╚██╗██║██║   ██║██║
██║  ██║███████╗██║  ██╗██║  ██║██║ ╚████║╚██████╔╝███████╗
╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝ ╚══════╝
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

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

void alkanol()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

#define vll vector<ll>
#define pll pair<ll, ll>
#define vpll vector<pair<ll, ll>>
#define sll set<ll>
#define vs vector<string>
#define pq priority_queue
#define elif else if

#define yes cout << "YES\n";
#define no cout << "NO\n";
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sum(v) accumulate(all(v), 0LL)
#define cnt_setbits(x) __builtin_popcountll(x)
#define maxm(v) *max_element(all(v))
#define minm(v) *min_element(all(v))

#define int long long
#define ll long long
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define popb pop_back

#define copy(a, b)      \
    for (ll i = 0; i < b.size(); i++) \
        a[i] = b[i];
#define prefix(a, v)    \
    a[0] = v[0];               \
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

void solve()
{
    int n, k;
    cin >> n >> k;
    vll v(n);
    loopin(v, n);
}
