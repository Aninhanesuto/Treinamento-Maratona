#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x1,x2,x3,x4,x5,x6,x7,x8;
    cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6 >> x7 >> x8;
    int soma = x1 + x2 + x3 + x4 + x5 + x6 + x7;

    
    if (x8 == 0 && (soma % 2 != 0))
    {
        cout << "S";
    }
    else if (x8 == 1 && (soma % 2 == 0))
    {
        cout << "S";
    }
    else if (x8 == 0 && (soma % 2 == 0))
    {
        cout << "N?";
    }
    else if (x8 == 1 && (soma % 2 != 0))
    {
        cout << "N?";
    }
    
    
    
}