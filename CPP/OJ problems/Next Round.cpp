
// Problem: A. Next Round
// Contest: Codeforces - VK Cup 2012 Qualification Round 1
// URL: https://codeforces.com/problemset/problem/158/A
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
     
     int t = 1;
     //cin >> t;
     while(t--) {
     	int n, k;
     	cin >> n >> k;
     	
     	vi A(n);
     	for(int i = 0; i  < n; i++) {
     		cin >>A[i];
     	}
     	int num = A[k-1];
     	
     	int res = 0;
     	for(int i :A) {
     		if(i >= num and i > 0) {
     			res++;
     		}
     	}
     	cout << res << "\n";
     	
     	
    	
     }
     
     
     
     
     
return 0;
}