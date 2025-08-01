#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

#define loopin(v, n)           \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];

int lis(vector<ll> &v, int idx, int min, vector<vector<ll>> &dp)
{
    int n = v.size();
    if (idx == n)
    {
        return 0;
    }
    if (dp[idx][min + 1] != -1)
    {
        return dp[idx][min];
    }
    // take
    int left = 0;
    if (min == -1 || v[idx] >= v[min])
    {
        left = 1 + lis(v, idx + 1, idx, dp);
    }
    // not take
    int right = lis(v, idx + 1, min, dp);
    return dp[idx][min + 1] = max(left, right);
}

void solve()
{
    int n;
    cin >> n;
    vll v(n);
    loopin(v, n);
    vector<vll> dp(n, vll(n + 1, -1));
    cout << lis(v, 0, -1, dp) << endl;
}
