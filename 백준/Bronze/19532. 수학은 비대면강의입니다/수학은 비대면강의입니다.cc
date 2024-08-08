#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, d, e, f = 0;
    cin>>a >>b >>c >>d >>e >>f;
    int res1, res2 = 0;
    for(int x=-999;x<=999;x++){
        for(int y=-999;y<=999;y++){
            res1 = a*x+b*y;
            res2 = d*x+e*y;
            if (res1==c && res2==f) cout<<x <<" " <<y;
        }
    }
    
    return 0;
}