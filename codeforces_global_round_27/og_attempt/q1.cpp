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

void solve(int rows, int cols, int row, int col) {
  ll sum = 0;
  ll row_dist = rows - row;
  ll col_dist = cols - col;
  sum += row_dist * (cols);
  sum += (cols - 1) * row_dist;
  sum += col_dist;
  cout << sum << endl;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, m, r, c;
    cin >> n;
    cin >> m;
    cin >> r;
    cin >> c;
    solve(n, m, r, c);
  }
}
