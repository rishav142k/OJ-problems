
// Problem: A. Black Square
// Contest: Codeforces - Codeforces Round #247 (Div. 2)
// URL: https://codeforces.com/contest/431/problem/A
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
     
    vi A(5);
    for(int i = 1; i <= 4; i++) {
    	cin >> A[i];
    }
    string s;
    cin >> s;
    int res = 0;
    for(auto x: s) {
    	res += (A[x - '0']);
    }
    cout << res << "\n";
    
     
     
     
     
     
return 0;
}