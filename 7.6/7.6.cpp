#include <iostream>
#include <string>
using namespace std;

class Account {
   public:
    using month = unsigned int;

    Account(string na, string acID, double am = 0.0)
        : name(na), accountID(acID), amount(am){};

    void printName() const;
    void printAccountID() const;
    void printAmount() const;
    void printInterestRate() const;

    string getName() const;
    string getAccountID() const;
    double getAmount() const;
    double getInterestRate() const;

    void saveMoney(double);
    void withdrawMoney(double);

    static void updateInterestRate(double);

    void saveForSomeMonths(month);

   private:
    string name;
    string accountID;
    double amount;
    static double interestRate;
};

// 设定每月初始利率
double Account::interestRate = 0.015;

void Account::printName() const {
    cout << "Name:" << name << endl;
}
void Account::printAccountID() const {
    cout << "Account ID:" << accountID << endl;
}
void Account::printAmount() const {
    cout << "Amount:" << amount << endl;
}
void Account::printInterestRate() const {
    cout << "Interest Rate:" << interestRate << endl;
}

string Account::getName() const {
    return name;
}
string Account::getAccountID() const {
    return accountID;
}
double Account::getAmount() const {
    return amount;
}
double Account::getInterestRate() const {
    return interestRate;
}

void Account::saveMoney(double money) {
    amount += money;
}
void Account::withdrawMoney(double money) {
    amount -= money;
}

void Account::updateInterestRate(double newRate) {
    interestRate = newRate;
}

void Account::saveForSomeMonths(month months) {
    amount += amount * interestRate * months;
}

int main() {
    Account myAccount("李坤泽","2021090918015",2000.0);
    myAccount.printName();
    myAccount.printAccountID();
    myAccount.printAmount();
    myAccount.printInterestRate();
    myAccount.saveMoney(500.0);
    myAccount.printAmount();
    myAccount.saveForSomeMonths(3);
    myAccount.printAmount();
    myAccount.withdrawMoney(500.0);
    myAccount.printAmount();
    myAccount.updateInterestRate(0.02);
    myAccount.printInterestRate();
    myAccount.saveForSomeMonths(3);
    myAccount.printAmount();
    return 0;
}