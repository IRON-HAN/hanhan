#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    set<string> exclusion;

    string tword;

    while (cin >> tword)
    {
        if (exclusion.count(tword))
            // 如果tword涵盖在"排除子集"内
            continue;
    }
}
