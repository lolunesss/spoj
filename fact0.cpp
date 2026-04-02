#include <bits/stdc++.h>
using namespace std;

// int main() {
//   long long n;
//   while (n != 0) {
//     cin >> n;
//     if (n == 0) break;
//     map<long long, long long> m;
//     while (n % 2 == 0) {
//       n /= 2;
//       m[2]++;
//     }
//     for (int i = 3; i * i <= n; i += 2) {
//       while (n % i == 0) {
//         n /= i;
//         m[i]++;
//       }
//     }
//     if (n > 2) {
//       m[n]++;
//     }
//     for (auto it : m) {
//       cout << it.first << "^" << it.second << " ";
//     }
//     cout << endl;
//   }
// }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  long long int a;
  while (cin >> a && a != 0) {
    int inc = 0;
    for (long long int i = 2; i * i <= a; i += inc) {
      long long int c = 0;
      while (a % i == 0) {
        a /= i;
        c++;
      }
      if (c) {
        printf("%ld^%ld ", i, c);
      }
      inc = inc == 0 ? 1 : 2;
      if (a == 1) break;
    }
    if (a > 1) {
      printf("%ld^%ld\n", a, 1LL);
    } else {
      printf("\n");
    }
  }

  return 0;
}