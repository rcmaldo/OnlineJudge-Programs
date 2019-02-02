#include <iostream>
#include <algorithm>

using namespace std;

bool hitTest(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2){
    if(x1 + w1 <= x2){
        return false;
    }
    if(x1 >= x2 + w2){
        return false;
    }
    if(y1 + h1 <= y2){
        return false;
    }
    if(y1 >= y2 + h2){
        return false;
    }
    return true;
}

int main()
{

    int n;

    cin >> n;

    int ans[n];



    for(int i = 0; i < n; i++) {

        int x1, y1, w1, h1,
            x2, y2, w2, h2;

        cin >> x1 >> y1 >> w1 >> h1 >> x2 >> y2 >> w2 >> h2;

        if(hitTest(x1, y1, w1, h1, x2, y2, w2, h2)){

            int x[4] = {x1, x1 + w1, x2, x2 + w2};
            int y[4] = {y1, y1 + h1, y2, y2 + h2};

            sort(x, x + 4);
            sort(y, y + 4);

            ans[i] = ((w1 * h1) + (w2 * h2) - ((x[3] - x[2]) * (y[3] - y[2])));
        } else {
            ans[i] = (w1 * h1) + (w2 * h2);
        }
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }


    return 0;
}
