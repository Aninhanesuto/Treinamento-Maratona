#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    vector<int> ash, james;

    for(int i=0; i<n; i++){
        int aux;
        cin >> aux;
        ash.push_back(aux);
    }

    for(int j=0; j<m; j++){
        int aux;
        cin >> aux;
        james.push_back(aux);
    }
    
    sort(ash.begin(), ash.end());
    sort(james.rbegin(), james.rend());

    int res = 0;

    auto it_ash = ash.begin();
    auto it_james = james.begin();

    while (!james.empty())
    {

        if(*it_ash > *it_james){
            ash.erase(it_ash);
            james.erase(it_james);
            it_ash = ash.begin();
            it_james = james.begin();
        }
        else{
            ++it_ash;
            if(it_ash == ash.end()){
                res = -1;
                cout << res << endl;
                return 0;
            }
        }

    }

    res = accumulate(ash.begin(), ash.end(), 0);

    cout << res << endl;

    return 0;
}