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
const int MAX = 100 + 5;

int n;
int a[MAX];

/*     Nguyen Huy     */

void run_case() {
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    int ans = INT_MAX;
    for(int i = 1; i <= n;i++)
    {
        vi v; 
        for(int j = 1; j <= n;j++)
        {
            if(j != i)
            {
                v.pb(a[j]);
            }
        }
        ans = min(ans , (*max_element(all(v)) - *min_element(all(v))));
    }
    cout << ans << endl;
}


signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++){
        run_case();
    }
}
