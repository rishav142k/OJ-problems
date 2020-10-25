
// Problem: B. Prime Square
// Contest: Codeforces - Codeforces Round #678 (Div. 2)
// URL: https://codeforces.com/contest/1436/problem/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms
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

void rotate(vector<int>& arr, int n) 
{ 
    int x = arr[n - 1], i; 
    for (i = n - 1; i > 0; i--) 
    arr[i] = arr[i - 1];  
    arr[0] = x; 
} 


signed main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     
     int t;
     cin >> t;
     while(t--) {
     	int n;
     	cin >> n;
     	
     	vector<int> A(n, 0);
     	A[0] = 1;
     	A[1] = 4;
     	
     	
     	for(int i = 0; i < n-1; i++) {
     		for(int i : A) {
     			cout << i << " ";
     		}
     		rotate(A, n);
     		cout << "\n";
     	}
     	A[0] = 4;
     	A[1] = 0;
     	A[n-1] = 1;
     	for(int i : A) {
     		cout << i << " ";
     	}
     	cout << "\n";

    	
     }
     
     
     
     
     
return 0;
}