//
//  main.cpp
//  cracking1.2
//
//  Created by Daren Sathy on 8/30/22.
//

#include <iostream>
#include <iomanip>
using namespace std;
# define num_of_chars 256

bool isPermutation(string stra, string strb) {
    int count1[num_of_chars] = {0};
    int count2[num_of_chars] = {0};
    int i;
    
    for (i=0; stra[i] && strb[i]; i++) {
        count1[stra[i]]++;
        count2[strb[i]]++;
    }
    if (stra[i] || strb[i]) {
        return false;
    }
    for(i = 0; i < num_of_chars; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    
    string stra = "mugiwaranoluffy";
    string strb = "luffymugiwarano";
    if ( isPermutation(stra, strb)) {
        cout << "This is a permutation" << endl;
    }
    else {
        cout << "This is not a permutation" << endl;
    }
    return 0;
}
