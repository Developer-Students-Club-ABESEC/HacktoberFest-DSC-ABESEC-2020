#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second

const int maxn = 100005;

int par[maxn];
int Rank[maxn];

int find(int a)
{
    if (par[a] < 0)
        return a;
    return par[a] = find(par[a]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a == b)
        return;
    if (Rank[a] > Rank[b])
    {
        par[b] = a;
        Rank[a] += Rank[b];
    }
    else
    {
        par[a] = b;
        Rank[b] += Rank[a];
    }
}
bool check(int a, int b)
{
    a = find(a);
    b = find(b);

    return (a == b);
}
void InitializeDSU()
{
    for (int i = 1; i <= maxn; i++)
    {
        par[i] = -i;
        Rank[i] = 1;
    }
}

void solve()
{
    InitializeDSU();
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj.push_back({u, v});
    }

    int cnt = 0;

    for (auto i : adj)
    {
        if (check(i.ff, i.ss) == false)
        {
            Union(i.ff, i.ss);
        }
        else
            cnt++;
    }
    cout << cnt << "\n";


}

signed main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
