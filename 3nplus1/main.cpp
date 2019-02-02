#include <iostream>
using namespace std;
int main() {
    int i, j;
    int max = 0;
    cin >> i >> j;
    cout << i << " " << j << " ";
    for(int t = i; t <= j; t++){
        int n = t;
        int tempMax = 0;
        while(true){
            tempMax++;
            if(n == 1)
                break;
            else {
                if (n%2 == 1)
                    n = 3*n + 1;
                else
                    n /= 2;
            }
        }
        if (tempMax > max)
            max = tempMax;
    }
    cout << max << endl;
    return 0;
}
