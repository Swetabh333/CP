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

void print(string s, string t) {
  string small = s.size() < t.size() ? s : t;
  string big = s.size() >= t.size() ? s : t;
  int ans = small.size();
  int count = 0;
  forl(i, 0, small.size()) {

    if (small[i] == big[i]) {
      count++;
    } else {
      break;
    }
  }
  if (count == 0) {
    cout << small.size() + big.size() << endl;
  } else {
    ans += big.size() - count + 1;

    cout << ans << endl;
    ;
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int n;
  cin >> n;
  while (n--) {
    string s, t;
    cin >> s;
    cin >> t;
    print(s, t);
  }
}
