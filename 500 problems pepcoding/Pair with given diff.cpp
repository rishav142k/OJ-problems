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
     t = 1;
     cin >> t;
     while(t--) {
     	// a - b = target
     	int n, diff;
     	cin >> n >> diff;
     	vi A(n);
     	for(int i = 0 ; i < n; i++) {
     		cin >> A[i];
     	}
     	// can easily be modified for negative differences as well...
     	unordered_set<int> mp;
     	for(int i = 0 ; i < n; i++ ) {
     		if(A[i] > diff) {
				if(mp.find(A[i] - diff) != mp.end()) {
					cout << A[i] - diff << " " << A[i] << "\n";
					break;
				}
				else {
					mp.insert(A[i]);
				}
     		}
     		else {
     			if(mp.find(A[i] + diff) != mp.end()) {
     				cout << A[i] + diff << " " << A[i] << "\n";
     			}
     			else {
     				mp.insert(A[i]);
     			}
     			
     		}
     	}
     	
     	
     }
     
     
     
     
     
return 0;
}