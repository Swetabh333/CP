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
  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto &x : arr) {
    cin >> x;
  }
  for (int i = 1; i < n; i++) {
    if (abs(arr[i] - arr[i - 1]) == 5 || abs(arr[i] - arr[i - 1]) == 7) {

      continue;
    } else {
      cout << "NO" << nl;
      return;
    }
  }
  cout << "YES" << nl;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}