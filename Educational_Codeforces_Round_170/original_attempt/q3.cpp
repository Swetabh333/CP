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

int result(int n, int k, vector<int> &a) {
  sort(fullarr(a));
  int max_ans = 0;
  int left = 0, right = 0, distinct = 0, last_elem = -1000;
  while (right < n) {
    if (a[right] != last_elem) {
      if (right == 0 || a[right] == a[right - 1] + 1) {
        distinct++;
        last_elem = a[right];
      } else {
        break;
      }
    }
    if (distinct > k) {
      int curr = a[left];
      while (a[left] == curr) {
        left++;
      }
      distinct--;
    }
    max_ans = max(max_ans, right - left + 1);

    right++;
  }

  return max_ans;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    cout << result(n, k, a) << nl;
  }
}
