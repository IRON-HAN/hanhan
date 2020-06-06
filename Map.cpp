#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

int main()
{
    map<string, int> words;
    string tword;
    cout << "enter # to quit" << endl;
    while (cin >> tword && tword != "#")
        words[tword]++;

    auto it = words.begin();
    for (; it != words.end(); ++it)
        cout << "key: " << left << setw(10) << it->first
             << "value: " << left << setw(5) << it->second << endl;

    // 查询map中是否存在某个"key"

    // 1. map.find()
    // 找到,返回指向该pair的iterator
    // 没找到, 返回end

    int cnt = 0;
    it = words.find("very");
    if (it != words.end())
        cnt = it->second;
    cout << cnt << endl;

    // 2. map.count
    if (words.count("very"))
        cnt = words["very"];
    cout << cnt << endl;

    // set<string> exclusion;

    // while(cin>>tword)
    // {
    //     if(exclusion.count(tword))
    //     // 如果tword涵盖在"排除子集"之中
    //     continue;
    //     words[tword]++;
    // }

    return 0;
}
