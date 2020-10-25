
// Problem: B. Yet Another Bookshelf
// Contest: Codeforces - Codeforces Round #677 (Div. 3)
// URL: https://codeforces.com/contest/1433/problem/B
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
     	
     	for(int i = 0 ; i < n; i++) cin >> A[i];
     	
     	
     	int cnt = 0;
     	int temp = 0;
     	bool flag = 0;
     	for(int i = 0; i < n; i++) {
     		if(A[i] == 1) {
     			cnt += temp;
     			temp = 0;
     			flag = 1;
     			continue;
     		}
     		if(flag == 1 && A[i] == 0) {
     			temp++;
     		}
     		
     		
     	}
     	cout <<cnt << "\n";
     	
    	
     }
     
     
     
     
     
return 0;
}