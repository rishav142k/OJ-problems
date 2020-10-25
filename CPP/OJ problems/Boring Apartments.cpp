
// Problem: A. Boring Apartments
// Contest: Codeforces - Codeforces Round #677 (Div. 3)
// URL: https://codeforces.com/contest/1433/problem/0
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
     cin.tie(0);
     cout.tie(0);
     
     int t;
     cin >> t;
     while(t--) {
     	
		string s;
		cin >> s;
		
		int len = s.length();
		
		if(s.length() == 4) {
			cout << 10 * (s[0] - '0') << "\n";
		}
		if(s.length() == 3) {
			cout << (10 * (s[0] - '0' - 1)) + 6 << "\n";
		} 
		if(s.length() == 2) {
			cout << (10 * (s[0] - '0' - 1)) + 3 << "\n";
		}
		if(s.length() == 1) {
			cout << (10 * (s[0] - '0' - 1)) + 1 << "\n";
		}
     	
    	
     }
     
     
     
     
     
return 0;
}