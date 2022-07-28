#include <bits/stdc++.h>

using namespace std;

// Binary index tree.
struct BIT {
  vector<int> f;

  BIT(int n = 0) {
    f.assign(n, 0);
  }

  int get(int at) {
    int res = 0;
    for (; at >= 0; at = (at & (at + 1)) - 1)
      res += f[at];
    return res;
  }

  void upd(int at, int delta) {
    for (; at < f.size(); at = (at | (at + 1)))
      f[at] += delta;
  }
};

// A tree for range updates and queries.
struct Tree {
  BIT f1;
  BIT f2;

  Tree(int n = 0): f1(n + 1), f2(n + 1) {}

  void upd(int low, int high, int delta) {
    f1.upd(low, delta);
    f1.upd(high + 1, -delta);
    f2.upd(low, delta * (low - 1));
    f2.upd(high + 1, -delta * high);
  }

  int get(int pos) {
    return f1.get(pos) * pos - f2.get(pos);
  }

  int get(int low, int high) {
    return get(high) - (low == 0 ? 0 : get(low - 1));
  }
};

// A naive implementation.
struct DummyTree {
  vector<int> a;

  DummyTree(int n = 0): a(n) {}

  void upd(int low, int high, int delta) {
    for (int i = low; i <= high; i++)
      a[i] += delta;
  }

  int get(int low, int high) {
    int res = 0;
    for (int i = low; i <= high; i++)
      res += a[i];
    return res;
  }
};

int main() {
  ios_base::sync_with_stdio(0);
  int n = 100;
  Tree t1(n);
  DummyTree t2(n);
  for (int i = 0; i < 10000; i++) {
    int l = rand() % n;
    int r = rand() % n;
    int v = rand() % 10;
    if (l > r)
      swap(l, r);
    t1.upd(l, r, v);
    t2.upd(l, r, v);
    for (int low = 0; low < n; low++)
      for (int high = low; high < n; high++)
    assert(t1.get(low, high) == t2.get(low, high));
  }
  return 0;
}