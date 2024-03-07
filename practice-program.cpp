#include<iostream>
#include<iomanip>
using namespace std;
void showbalance(double balance);
double deposit ();
double withdraw(double balance);

int main(){

double balance =0;
int choice = 0;
do {
cout << "***************** \n";
cout << "enter your choice \n";
cout << "***************** \n";
cout << "1. show balance \n";
cout << "2. deposit money \n";
cout << "3. withdraw money \n";
cout << "4. exist \n";

cin >> choice ;

switch (choice){
    case 1:showbalance(balance);
       break;
    case 2: balance += deposit();
            showbalance(balance);
       break;
    case 3: balance -= withdraw(balance);
            showbalance(balance);
       break;
    case 4: cout << "thanks for visiting! \n" ;
       break;
    default: cout << "enter correct choice \n";

}
} while(choice!=4);
}

void showbalance(double balance){
cout << " here is your balance : $" << setprecision(2)<< fixed << balance << "\n";
}
double deposit (){
    double amount = 0;
    cout << "enter your amount to be deposited:";
    cin >> amount;

if ( amount> 0){
    return amount;
}
else {
    cout << " this is not a valid amount";
    return 0;
}

}
double withdraw(double balance){
    double amount = 0;
    cout << " enter the amount to be withdrawed:";
    cin >> amount ;
    if (amount>balance){
        cout << "less balance";
        return 0;
    }
    else {
    
    return 0;
}
}