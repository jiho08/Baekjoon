#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
  int socks[5];
  for (int i = 0; i < 5; i++) {
    cin >> socks[i];
  }

  unordered_set<int> unique;
  for (int i = 0; i < 5; i++) {
    if (unique.find(socks[i]) == unique.end()) {
      unique.insert(socks[i]);
    } else {
      unique.erase(socks[i]);
    }
  }

  for (int i : unique) {
    cout << i;
  }

  return 0;
}