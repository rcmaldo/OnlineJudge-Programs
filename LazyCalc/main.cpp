#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace std;

bool carryTest(int n1, int n2){
    if(n1 + n2 >= 10){
        return true;
    }
    return false;
}

int main()
{
    int n;

    cin >> n;

    bool check[n];

    int ans[n];

    for(int i = 0; i < n; i++){
        int count;
        string x, y;

        check[i] = false;

        cin >> x >> y;

        int const xlen = x.length(), ylen = y.length();

        count = xlen > ylen ? ylen : xlen;

        for(int j = 1; j <= count; j++){
            if(carryTest((int)x[xlen - j], (int)y[ylen - j])){
                ans[i] = atoi(x.c_str()) + atoi(y.c_str());
                check[i] = true;
                break;
            }
        }



    }

    for(int i = 0; i < n; i++){
        if(check[i]){
            cout << ans[i] << endl;
        } else {
            cout << "Won't solve" << endl;
        }
    }

    return 0;
}
