#include <iostream>
using namespace std;


class BankAccount{
private:
    int accountNumber;
    string accHolderName;
    double balence;

public:
    void setAccountNumber(int accNum){

        accountNumber = accNum;
    }

    void setAccHoldrName(string name){
        accHolderName = name;
    }

    void setBalence(double bal){
        balence = bal;
    }


    int Accountnumder(){
        return accountNumber;
    }

    string AccHolderName(){
        return accHolderName;
    }

    double Balence(){
        return balence;
    }

        

// deposit method


    void deposit(double amount){
        if (amount > 0)
            balence = balence + amount;

            else 
                cout << "invalid amount"<<endl;


    }





    // withdrow mwthod
    void withdraw(double amount){
        if (amount >= balence){
            balence -= amount;
            cout <<"withdrawal successful"<<endl;
        }
        else{
            cout<<"Insufficiant Balence "<<endl;

        }
    }


    void displayAccdetails(){
        cout<<"Account Number:"<< accountNumber<<endl;
        cout <<"Account Holder name:"<< accHolderName<< endl;
        cout <<"Balence:"<<balence<<endl;

    }

 
};



int main(){
    int choice;
    double amount;
    BankAccount B;
    B.setAccountNumber(101);
    B.setAccHoldrName("om");
    B.setBalence(0);



    do {
        cout<< "1. deposit"<<endl;
        cout<< "2. withdrowal"<<endl;
        cout<< "3. display"<<endl;
        cout<< "4. exit"<<endl;
        cout<< "Enter your choice"<<endl;
        cin >> choice;

        switch(choice){
            case 1:
            cout<<"Enter Amount to Deposit"<<endl;
            cin>>amount;
            B.deposit(amount);
            break;



            case 2:
            cout<<"Enter Amount to withdraw"<<endl;
            cin>>amount;
            B.withdraw(amount);
            break;

            case 3:
            B.displayAccdetails();
            break;

            case 4:
            cout<<"exiting the program"<<endl;


            default :
            cout <<"invalid choice ! PLease choice again"<<endl;

        }


        }while (choice != 4);

    


     return 0;
}