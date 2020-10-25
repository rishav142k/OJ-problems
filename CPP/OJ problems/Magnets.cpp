
// Problem: A. Magnets
// Contest: Codeforces - Codeforces Round #200 (Div. 2)
// URL: https://codeforces.com/contest/344/problem/A
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
     
     int n;
     cin >> n;
     vector<string> A(n);
     
     for(int i = 0; i < n; i++) {
     	cin >> A[i];
     }
     
    int res = 1;
    
	string last = A[0];
	string curr;
    for(int i = 1; i < n; i++) {
    	curr = A[i];
    	
    	if(curr[0] != last[0]) {
    		res++;
    	}
    	last = curr;
    }
    cout << res << "\n";
     
     
     
     
     
return 0;
}