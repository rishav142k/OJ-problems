
// Problem: A. Petya and Strings
// Contest: Codeforces - Codeforces Beta Round #85 (Div. 2 Only)
// URL: https://codeforces.com/contest/112/problem/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
	cin.tie(0);



	string s1, s2;
	cin >> s1;
	cin >> s2;
	transform(s1.begin(), s1.en	d(),s1.begin(),  ::tolower);
	transform(s2.begin(), s2.end(),s2.begin(),  ::tolower);
	
	bool a = lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end());
	
	if(a == 1) cout << -1 << "\n";
	else if(s1.compare(s2) == 0) cout << 0 <<"\n";
	else cout << 1 << "\n";
	
	


return 0;
}