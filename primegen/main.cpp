#include <iostream>
using namespace std;

int main()
{
     int t, m[10], n[10];
     bool p;
     cout << "INPUT:\n";
     cin >> t;
     if(t > 10) {
          cout << "(t <= 10) ONLY\n";
          return 1;
     }
     for (int i = 0; i < t; i++) {
          cin >> m[i] >> n[i];
          if (m[i] < 1 || m[i] > n[i] || n[i] > 1000000000 || n[i] - m[i] > 100000) {
               cout << "INVALID NUMBER SET\n";
               return 1;
          }
     }
     cout << "OUTPUT:\n";
     for (int i = 0; i < t; i++) {
          for (int j = m[i]; j <= n[i]; j++) {
               p = true;
               if (j > 3) {
                    for (int k = 2; k <= j/2; k++) {
                         if(j % k == 0) {
                              p = false;
                              break;
                         }
                    }
               }
               if (p && j != 1)
                    cout << j << endl;
          }
          cout << endl;
     }
     return 0;
}
