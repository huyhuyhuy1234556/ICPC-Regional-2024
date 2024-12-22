#include "bits/stdc++.h"
using namespace std;
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mk make_pair
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
using ll = long long;
const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 998244353;
const int MAX = 1e7 + 5;
const int limit = 1e9;

int n ,q, min_time = 0; 
multiset<int> ms;
ll ans = 0;

ll binpow(ll a,ll b) 
{
    if(b == 0)
    {
        return 1;
    }
    ll x = binpow(a , b/2);
    if(b % 2 == 0)
    {
        return (x % MOD)*(x % MOD) % MOD;
    }
    else
    {
        return ((x % MOD)* (x % MOD) % MOD)*(a % MOD)%MOD;
    }
}

/*     Nguyen Huy     */

void run_case() {
    cin >> n >> q;
    while(q--)
    {
        char choice;
        int w,v;
        cin >> choice >> w >> v;
        min_time = ms.size() ? *ms.begin() : 0;
        if(choice == '+')
        {
           ans += w * binpow(v , MOD - 2) % MOD; 
           ms.insert(v);  
        }
        else
        {
            ans -= w * binpow(v, MOD - 2) % MOD;
            ms.erase(ms.find(v));
        }
        
        int cur_time = *ms.begin();
        if(cur_time != min_time)
        {
            ans += n * binpow(cur_time , MOD - 2) % MOD;
            ans -= n * binpow(min_time, MOD - 2) % MOD;
        }
        cout << (ans % MOD) << endl; 
    }
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    int Test = 1;
    //cin >> Test;
    for (int test = 1; test <= Test; test++){

        run_case();
    }
}
