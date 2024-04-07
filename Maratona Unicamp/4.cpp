#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double M1, M2;
    double X1, X2;
    double F;
    cin >> M1 >> M2;
    cin >> X1 >> X2;
    cin >> F;
    double D = pow((X1 - X2) , 2);
    double G = ((F * D) / (M1 * M2));

    cout << setprecision(6) << fixed << G << endl;
}
