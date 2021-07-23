#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account{
    string name;
    int id;
    double balance;
public:
    Account(const string& customer_name, int account_number, double amount) : name(customer_name), id(account_number), balance(amount){
        if (amount < 0){
            cout << "Warning";
            balance = 0.0;
        }
    }
    void deposit(double amt){
        balance += amt;
    }
    bool withdraw(double amt){
        bool result = false;
        if (balance - amt >= 0){
            balance -= amt;
            result = true;
        }
        return result;
    }
    void display(){
        cout << "Name : " << this->name << ", ID: " << this->id << ", Balance: " << this->balance << endl;
    }
};

class Counter{
    int count;
public:
    Counter() : count(0){}
    Counter(int n) : count(n){}
    void clear(){
        this->count = 0; // count = 0;
    }
    void inc(){
        this->count++;
    }
    int get(){
        return count;
    }
};

void add_account(vector<Account>& accts){
    string name;
    int number;
    double amount;
    cout << "Enter name, account, balance: ";
    std::cin >> name >> number >> amount;
    Account acct(name, number, amount);
    accts.push_back(acct);
}
void print_accounts(const vector<Account>& accts){
    int n = accts.size();
    for (auto elem : accts)
        elem.display();
}
void log(Counter *c){
    cout << c->get() << endl;
}

//int main(){
//    vector<Account> customers;
//    add_account(customers);
//    print_accounts(customers);
//    Counter ctr1, ctr2;
//    ctr1.clear();
//    ctr2.clear();
//    ctr1.inc();
//    cout << ctr1.get() << endl;
//    
//    Account acct("Joe", 3143, 90.00);
//    Account *acct_ptr;
//    
//    acct_ptr = &acct;
//    acct_ptr->display();
//    
//    string name;
//    int id;
//    double amount;
//    
//    vector<Account *> pAccts(100);
//    for (int i = 0; i < 2; i++){
//        cin >> name >> id >> amount;
//        pAccts[i] = new Account(name, id, amount);
//    }
//    for (int i = 0; i < 2; i++){
//        delete pAccts[i];
//    }
//    Counter *ctr3 = &ctr1;
//    log(ctr3);
//}
