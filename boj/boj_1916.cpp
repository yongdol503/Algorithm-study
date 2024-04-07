#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, from, to;
	cin >> n >> m;

	vector<int> d(n + 1, 100000001);
	vector<pair<int, int>> v[100001];
	while (m--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		v[a].push_back({c, b});
	}
	cin >> from >> to;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
	q.push({0, from});
	d[from] = 0;
	while (q.size())
	{
		auto current = q.top();
		q.pop();

		if (current.first != d[current.second])
		{
			continue;
		}

		for (auto &p : v[current.second])
		{
			if (p.first + current.first < d[p.second])
			{
				d[p.second] = p.first + current.first;
				q.push({d[p.second], p.second});
			}
		}
	}

	cout << d[to];

	return 0;
}