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
  string s;
  cin >> s;
  int q;
  cin >> q;

  int n = s.size();
  int count1100 = 0;

  for (int i = 0; i <= n - 4; i++) {
    if (s.substr(i, 4) == "1100") {
      count1100++;
    }
  }

  while (q--) {
    int i;
    char v;
    cin >> i >> v;
    i--;

    for (int j = max(0, i - 3); j <= min(n - 4, i); j++) {
      if (s.substr(j, 4) == "1100")
        count1100--;
    }

    s[i] = v;

    for (int j = max(0, i - 3); j <= min(n - 4, i); j++) {
      if (s.substr(j, 4) == "1100")
        count1100++;
    }

    if (count1100 > 0) {
      cout << "YES" << nl;
    } else {
      cout << "NO" << nl;
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
