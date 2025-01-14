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
  int n, m, k;
  cin >> n >> m >> k;
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < n;) {
    if (s[i] == '0') {
      int j = i;
      while (j < n && s[j] == '0') {
        j++;
      }
      int weakLen = j - i;
      if (weakLen >= m) {
        int pos = i + m - 1;
        for (int x = pos; x < pos + k; x++) {
          s[x] = '1';
        }
        ans++;
        i = pos + k;
      } else {
        i = j;
      }
    } else {
      i++;
    }
  }
  cout << ans << endl;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
