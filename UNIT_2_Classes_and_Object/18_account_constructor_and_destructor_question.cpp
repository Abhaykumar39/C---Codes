#include<iostream>
using namespace std;
class account
{
    string accountholder;
    int acnumber;
    int amount=0;
    string address;

    public:
    account(string account_holder,int a_cnumber,int a_amount)
    {
        accountholder = account_holder;
        acnumber = a_cnumber;
        amount = a_amount; 
    }
    account(string a, int b , string c, int d)
    {
        accountholder = a;
        acnumber = b;
        address = c;
        amount= d;
    }
    void deposit(int amount)
    {
        int x;
        cout<<"enter amount to deposit";
        cin>>x;
        amount=amount+x;
        cout<<amount;
    }
    withdraw(int amount)
    {
        int y;
        cout<<"enter amount to withdraw";
        cin>>y;
        amount=amount-y;
        cout<<amount;
    }
    void checkbalance()
    {
        
        cout<<"balance amount"<<amount;
    }
};
int main()
{
    account s1( "abc",99,9000);
    account s2( "abc",99,"dehradun",9000);
    s1.deposit(9000);
    s2.deposit(9000);
    s1.withdraw(9000);
    s2.withdraw(9000);
    s1.checkbalance();
    s2.checkbalance();
}