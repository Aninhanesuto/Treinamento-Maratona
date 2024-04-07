#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> alturas(N);
    for (int i = 0; i < N; ++i) {
        cin >> alturas[i];
    }


    sort(alturas.begin(), alturas.end());

    int maior_planta_filha = 0;
    for (int i = 0; i < N / 2; ++i) {
        int soma_alturas = alturas[i] + alturas[N - 1 - i];
        int altura_filha = soma_alturas / 2;
        maior_planta_filha = max(maior_planta_filha, altura_filha);
    }

    cout << maior_planta_filha;

    return 0;
}
