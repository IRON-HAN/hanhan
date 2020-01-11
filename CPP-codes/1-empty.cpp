#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;
int main(){
    int a[] = {3, 5, 6, 7};
    sort(a, a + 4,greater<int>());
    for (int i = 0; i < 4; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
