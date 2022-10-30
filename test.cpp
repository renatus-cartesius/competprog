#include<bits/stdc++.h>
using namespace std;

void set_i(int *num, unsigned int i){
    *num |= 1 << i;
}

// [123, 14, 52, 13, 4]
//  1    0   1   1   0

int main(){
    int a = 2 + 4 + 16;
    cout << a << endl;
    set_i(&a, 3);
    cout << a << endl;
    cout << (int)(16 | 8) << endl;
    return 0;
}
