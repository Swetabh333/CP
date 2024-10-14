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

const int MAXN = 1e5 + 5;

vector<int> C(MAXN);

void calculateRow(int n) {
  C[0] = 1;
  for (int k = 1; k <= n; k++) {
    C[k] = (C[k] + C[k - 1]) % MOD;
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;

  vector<pair<int, int>> queries(t);
  int max_n = 0;

  for (int i = 0; i < t; i++) {
    cin >> queries[i].first >> queries[i].second;
    max_n = max(max_n, queries[i].first);
  }

  for (int n = 0; n <= max_n; n++) {
    calculateRow(n);
  }

  for (const auto &query : queries) {
    cout << C[query.second] << '\n';
  }

  return 0;
}
