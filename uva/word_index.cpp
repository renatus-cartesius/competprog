#include<bits/stdc++.h>
using namespace std;

map<string, int> mapped;
char aux[5];

void proc(int level, char start, int limit){
    for(int i = start + 1; i <= 'z' ; i++){
        aux[level] = i;
        if(level  == limit) mapped.insert(make_pair(string(aux), mapped.size()+1));
        else proc(level + 1, i, limit);

    }
}

int main(){
    for (int i = 0; i <= 4; i++){
        aux[i] = 0;
        proc(0, 'a'-1, i);
    }

    string w;

    // while(cin >> w){
    //     if(mapped.count(w)) printf("%d\n", mapped[w]);
    //     else printf("0\n");
    // }

    for(int i = 0; i < mapped.size() - 1; i++){
        cout << mapped["a"] << endl;
    }
    return 0;
}