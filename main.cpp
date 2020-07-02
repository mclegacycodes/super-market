#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int p_choice1,p_choice2, p_quantity1,p_quantity2, option;
    int p_num[3]= {0, 1, 2};
    string p_name[3]= {"CHOCOLATE", "CAKE", "PEPSI"};
    float price[3]={10, 35, 5};
    float amount1,account_balance;
    float amount2= 0;
    int wallet = 100;

    menu:
    cout << "------------ LEGACY STORE ------------" << endl;
    cout<<  "==============================================="<<endl;
    cout<<"Code \t P-NAME \t PRICE($)"<<endl;
    cout<<  "-----------------------------------------------\n"<<endl;
    cout<<"0. \t CHOCOLATE \t 10"<<endl;
    cout<<"1. \t CAKE      \t 35"<<endl;
    cout<<"2. \t PEPSI     \t 05"<<endl;

    cout<<"\n\n \t=================================="<<endl;
    cout<<"\t \t PLACE ORDER"<<endl;
    cout<<" \t==================================\n \n"<<endl;
    cout<<"Enter the code of the Product you want to buy: ";
    cin>>p_choice1;
    cout<<"Enter Quantity in number: ";
    cin>>p_quantity1;
    cout<<"\n \n"<<endl;
    cout<<"Do you want to order another product? (Please Enter Number)"<<endl;
    cout<<"1. YES"<<endl;
    cout<<"2. NO"<<endl;
    cin>>option;

    amount1 = p_quantity1 * price[p_choice1];
    account_balance = wallet -(amount1 + amount2);
    if (option == 2)
    {
       cout<<"\n \n ************************** INVOICE *****************************\n"<<endl;
       cout<<"Code \t P-NAME \t QUANTITY \t UNIT PRICE \t AMOUNT \n"<<endl;
       cout<<p_num[p_choice1]<<" \t "<<p_name[p_choice1]<<" \t \t  "<<p_quantity1<<" \t \t  "<<price[p_choice1]<<" \t \t "<<amount1<<endl;
       cout<<"\n \n Total Amount: "<<amount1<<"$"<<endl;
       cout<<" Your Account Balance is: "<<account_balance<<"$"<<endl;
    }

    else if(option== 1)
    {
        system("cls");
     cout << "------------ LEGACY STORE ------------" << endl;
    cout<<  "==============================================="<<endl;
    cout<<"Code \t P-NAME \t PRICE($)"<<endl;
    cout<<  "-----------------------------------------------\n"<<endl;
    cout<<"0. \t CHOCOLATE \t 10"<<endl;
    cout<<"1. \t CAKE      \t 35"<<endl;
    cout<<"2. \t PEPSI     \t 05"<<endl;

    cout<<"\n\n \t=================================="<<endl;
    cout<<"\t \t PLACE ORDER"<<endl;
    cout<<" \t==================================\n \n"<<endl;
    cout<<"Enter the code of the Product you want to buy: ";
    cin>>p_choice2;
    cout<<"Enter Quantity in number: ";
    cin>>p_quantity2;
    cout<<"\n \n"<<endl;
    cout<<"Do you want to order another product? (Please Enter Number)"<<endl;
    cout<<"1. YES"<<endl;
    cout<<"2. NO"<<endl;
    cin>>option;

    amount2 = p_quantity2 * price[p_choice2];
    account_balance = wallet -(amount1 + amount2);

        if (option == 2)
      {
          system("cls");
       cout<<"\n \n ************************** INVOICE *****************************\n"<<endl;
       cout<<"Code \t P-NAME \t QUANTITY \t UNIT PRICE \t COST($) \n"<<endl;
       cout<<p_num[p_choice1]<<" \t "<<p_name[p_choice1]<<" \t \t  "<<p_quantity1<<" \t \t  "<<price[p_choice1]<<" \t \t "<<amount1<<endl;
       cout<<p_num[p_choice2]<<" \t "<<p_name[p_choice2]<<" \t \t  "<<p_quantity2<<" \t \t  "<<price[p_choice2]<<" \t \t "<<amount2<<endl;
       cout<<"\n=================================="<<endl;
       cout<<"Total COST:              "<<amount1 + amount2<<"$"<<endl;
       cout<<"Your Account Balance is: "<<account_balance<<"$"<<endl;
       cout<<"=================================="<<endl;
      }
      else if(option == 1)
      {
          system("cls");
       cout<<"  \n STORE IS CLOSED"<<endl;
      }
      cout<<"\n THANKS FOR BUYING AT LEGACY STORE \n \n GOOD BYE..."<<endl;
    }

    return 0;
}
