#include <iostream>
using namespace std;
class TicketMachine{
    public:
    TicketMachine();
    virtual ~TicketMachine();
    void ShowPrompt();
    void insertmoney(int money);
    void showbalance();
    void printticket();
    void showdata();
    private:
        const int PRICE;
        int balance;
        int total;
};

