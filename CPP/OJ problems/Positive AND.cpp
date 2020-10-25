
// Problem: Positive AND
// Contest: CodeChef - October Challenge 2020 Division 2
// URL: https://www.codechef.com/OCT20B/problems/POSAND
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
     	
     	if(n == 1) {
     		cout << "1\n";
     	}
     	else if(n == 2) {
     		cout << "-1\n";
     	}
     	else if(n == 3) {
     		cout << "1 3 2\n";
     	}
     	else if(n == 4) {
     		cout << "-1\n";
     	}
     	else if(n == 5) {
     		cout << "2 3 1 5 4\n";
     	}
     	else if(n == 6) {
     		cout << "1 3 2 6 4 5\n";
     	}
     	else if(n == 7) {
     		cout << "1 3 2 6 4 5 7\n";
     	}
     	else if(n == 8) {
     		cout << "-1\n";
     	}
     	else if(n == 9) {
     		cout << "1 3 2 6 4 5 7 9 8\n";
     	}
     	else {
     		if((n & (n-1)) == 0) {
     			cout << "-1\n";
     		}
     		else {
     			cout << "2 3 1 ";
     			
     			for(int i = 4 ; i <= n; i++) {
     				if((i & (i- 1)) == 0) {
     					cout<< i+1;
     					cout << " " << i << " ";
     					i++;
     				}
     				else {
     					cout << i << " ";
     				}
     			}
     			cout << "\n";
     			
     		}
     	}
     	
     	
    	
     }
     
     
     
     
     
return 0;
}