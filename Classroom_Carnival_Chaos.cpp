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
const int MOD = 1e9 + 7;
const int MAX = 1e7 + 5;

ll n ,m;
ll fac[MAX];

void gt() {
    fac[0] = 1;
    for(int i = 1; i <= MAX; i++) {
        fac[i] = (fac[i - 1] * i) % MOD;
    }
}
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return res;
}

void run_case() {
    cin >> n >> m;
    ll n_fact = fac[n];
    ll m_fact = fac[m];
    ll res1 = binpow(n_fact, m);
    ll res2 = binpow(m_fact, n);
    cout << res1*res2 % MOD << endl;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    gt();
    int Test;
    cin >> Test;
    while (Test--) {
        run_case();
    }
}
