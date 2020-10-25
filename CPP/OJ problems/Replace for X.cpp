
// Problem: Replace for X
// Contest: CodeChef - October Challenge 2020 Division 2
// URL: https://www.codechef.com/OCT20B/problems/REPLESX
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


ll find_index(vl A, ll n, ll x, ll p) {
	
    ll min = INT_MAX, min_prime=-1;
    for(ll i=0; i < n; i++){
        if(A[i] == x) {
            if(abs(i - p) < min) {
                min = abs(i - p);
                min_prime = i;
            }
        }
    }
    return min_prime;
}
void main_function() {
	
    ll n, x, p, k;
    cin >> n >> x >> p >> k;
	vl A(n);
    for(ll i = 0; i < n; i++) {
	    cin >> A[i];
	}
	
    sort(A.begin(), A.end());
    
    ll index_to_be_found = find_index(A, n, x, p);
    ll cnt = 0;
    
    if(A[index_to_be_found] != x) {
        A[k-1] = x;
        sort(A.begin(), A.end());
        cnt++;
    }
    
    // handling all the base cases...
    if(A[p-1] == x) {
        cout << cnt << "\n";
        return;
    }
    else if(p < k and A[p-1] < x) {
        cout << "-1\n";
        return;
    }
    else if(p > k and A[p-1] > x) {
        cout << "-1\n";
        return;
    }
    // main thing to calculate ...
    index_to_be_found = find_index(A, n, x, p) + 1;
    
    cout << abs(p-index_to_be_found) + cnt << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) {
        main_function();
    }
return 0;
}