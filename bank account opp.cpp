#include <iostream>
#include <string>
using namespace std;
class bank
{
    private:
            string name;
            string acctype;
            int accnumber;
            double balance;

    public:
            void display(void);
            void deposit(void);
            void withdraw(void);
            bank(string N,string AT,int AN,double B);
            char choice;
            char choice1;

};
bank::bank(string N,string AT,int AN,double B)
{
    balance=B;
    name=N;
    acctype=AT;
    accnumber=AN;
    choice1='E';
    choice='E';
};

void bank::display()
{
    cout<<"\nName is:"<<name;
    cout<<"\nAccount Type:"<<acctype;
    cout<<"\nAccount Number:"<<accnumber;
    cout<<"\nAccount Balance:"<<balance;
};

void bank::deposit(){
    int deposit;
    cout<<"\nEnter Amount to deposit:";
    cin>>deposit;
    balance+=deposit;
};

void bank::withdraw(){
    int withdraw;
    cout<<"\nEnter amount to withdraw:";
    cin>>withdraw;
    balance-=withdraw;
};

int main()
{    string N;
    string AT;
    int AN;
    double B;
    cout<<"Enter Account Name:";
    cin>>N;
    cout<<"Enter Account Type:";
    cin>>AT;
    cout<<"Enter Account Number:";
    cin>>AN;
    cout<<"Enter Account Balance:";
    cin>>B;
    bank obj1(N,AT,AN,B);
    obj1.display();
    do{
            cout<<"\nDo you want to withdraw or deposit(W/D):";
            cin>>obj1.choice;
            switch(obj1.choice)
            {
                case 'W':
                                obj1.withdraw();
                                obj1.display();
                                break;
                case 'D':
                                obj1.deposit();
                                obj1.display();
                                break;
                default:
                            cout<<"\nEntered choice is incorrect";
                            break;
            };
            cout<<"\nDo you wish to continue?(Y/N):";
            cin>>obj1.choice1;
    }while(obj1.choice1=='Y'||obj1.choice1=='y');
    return 0;
};
