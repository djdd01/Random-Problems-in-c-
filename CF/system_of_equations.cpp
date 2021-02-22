//https://codeforces.com/problemset/problem/214/A
/*can be done in n^2 but mine is O(m*(log(4)+log(2))) so almost O(m) solution 
since solving the equations further gives the result that sqrt(m-a) should be positive and that means a will be less than equal to m.*/

#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long
#define ll long long
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(a) a.begin(), a.end()
typedef map<int,int> mii;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpi;
typedef vector<pll> vpll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

double EPS = 1e-9;
int INF = 1000000007;
long long INFF = 1000000000000000007LL;
double PI = acos(-1);
int dirx[8] = {-1, 0, 0, 1, -1, -1, 1, 1};
int diry[8] = {0, 1, -1, 0, -1, 1, -1, 1};

#define SQR(x) ((ll)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back

void solve();
ll power(ll a, int b);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    /*is Single Test case?*/ //cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void solve()
{
    cout << setprecision(12);
    int n,m;
    cin >> n>>m;
    int lhs = 0;
    int rhs = 0;
    int b =0 ;
    int count=0;
    rep(i,0,m+1){
        lhs = power(i,4) - (2*n*power(i,2)) + i; 
        rhs = m - n*n;
        if(lhs == rhs){
            b = n - i*i;
            if(b >= 0)
            count++;
        }
    }
    cout << count;
    return;
}
ll power(ll a, int b){
    int result = 1;
    while(b>0){
        result = result*result;
        if(b%2 != 0){
            result = result*a;
        }
        a = a*a;
        b >>=1;
    }
    return result;
}
