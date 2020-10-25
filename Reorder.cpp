
// Problem: A. Reorder
// Contest: Codeforces - Codeforces Round #678 (Div. 2)
// URL: https://codeforces.com/contest/1436/problem/0
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
     while(t--) {
     	int n, m;
     	cin >> n >> m;
     	vi A(n);
     	for(int i = 0 ; i < n; i++) {
     		cin >> A[i];
     	}
     	
     	int sum  = 0;
     	
     	for(int i : A) {
     		sum += i;
     	}
     	if(sum == m) {
     		cout << "YES\n";
     	}
     	else {
     		cout << "NO\n";
     	}
    	
     }
     
     
     
     
     
return 0;
}