
// Problem: C. Binary Search
// Contest: Codeforces - Codeforces Round #678 (Div. 2)
// URL: https://codeforces.com/contest/1436/problem/C
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
#define int long long int
#define vl vector<ll>
#define M 1000000007 
#define INF 1000000009
using namespace std;

const int N = 5000;
#define NCR
#define PRIME	M

int fact[N],invfact[N];
int pw(int a,int p=M-2,int MOD=M){
	int result = 1;
	while (p > 0) {
		if (p & 1)
			result = a * result % MOD;
		a = a * a % MOD;
		p >>= 1;
	}
	return result;
}

void init(){
	int p=PRIME;
	fact[0]=1;
	int i;
	for(i=1;i<N;i++){
		fact[i]=i*fact[i-1]%p;
	}
	i--;
	invfact[i]=pw(fact[i],p-2,p);
	for(i--;i>=0;i--){
		invfact[i]=invfact[i+1]*(i+1)%p;
	}
}

int ncr(int n, int r) 
{ 
    int p = 1, k = 1; 
  
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 

            int m = __gcd(p, k); 
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
    } 
  
    else
        p = 1;  

return p;
} 




signed main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     
     init();
	int n,x,pos;
	cin >> n >> x >> pos;
	
	int cnts = 0, cntb = 0;
	int left = 0, right = n;
	while(left < right){
		int middle = (left + right) / 2;
		if(middle > pos) cntb++;
		if(middle < pos) cnts++;
		if(middle <= pos){
			left = middle + 1;
		}
		else{
			right = middle;
		}
	}
	
	assert(left - 1 == pos);
	
	// cnts, cntb
	
	cout << ncr(x-1,cnts) * ncr(n-x,cntb) % M * fact[(n - cnts - cntb - 1)] % M * fact[cnts] % M * fact[cntb] % M;
     
     
	
     
     
     
     
     
return 0;
}