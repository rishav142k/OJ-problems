
// Problem: A. Sereja and Dima
// Contest: Codeforces - Codeforces Round #223 (Div. 2)
// URL: https://codeforces.com/contest/381/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define ll long long int
#define vi vector<int>
#define vii vector<int, int>
#define vc vector<char>
#define vl vector<ll>
#define mod 1000000007 
#define INF 1000000009
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
 
	int n;
	cin >> n;
	int a[1001];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
 
	int l = 0, r = n - 1;
	int s1 = 0, s2 = 0;
	bool f = 1;
	while (l <= r)
	{
		int t;
		if (a[l] > a[r])
		{
			t = a[l];
			l++;
		}
		else
		{
			t = a[r];
			r--;
		}
		if (f)
			s1 += t;
		else
			s2 += t;
		f = !f;
	}
	cout << s1 << " " << s2 << "\n";
	return 0;
}