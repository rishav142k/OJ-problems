
// Problem: D. Districts Connection
// Contest: Codeforces - Codeforces Round #677 (Div. 3)
// URL: https://codeforces.com/contest/1433/problem/D
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
     	int n;
     	cin >> n;
     	vi A(n);
     	
     	for(int i = 0 ;i  < n; i++) {
     		cin >> A[i];
     	}
     	int second;
     	bool flag = 0;
     	for(int i = 1; i < n; i++) {
     		if(A[i] != A[0]) {
     			second = i;
     			flag = 1;
     			break;
     		}
     	}
     	if(!flag) {
     		cout << "NO\n";
     		continue;
     	}
     	else {
     		cout << "YES\n";
     	}
     	for(int i = 1; i < n; i++) {
     		if(A[i] != A[0]) {
     			cout << 1 << " " << i+1 << "\n";
     		}
     		else {
     			cout << second+1 << " " << i+1 << "\n";
     		}
     	}
    	
     }
     
     
     
     
     
return 0;
}