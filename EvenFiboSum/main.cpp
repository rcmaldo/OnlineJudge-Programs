#include <iostream>

using namespace std;
//from 1 to 4mil (4,000,000), find sum of all even fibo num
int main()
{
    int fibo1 = 1;
    int fibo2 = 2;
    int temp = 0;
    int fiboCount = 2;
    while(true){
        temp = fibo2;
        fibo2 += fibo1;
        fibo1 = temp;



        if(fibo2 >= 4000000)
            break;
        else if(fibo2%2 == 0)
            fiboCount += fibo2;
    }

    cout << fiboCount << endl;
    return 0;
}
