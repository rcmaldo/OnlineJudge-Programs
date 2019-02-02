#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    char in[6];
    int t;

    cin.getline(in, 5);

    t = atoi(in);
    string output[t];
    int ioutput[t];
    for (int n = 0; n < t; n++) {
        int bulCount = -1, proCount = -1;
        string input;
        char bul[75], pro[75];
        getline(cin, input);
        for (int i = 0; i <= input.length(); i++ ) {
            if (input[i] == '-' || input[i] == '*' || input[i] == '@') {
                bulCount++;
                bul[bulCount] = input[i];
            }
            if (input[i] == '|' || input[i] == '(' || input[i] == '#') {
                break;
            }

        }

        for (int i = input.length(); i >= 0; i-- ) {
            if (input[i] == '|' || input[i] == '(' || input[i] == '#') {
                proCount++;
                pro[proCount] = input[i];
            }
            if (input[i] == '-' || input[i] == '*' || input[i] == '@') {
                break;
            }


        }

        while(true){
            if(proCount < 0){
                ioutput[n] = (bulCount + 1);
                break;
            }
            if(bulCount < 0){
                for(int i = 0; i <= proCount; i++){
                    switch(pro[i]){
                        case '|':
                            output[n] = '-' + output[n];
                            break;
                        case '(':
                            output[n] = '*' + output[n];
                            break;
                        case '#':
                            output[n] = '@' + output[n];
                            break;
                        default:
                            break;
                    }

                }
                break;
            }
            if((bul[bulCount] == '-' && pro[proCount] == '|') || (bul[bulCount] == '*' && pro[proCount] == '(') || (bul[bulCount] == '@' && pro[proCount] == '#')){
                proCount--;
            }
            bulCount--;


        }

    }

    for (int n = 0; n < t; n++){
        cout << output[n] << ioutput[n] << endl;

    }

    return 0;
}
