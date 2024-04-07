#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >>M;
    vector<int> N2(N), M2(M);
    for (int i = 0; i < N; i++){
        
        cin >> N2[i];
    }
    for (int i = 0; i < M; i++){
        
        cin >> M2[i];
    }
    int maior = max(N, M);
    int menor = min(N, M);
    sort(N2.begin(), M2.end());
    sort(N2.begin(), M2.end(), greater<int>());
    int soma = 0;
    int sub = 0;
    int j = 0;
    for (int i = 0; i < maior; i++)
    {
        if (N2[i] < M2[i]){
            soma += -1;
            

        }
        else if (N2[i] >= M2[i]){
            soma += 0;
            if(N == M){
                sub = 0;
            }
            else{
                if(N > M){
                    sub += N2[i] - M2[j];
                    j++;
                }
                
            }
            
        }
        else{
            soma = 0;
        }
    }
    if(soma == -1){
        cout << soma;
    }
    else{
        cout << sub;
    }
    


}