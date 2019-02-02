#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> primeList;

bool checkPrime(int num){
    if(num <= 1){
        return false;
    }
    for(int a = 2; a <= num/2; a++){
        if(num%a == 0){
            return false;
        }
    }
    return true;
}

void findPrimes(int limit){
    for(int n = 2; n <= limit; n++){
        if(checkPrime(n)){
            primeList.push_back(n);
        }
    }
}

int main()
{
    int input;
    while(cin >> input) {
        bool possible = false;
        findPrimes(input);
        if(input <= 2){
            cout << "Impossible." << endl;
            return 0;
        }
        for(int i = 0; i < primeList.size(); i++){
            for(int j = 0; j < primeList.size(); j++){
                for(int k = 0; k < primeList.size(); k++){
                    for(int l = 0; l < primeList.size(); l++){
                        if(primeList[i] + primeList[j] + primeList[k] + primeList[l] == input){
                            cout << primeList[i] << " " << primeList[j] << " " << primeList[k] << " " << primeList[l] << endl;
                            possible = true;
                            if(possible) break;
                        }
                        if(possible) break;
                    }
                    if(possible) break;
                }
                if(possible) break;
            }
            if(possible) break;
        }
        if(!possible){
            cout << "Impossible." << endl;
        }
    }
    return 0;

}
