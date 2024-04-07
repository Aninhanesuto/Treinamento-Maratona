#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int D;
    int M;
    cin >> D >> M;
    double volta = floor(M / (D * sqrt(2)));
    double restom = M - volta * D * sqrt(2);
    double x = (D * volta) + (restom / sqrt(2));
    
    
    
    double y;
    if ((int)volta % 2 == 0) {
        y = (restom / sqrt(2));
    } else {
        y = D - (restom / sqrt(2));
    }
    
    cout << setprecision(10) << fixed;
    cout << x << " " << y << endl;
}
