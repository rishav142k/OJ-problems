
// Problem: A. Night at the Museum
// Contest: Codeforces - Codeforces Round #376 (Div. 2)
// URL: https://codeforces.com/contest/731/problem/A
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
     	
    string s;
    cin >> s;
    
    int loc = 'a';
    int res = 0;
    int diff1, diff2;
    for(auto x : s) {
    	diff1 = abs(x - loc);
    	diff2 = 26 - diff1;
    	res +=  min(diff1 , 26 - diff1);
    	
    	//cout << diff1 << " " << diff2 << "\n";
    	loc = x;
    }
    cout << res << "\n";
     
     
     
     
     
return 0;
}