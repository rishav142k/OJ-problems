
// Problem: C. Dominant Piranha
// Contest: Codeforces - Codeforces Round #677 (Div. 3)
// URL: https://codeforces.com/contest/1433/problem/C
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
     	vi A(n);
     	for(int i = 0 ; i <n; i++) {
     		cin >> A[i];
     	}
     	int mx = *max_element(A.begin(), A.end());
     	if(n == 1) {
     		cout << 1 << "\n";
     		continue;
     	}
     	vi index;
     	
		for(int i = 0 ; i < n; i++) {
			if(A[i] == mx) {
				index.PB(i);
			}
		}
		
		bool flag = 0;
		for(int i: index) {
			if(i == 0) {
				if(A[i] > A[i+1]) {
					cout <<i+1 << "\n";
					flag= 1;
					break;
				}
			}
			else if(i == n-1) {
				if(A[i] > A[i-1]) {
					cout << i+1 << "\n";
					flag = 1; 
					break;
				}
			}
			else {
				if(A[i] > A[i+1] || A[i] > A[i-1]) {
					cout << i+1 << "\n";
					flag = 1;
					break;
				}
			}
			
		}
		
		if(!flag) {
			cout << "-1\n";
		}
     
     
    } 
     
     
return 0;
}