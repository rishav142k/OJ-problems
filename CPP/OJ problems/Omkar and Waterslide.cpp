
// Problem: C. Omkar and Waterslide
// Contest: Codeforces - Codeforces Global Round 10
// URL: https://codeforces.com/contest/1392/problem/C
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
     while(t--) {
     	
     	int n;
     	cin >> n;
     	vl A(n);
     	
     	for(int i = 0 ; i < n; i++) {
     		cin >> A[i];
     	}
     	
     	ll diff = INT_MIN;
     	ll res = 0;
     	
     	for(int i = 1; i < n; i++) {
     		diff = A[i] - A[i-1];
     		
     		if(diff < 0 ) {
     			res += abs(diff);
     		}
     		
     	}
     	cout << res << "\n";
     	
     	
    	
     }
     
     
     
     
     
return 0;
}