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

void create_perms(int n, vector<string> &perms, string &curr, int index) {
  if (index == n) {
    if (curr[curr.size() - 1] == '6')
      perms.push_back(curr);
    return;
  }
  curr.push_back('3');
  create_perms(n, perms, curr, index + 1);
  curr.pop_back();
  curr.push_back('6');
  create_perms(n, perms, curr, index + 1);
  curr.pop_back();
}

void solve() {
  int n;
  cin >> n;
  vector<string> perms;
  string curr = "";
  create_perms(n, perms, curr, 0);
  bool check = true;
  for (int i = 0; i < perms.size(); i++) {
    if (stoll(perms[i]) % 66 == 0) {
      cout << perms[i] << endl;
      check = false;
      break;
    }
  }
  if (check) {
    cout << -1 << endl;
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
