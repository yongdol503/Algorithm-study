#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int parent;
    vector<int> childs;
    bool isDelete;
};

Node t[50];

void dfs(int idx)
{
    t[idx].isDelete = true;
    for (int child : t[idx].childs)
    {
        dfs(child);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, st, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        t[i].parent = p;
        if (p == -1)
        {
            continue;
        }
        t[p].childs.push_back(i);
    }

    cin >> st;
    t[t[st].parent].childs.erase(remove(t[t[st].parent].childs.begin(), t[t[st].parent].childs.end(), st), t[t[st].parent].childs.end());
    dfs(st);

    for (int i = 0; i < n; i++)
    {
        if (!t[i].isDelete && t[i].childs.size() == 0)
        {
            ans++;
        }
    }

    cout << ans;

    return 0;
}