#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int input;
    long maxSum, tempSum;
    while(cin >> input){
        const int k = input;
        int a[k][k];
        for(int x = 0; x < input; x++){
            for(int y = 0; y < input; y++){
                cin >> a[x][y];
            }
        }

        maxSum = a[0][0];

        for(int x = 0; x < input; x++){
            for(int y = 0; y < input; y++){
                for(int w = x; w < input; w++){
                    for(int h = y; h < input; h++){
                        tempSum = 0;
                        for(int i = x; i <= w; i++){
                            for(int j = y; j <= h; j++){
                                tempSum += a[i][j];
                            }
                        }
                        if(tempSum > maxSum){
                            maxSum = tempSum;
                        }
                    }
                }
            }
        }

        cout << maxSum << endl;
        memset(a, 0, sizeof(a));

    }

    return 0;

}
