
// Problem: A. Gravity Flip
// Contest: Codeforces - Codeforces Round #238 (Div. 2)
// URL: https://codeforces.com/contest/405/problem/A
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
     vi A(n);
     for(int i = 0; i < n; i++ ) {
     	cin >> A[i];
     }
     sort(A.begin(), A.end());
     
     for(int i = 0; i < n; i++) {
     	cout << A[i] << " ";
     }
     cout << "\n";
     
     
     
     
return 0;
}