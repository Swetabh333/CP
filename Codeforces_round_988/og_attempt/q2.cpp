#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef unordered_map<int, int> umii;
typedef unordered_map<char, int> umci;
typedef unordered_map<string, int> umsi;
typedef set<int> si;
typedef set<char> sc;

#define pb push_back
#define F first
#define S second
#define dbg(x) cout << #x << " = " << x << endl
#define fullarr(x) x.begin(), x.end()
#define fullsort(x) sort(fullarr(x))
#define forl(i, a, b) for (ll i = a; i < b; i++)
#define nl "\n"

const int MOD = 1000000007;

void solve() {
  int k;
  cin >> k;
  int gridDimension = k - 2;
  unordered_map<int, int> mp;
  vector<int> inpArr;
  forl(i, 0, k) {
    int inp;
    cin >> inp;
    inpArr.push_back(inp);
    mp[inp] = i;
  }
  forl(i, 0, k) {
    if (gridDimension % inpArr[i] == 0) {
      int rem = gridDimension / inpArr[i];
      if (mp.find(rem) != mp.end() && i != mp[rem]) {
        cout << inpArr[i] << " " << rem << endl;
        break;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
