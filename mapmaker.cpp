#include<bits/stdc++.h>
using namespace std;

void get_addr(){
    
}

int main(){
    int N, R;
    cin >> N,   R;

    vector<string> arrays_names;
    for(int i = 0; i < N; i++){
        string tmp;
        cin >> tmp;
        arrays_names.push_back(tmp);
    }

    for(int i = 0; i < arrays_names.size(); i++){
        cout << arrays_names[i] << endl;
    }

    cout << arrays_names[0];
    return 0;
}