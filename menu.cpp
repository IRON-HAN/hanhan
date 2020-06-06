#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void print() {}
template <class T, class... Types>
void print(const T &firstArg, const Types &... args)
{
    cout << firstArg;
    print(args...);
}
int main()
{
    std::ios::sync_with_stdio(false);
    int numOf_tea, numOf_days;
    cin >> numOf_tea >> numOf_days;
    int *tea = new int[numOf_tea];
    int *want = new int[numOf_days];
    cin.get();
    for (int i = 0; i < numOf_tea; ++i)
    {
        cin >> tea[i];
    }
    for (int i = 0; i < numOf_days; ++i)
    {
        cin >> want[i];
    }
    sort(tea, tea + numOf_tea);

    for (int i = 0; i < numOf_days; ++i)
    {
        int tar = want[i];
        if (tar - tea[0] <= 0)
        {
            cout << tea[0] << endl;
            continue;
        }
        if (tar - tea[numOf_tea - 1] >= 0)
        {
            cout << tea[numOf_tea - 1] << endl;
            continue;
        }
        for (int j = 0; j < numOf_days; ++j)
        {
            if (tar - tea[j] >= 0 && tar - tea[j + 1] <= 0)
            {
                if (tar * 2 - tea[j] - tea[j + 1] >= 0)
                {
                    cout << tea[j + 1] << endl;
                }
                else
                {
                    cout << tea[j] << endl;
                }
            }
        }
    }

    return 0;
}

