#include <iostream>
#include <algorithm>

using namespace std;


int main() {

    int n = 0,x = 0;
    scanf("%d%d",&n, &x);
    bool nums[201];

    for (int i = 1; i <= n+x; ++i) {
        nums[i] = false;
    }

    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d",&a);
        nums[a] = true;
    }


    for (int i = n+x; i > 0 ; i--) {

        int v = 0;

        for (int k = 1; k <= i; k++) {
            if(!nums[k]) {
                v++;
            }
        }


        if(v <= x){
            printf("%d", i);
            return 0;
        }



    }


    return 0;
}
