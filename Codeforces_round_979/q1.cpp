#include <bits/stdc++.h>
#include <functional>

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

vector<int> sortAlternate(vector<int> &a) {
  sort(a.begin(), a.end());
  vector<int> rearranged;

  int left = 0;
  int right = a.size() - 1;

  while (left <= right) {
    if (right >= left) {
      rearranged.push_back(a[right]);
      right--;
    }
    if (left <= right) {
      rearranged.push_back(a[left]);
      left++;
    }
  }

  return rearranged;
}

void solve(vector<int> &a) {
  vector<int> b, c;
  vector<int> rearr = sortAlternate(a);
  int maxi = INT_MIN;
  int mini = INT_MAX;
  for (int i = 0; i < a.size(); i++) {
    maxi = max(maxi, rearr[i]);
    mini = min(mini, rearr[i]);
    b.pb(mini);
    c.pb(maxi);
  }
  int sum = 0;
  for (int i = 0; i < a.size(); i++) {
    sum += c[i] - b[i];
  }
  cout << sum << nl;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    solve(a);
  }
}
