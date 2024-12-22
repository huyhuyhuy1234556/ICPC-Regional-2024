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
const int limit = 1e9;

//fizz chia het cho a nhung khong chia het cho b
//buzz              b                          a
//fizzbuzz chia het ca a va b 
//n khong chia het cho  a    b 

/*     Nguyen Huy     */

void run_case() {
        int n;
        string expected;
        cin >> n >> expected;
        if (expected == "fizz") {
           if(n == limit)
            {
                cout << 1 << " " << n - 1 << endl;
            }
            else{
                cout << 1 << " " << n + 1 << endl;
            }
        } else if (expected == "buzz") {
            if(n == 1 || n == 2)
            {
                cout << -1 << " " << -1 << endl;
            }
            else{
                cout << n - 1 << " " << n << endl;
            }
        } else if (expected == "fizzbuzz") {
            if(n == 1)
            {
                cout << -1 << " " << -1 << endl;
            }
            else{
                cout << 1 << " " << n << endl; 
            }
        } else {
             if(n >= limit - 2)
             {
                 cout << n - 2 <<  " " << n - 1 << endl;
             }
             else
             {
                 cout << n + 1 << " " << n + 2 << endl;
             }
        }
}

signed main() {
    cin.tie(0) -> sync_with_stdio(0);
    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++){

        run_case();
    }
}
