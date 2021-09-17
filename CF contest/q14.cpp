#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("O2")
typedef long long ll;
#define int long long
#define endl '\n'
#define  ps(x,y)     fixed<<setprecision(y)<<x
#define sz(x) ((long long)(x).size())
#define all(x)  x.begin(),x.end()
#define rall(x) (x).rbegin(), (x).rend()
#define trav(a,x) for (auto& a : x)
#define ff first
#define ss second
#define pb push_back
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define leastsigbit(x)     __builtin_ffs(x)
const int MOD = 1e9 + 7;
#define hmap        unordered_map
#define hset        unordered_set
#define vi vector<int>
#define vs vector<string>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define vpii vector<pii>
#define tt ll tt;cin >> tt;while(tt--)
#define  fio ios::sync_with_stdio(0); cin.tie(NULL);
#define D1(x) { cerr << " [" << #x << ": " << x << "]\n"; }
#define D2(x) { cerr << " [" << #x << ": "; for(auto it:x) cerr << it << " "; cerr << "]\n";}
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) for(long blockTime = 0; (blockTime == 0 ? (blockTime=clock()) != 0 : false); debug("%s time : %.4fs", d, (double)(clock() - blockTime) / CLOCKS_PER_SEC))
const double PI = acos(-1);
ll power(ll a,ll b,ll m=MOD){ ll ans=1; a=a%m;  while(b>0) {  if(b&1)  ans=(1ll*a*ans)%m; b>>=1;a=(1ll*a*a)%m;}return ans;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
ll lcm( ll x, ll y) { return (x*y)/gcd(x,y);}
bool isprime(ll n){if(n < 2) return 0; ll i = 2; while(i*i <= n){if(n%i == 0) return 0; i++;} return 1;}
bool isPowerOfTwo(int x)
{
	/* First x in the below expression is for the case when x is 0 */
	return x && (!(x&(x-1)));
}
double distform(int x, int y, int z, int w) {//(x1,y1,x2,y2)
	return sqrt(1. * pow(x-z,2) + 1. * pow(y-w,2));
}
int dx[] = {-1,1,0,0,-1,1,1,-1};
int dy[] = {0,0,1,-1,1,1,-1,-1};
const int MAXN = 2e5+ 10;
const ll inf = 1e18;
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}
 
int intlog(double base, double x) {
	return (int)(log(x) / log(base));
}
bool isvalid (int x, int y,int n,int m) {
	return x >= 0 and x < n and y >= 0 and y < m;
}
#define yess cout<<"YES"<<endl
#define noo cout<<"NO"<<endl
template <typename T> void read(T &x) {for (int i = 0; i < sz(x); ++i) cin >> x[i];
}
struct custom_hash {
	static uint64_t splitmix64(uint64_t x) {
		// http://xorshift.di.unimi.it/splitmix64.c
		x += 0x9e3779b97f4a7c15;
		x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
		x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
		return x ^ (x >> 31);
	}
 
	size_t operator()(uint64_t x) const {
		static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
		return splitmix64(x + FIXED_RANDOM);
	}
	//unordered_map<long long, int, custom_hash> safe_map;
};
int query(int start, int end) {
	cout << "? " << start << " " << end << endl;
	int q; cin >> q;
	return q;
}
void print(int n) {
	cout << "! " << n << endl;
}
struct Local {
	char paramA;
	Local(char paramA) { this->paramA = paramA; }
	bool operator () (int i, int j, ...) {
		return false;
	}
 
};
 
void solve() {

	ll a, b; 
	cin >> a >> b; 	

	ll maxGCD = abs(a - b); 

	ll operations = 0; 
	if(maxGCD != 0)
	{
		operations = min(a%maxGCD, maxGCD - a%maxGCD); 
	}

	cout << maxGCD << " " << operations << endl; 

}
int32_t main() {
	fio
	tt
	solve();
}
 
