// date:2020-1-27
// main: strcpy strcat strlen 拼接

#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1 = "penguin";
    string s2, s3;

    // strcpy
    s2 = s1;
    cout << "s2: " << s2 << endl;

    // 拼接
    s2 = "buzzard";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;

    // strcat
    s1 += s2;
    cout << "s1: " << s1 << endl;

    s2 += "for a day";
    cout << "s2: " << s2 << endl;

    // strlen
    int len = s1.size();
    cout << "len: " << len << endl;

    return 0;
}
// output:
// s2: penguin
// s3: penguinbuzzard
// s1: penguinbuzzard
// s2: buzzardfor a day
// len: 14
