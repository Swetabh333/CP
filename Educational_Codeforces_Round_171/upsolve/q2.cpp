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
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  if (n == 1) {
    cout << 1 << nl;
    return;
  }
  fullsort(arr);
  if (n % 2 == 0) {
    int ans = arr[1] - arr[0];
    for (int i = 2; i < n - 1; i += 2) {
      ans = max(ans, arr[i + 1] - arr[i]);
    }
    cout << ans << nl;
    return;
  }
  int ans = INT_MAX;
  for (int i = 0; i < n; i++) {
    vector<int> temp;
    for (int j = 0; j < n; j++) {
      if (i == j)
        continue;
      temp.pb(arr[j]);
    }
    int maxi = temp[1] - temp[0];
    for (int k = 2; k < n - 2; k += 2) {
      maxi = max(maxi, temp[k + 1] - temp[k]);
    }
    ans = min(ans, maxi);
  }
  cout << ans << nl;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
