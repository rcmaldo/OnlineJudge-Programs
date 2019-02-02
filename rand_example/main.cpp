//SAMPLE ON MAKING RANDOM VALUES:

#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>

using namespace std;

//FOR INT VALUES:
int rand_int(int n) {


    return rand() % n; //Output value of rand():0-RAND_MAX; {result: 0~(n-1) }

}

//FOR DOUBLE VALUES:
double rand_double(int n, double d) {

    return rand() % n / pow(10.0, d); //Output value of rand():0-RAND_MAX; {result: (0~(n-1))/(10^d) }

}

int main(){

    srand(time(NULL)); //Set seed for randomization using current time.

    cout << rand_int(10) << endl;

    return 0;
}
