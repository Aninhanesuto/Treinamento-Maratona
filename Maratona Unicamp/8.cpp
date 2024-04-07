#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int casos;
    cin >> casos;
    while (casos > 0){
        int N;
        cin >> N;
        vector<int> vector(N);
        for (int i = 0; i < N; i++){
            cin >> vector[i];
            vector[i]--; 
        }
        for (int i = 0; i < N; i++) {
            int j = vector[i];
            cout << i + 1 << " ";
            while (j != i) {
                cout << j + 1 << " ";
                j = vector[j];
            }
            cout << endl;
        }
        casos--;
    }
    return 0;
}
