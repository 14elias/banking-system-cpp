#include <iostream>
using namespace std;

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
   int option = 0;
    do{
    cout<<"******************************\n";
    cout <<"1. show balance\n";
    cout<<"2. deposit\n";
    cout<<"3. withdraw\n";
    cout<<"4. exit\n ";
    cout<<"enter option :\n";;
    cin>>option;
    cout<<"********************************************\n";
   switch(option){
    case 1: showbalance(balance);break;
    case 2: balance+=deposit(); showbalance(balance);break;
    case 3:  balance-=withdraw(balance); showbalance(balance);
     break;
    case 4: cout<<"thank you for your visiting\n "; break;
    default : cout<<"invalid number";

   }
}while(option !=4);
return 0;
}
void showbalance( double balance){
cout<<"your balance is $"<<balance<<endl;

}
double deposit(){
    double depositamount;
    cout<<"enter deposit amount :";
    cin>>depositamount;
    if(depositamount<0){
        cout<<"invalid amount\n";
        return 0;
    }
    else{
        return depositamount;
    }
     
}
double withdraw(double balance){;
    double withdrawamount;
    cout<<"enter withdraw amount:";
    cin>>withdrawamount;
    if(withdrawamount<0){
        cout<<"invalid amount\n";
        return 0;
    }
    else if(withdrawamount>balance){
        cout<<"insufficient amount\n";
        return 0;
    }
    else{
        return withdrawamount;
    }
}
