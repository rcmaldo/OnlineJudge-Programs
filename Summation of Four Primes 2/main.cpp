#include <iostream>

using namespace std;

bool checkPrime(int n){
    if (n == 2) return true;
    if (n == 3) return true;
    if (n % 2 == 0) return false;
    if (n % 3 == 0) return false;

    int i = 5;
    int w = 2;

    while (i * i <= n){
        if (n % i == 0){
            return false;
        }
        i += w;
        w = 6 - w;
    }
    return true;
}


int main()
{
    int input;
    while(cin >> input) {
        bool even = false;
        bool possible = false;

        if(input < 8) {
            cout << "Impossible." << endl;
        } else {
            if(input%2 == 0) {
                even = true;
                input -= 4;
            } else {
                even = false;
                input -= 5;
            }
            for(int i = 2; i < input; i++) {
                if(checkPrime(i) && checkPrime(input-i)) {
                    if(even) {
                        cout << "2 2 " << i << " " << input-i << endl;
                        break;
                    } else {
                        cout << "2 3 " << i << " " << input-i << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
