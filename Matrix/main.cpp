#include <iostream>
#include <stdlib.h>



int main()
{
    int i = 0;
    int q = 0;
    char c;
    while(true) {
        if(i < 3000) {
            c = rand() % (63-33) + 33;
            std::cout << c;
            i++;
        } else {
            q++;
            i = 0;
            std::cout << std::endl;
        }
    }

    return 0;
}
