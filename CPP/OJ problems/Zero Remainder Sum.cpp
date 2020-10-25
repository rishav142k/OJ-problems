
// Problem: F. Zero Remainder Sum
// Contest: Codeforces - Codeforces Round #677 (Div. 3)
// URL: https://codeforces.com/contest/1433/problem/F
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
#define INF 1000000009
using namespace std;
int n, m, k;
int dp[70][70][35][70]; // [row][column][mod][sum_left]
int arr[70][70];

int solve(int i , int j, int total, int mod) {
	if(i == n) {
		if(mod == 0) {
			return 0;
		}
		else {
			return -INF;
		}
		
	}
	if(j ==m || total == m/2) {
		return solve(i+1, 0, 0, mod);
	}
	int &ans = dp[i][j][total][mod];
	if(ans != -1) {
		return ans;
	}
	int val = solve(i, j+1, total , mod);
	
	val = max(val, arr[i][j] + solve(i, j+1, total+1, (mod+arr[i][j]) % k));
	
	return ans = val;
	
} 

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     

     cin >> n >> m >> k;
     
     for(int i = 0 ; i < n; i++) {
     	for(int j = 0 ; j < m; j++) {
     		cin >> arr[i][j];
     	}
     }
     
     memset(dp, -1, sizeof(dp));
     cout <<solve(0, 0, 0, 0) << "\n";
     
     
     
     
     
return 0;
}