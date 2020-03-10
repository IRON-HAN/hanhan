// 2020/1/11
// map例题：单词词频统计程序
// 输入大量单词，每个单词，一行，不超过20字符，没有空格。
// 按出现次数从多到少输出这些单词及其出现次数。
// 出现次数相同的，字典序靠前的在前面

#include <cstdlib>
#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;

typedef struct{
    int times;
    string wd;
} word;

struct rule{
    bool operator()(const word & w1,const word &w2)const{
        if(w1.times!=w2.times)
            return w1.times>w2.times;
        else
            return w1.wd<w2.wd;
    }
};

int main(){

    string s;
    set<word, rule> st;
    map<string, int> mp;
    cout << "please input:(enter '#' to quit)" << endl;

    while(cin>>s && s!="#")
        mp[s]++;

    for (map<string,int>::iterator i=mp.begin();
    i!=mp.end(); i++) {
        word tmp;
        tmp.wd = i->first;
        tmp.times = i->second;
        st.insert(tmp);
    }
    int cnt = 0;

    for (set<word, rule>::iterator i = st.begin();
    i != st.end();i++){
        cout << i->wd << " " << i->times << "\t\t";
        cnt++;
        if (cnt%4==0) {
            cout << endl;
        }
    }
    system("pause");
    return 0;
}
