#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Bank {
    int acc_no;
    char name[30];
    int pin;
    float balance;

public:

    void createAccount(){
        cout<<"\nEnter Account Number: ";
        cin>>acc_no;
        cin.ignore();

        cout<<"Enter Name: ";
        cin.getline(name,30);

        cout<<"Set PIN (4 digits): ";
        cin>>pin;

        cout<<"Enter Initial Balance: ";
        cin>>balance;

        ofstream file("bank.dat", ios::app | ios::binary);
        file.write((char*)this, sizeof(*this));
        file.close();

        cout<<"Account Created Successfully!\n";
    }

    bool login(int acc, int p){
        return (acc_no == acc && pin == p);
    }

    void display(){
        cout<<"\nAccount No: "<<acc_no;
        cout<<"\nName: "<<name;
        cout<<"\nBalance: "<<balance<<endl;
    }

    void deposit(){
        float amt;
        cout<<"Enter amount: ";
        cin>>amt;
        balance += amt;
    }

    void withdraw(){
        float amt;
        cout<<"Enter amount: ";
        cin>>amt;

        if(amt > balance){
            cout<<"Insufficient Balance!\n";
        } else {
            balance -= amt;
            cout<<"Withdraw Successful!\n";
        }
    }

    int getAccNo(){
        return acc_no;
    }
};

int main(){

    int choice;

    do{
        cout<<"\n\n===== BANK SYSTEM =====\n";
        cout<<"1. Create Account\n";
        cout<<"2. Login\n";
        cout<<"3. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){

        case 1:{
            Bank b;
            b.createAccount();
            break;
        }

        case 2:{
            int acc, p;
            cout<<"Enter Account Number: ";
            cin>>acc;
            cout<<"Enter PIN: ";
            cin>>p;

            Bank b;
            bool found = false;

            fstream file("bank.dat", ios::in | ios::out | ios::binary);

            while(file.read((char*)&b, sizeof(b))){
                if(b.login(acc,p)){
                    cout<<"\nLogin Successful!\n";
                    found = true;

                    int ch;
                    do{
                        cout<<"\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
                        cin>>ch;

                        switch(ch){
                        case 1:
                            b.deposit();
                            file.seekp(-sizeof(b), ios::cur);
                            file.write((char*)&b, sizeof(b));
                            break;

                        case 2:
                            b.withdraw();
                            file.seekp(-sizeof(b), ios::cur);
                            file.write((char*)&b, sizeof(b));
                            break;

                        case 3:
                            b.display();
                            break;
                        }

                    }while(ch != 4);

                    break;
                }
            }

            if(!found){
                cout<<"Invalid Account or PIN!\n";
            }

            file.close();
            break;
        }

        case 3:
            cout<<"Thank you!\n";
            break;

        default:
            cout<<"Invalid choice!\n";
        }

    }while(choice != 3);

    return 0;
}