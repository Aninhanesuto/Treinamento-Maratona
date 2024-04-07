#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n > 0){
        string nome;
        cin >> nome;
        if (nome.size() > 10)
        {
            char n2 = nome[0];
            char n3 = nome[nome.size() - 1];
            int valor = nome.size() - 2;
            cout <<n2<<valor<<n3<<endl;
        }
        else{
            cout << nome <<endl;
        }
        
        n--;
    }
    
}