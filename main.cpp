#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;
using vs = vector<string>;

vs dict{"ABCDEFGHJLM", "ACEFGHILM", "ACEFGHILM", "ABCEFGHLM", "ACEFGHLM",
        "ACEFGHLM",    "ACEFGHLM",  "ACEFGHLM",  "ACEFGHLM",  "ABCFGHLM"};

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll n;
  cin >> n;

  cout << dict[n - 1].length() << '\n';
  for (const auto& x : dict[n - 1]) {
    cout << x << ' ';
  }

  return 0;
}