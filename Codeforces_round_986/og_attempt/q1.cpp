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
  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  int x = 0, y = 0;

  // Calculate net movement after one full sequence
  int dx = 0, dy = 0;
  for (char move : s) {
    if (move == 'N')
      dy++;
    else if (move == 'S')
      dy--;
    else if (move == 'E')
      dx++;
    else if (move == 'W')
      dx--;
  }

  // Set to keep track of visited positions within one cycle
  set<pair<int, int>> visited;
  visited.insert({0, 0});

  // Check first cycle
  x = y = 0;
  for (char move : s) {
    if (move == 'N')
      y++;
    else if (move == 'S')
      y--;
    else if (move == 'E')
      x++;
    else if (move == 'W')
      x--;

    if (x == a && y == b) {
      cout << "YES" << endl;
      return;
    }
    visited.insert({x, y});
  }

  if (dx == 0 && dy == 0) {
    cout << "NO" << endl;
    return;
  }
  for (const auto &point : visited) {
    int px = point.first;
    int py = point.second;

    if (dx != 0) {
      if ((a - px) % dx == 0) {
        long long k = (a - px) / dx;
        if (k >= 0 && py + k * dy == b) {
          cout << "YES" << endl;
          return;
        }
      }
    } else if (dy != 0) {
      if ((b - py) % dy == 0) {
        long long k = (b - py) / dy;
        if (k >= 0 && px + k * dx == a) {
          cout << "YES" << endl;
          return;
        }
      }
    }
  }
  cout << "NO" << endl;
  return;
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
