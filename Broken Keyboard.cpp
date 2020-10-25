
// Problem: A. Broken Keyboard
// Contest: Codeforces - Educational Codeforces Round 75 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1251/problem/A
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
#define int long long int
#define vl vector<ll>
#define mod 1000000007 
#define INF 1000000009
using namespace std;


signed main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     
     int t;
     cin >> t;
    while (t--) {
		string s;
		string res = "";
		cin >> s;
		int n = s.size();
	
		for (int i = 0; i < n ; i++)
		{
			if (s[i] != s[i + 1])
				res += s[i];
			else
				i++;
		}
 
		if (res.size() != 0) {
			sort(res.begin(), res.end());
			auto last = unique(res.begin(), res.end());
			res.erase(last, res.end());
		}
		cout << res << endl;
	}
     
     
     
     
return 0;
}