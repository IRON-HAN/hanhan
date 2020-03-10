#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// 储蓄账户类定义
class Saving_account{
    private:
        int id;
        double balance; //余额
        double rate; // 存款年利率
        int last_date; //上次变更余额的时间
        double accumulation; // 余额按日累计之和
        // 记录一笔账, date:日期, amount: 金额, desc:说明
        void record(int date, double amount);
        // 获得到指定日期为止的存款金额按日累计值
        double accumulate(int date) const{
            return accumulation+balance*(date-last_date);
        }
    public:
        Saving_account(int date, int id, double rate); // 构造函数
        int getID(){return id;}
        double getBalance(){return balance;}
        double getRate(){return rate;}
        void deposit(int date, double amount); // 存入现金
        void withdraw(int date, double amount); // 取出现金
        void settle(int date); // 结算利息,每年1月1日调用一次
        void show(); // 显示账户信息
};

// 成员函数的实现
Saving_account::Saving_account(int date, int id, double rate)
:id(id),balance(0),rate(rate),last_date(date),accumulation(0){
    cout << date << "\t#" << id << " is created" << endl;
}

void Saving_account::record(int date, double amount){
    accumulation = accumulate(date);
    last_date = date;
    amount = floor(amount * 100 + 0.5) / 100; // 保留2位小数
    balance += amount;
    cout << date << "\t#" << id << "\t" << amount << "\t" << balance << endl;

}
void Saving_account::deposit(int date, double amount){
    record(date, amount);
}
void Saving_account::withdraw(int date, double amount){
    if (amount > getBalance()) {
        cout << "Error: not enough money" << endl;
    }
    else {
        record(date, -amount);
    }
}
void Saving_account::show(){
    cout << "#" << id << "\tbalance: " << balance;
}

int main(){
    // 创建账户
    Saving_account sa0(1, 21325302, 0.015);
    Saving_account sa1(1, 58320212, 0.015);

    sa0.deposit(5, 5000);
    sa0.deposit(45, 5500);
    sa1.deposit(25, 10000);
    sa1.withdraw(60, 4000);
    // 计算开户90天的利息
    sa0.settle(90);
    sa1.settle(90);
    // 输出
    sa0.show();
    cout << endl;
    sa1.show();
    cout << endl;
    system("pause");
    return 0;
}
