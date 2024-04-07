#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int>MeuVetor(n);
    int n2 = n;
    for (int i = 0; i < n; i++){
        cin >> MeuVetor[i];
        
    }
    sort(MeuVetor.begin(), MeuVetor.end());
    int maior = 0;
    for (int i = 0; i < n; i++){
        int altura = MeuVetor[i] + MeuVetor[n2 - 1];
        if (altura > maior){
            maior = altura;
        }
        
        n2--;
    }

    cout << maior/2;
    
    
    
    
}