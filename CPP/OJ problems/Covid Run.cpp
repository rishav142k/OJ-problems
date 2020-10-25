
// Problem: Covid Run
// Contest: CodeChef - October Challenge 2020 Division 2
// URL: https://www.codechef.com/OCT20B/problems/CVDRUN
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
     	int n, k, start, dest;
     	cin >> n >> k >> start >> dest;
     	
     	vi A(n+1, 0);
     	
     	int i = start;
     	bool flag = 0;
     	while(true) {
     		if(A[i] == 1) {
     			cout << "NO\n";
     			break;
     		}
     		if(i == dest) {
     			cout << "YES\n"; break;
     		}
     		A[i] = 1;
     		i = (i + k)%n;
     		
     		
     	}
    	
     }
     
     
     
     
     
return 0;
}