
// Problem: A. Beautiful Matrix
// Contest: Codeforces - Codeforces Round #161 (Div. 2)
// URL: https://codeforces.com/contest/263/problem/A
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
     
     int m[5][5];
     int a = 0, b =0;
     for(int i = 0; i < 5; i++) {
     	for(int j = 0; j < 5; j++) {
     		cin >> m[i][j];
     		if(m[i][j] == 1) {
     			a = i;
     			b = j;
     		}
     	}
     }
     cout << abs(a -2) + abs(b-2) << "\n";
     
     
     
     
     
     
     
return 0;
}