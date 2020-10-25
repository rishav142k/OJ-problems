
// Problem: A. Team
// Contest: Codeforces - Codeforces Round #143 (Div. 2)
// URL: https://codeforces.com/contest/231/problem/A
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
     cout.tie(0);
     
     int t;
     cin >> t;
     int res = 0;
     while(t--) {
     	int a, b, c;
     	cin >> a >> b >> c;
     	if(a + b + c >= 2) {
     		res++;
     	}
    	
     }
     cout << res << "\n";
     
     
     
     
     
return 0;
}