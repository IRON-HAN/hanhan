// 2020-1-26

#include <iostream>
#include <cstdlib>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

int is_revise(int n){
    int revise = 0;
    int origin = n;

    while (n) {
        revise *= 10;
        revise += n % 10;
        n /= 10;
    }
    if((revise)==origin)
    return 1;
    else
    return 0;
}
int main(){
    for (int i = 11; i < 1000; i++) {
        if(is_revise(i) && is_revise(i*i) && is_revise(i*i*i))
            cout << i << " is the number!" << endl;
    }
    return 0;

}
