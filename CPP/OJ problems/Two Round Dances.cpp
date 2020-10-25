
// Problem: E. Two Round Dances
// Contest: Codeforces - Codeforces Round #677 (Div. 3)
// URL: https://codeforces.com/contest/1433/problem/E
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


ll solve(int n) {
	ll res = 1;
	if(n == 2) {
		return 1;
	}
	if(n == 4) {
		return 3;
	}
	
	for(int i = 1; i <= n; i++ ) {
		res *= i;
	}
	
	res /= n;
	res /= n;
	res *= 2;
	
return res;
}

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     
     int n;
     cin >> n;
     
     cout << solve(n) << "\n";
     
     
     
     
     
     
return 0;
}