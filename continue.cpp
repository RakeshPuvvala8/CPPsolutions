#include<iostream>
using namespace std;
 int main(){
     int pocketMoney=3000;
     for(int date=1; date<=30; date++){

         cout<<date<<" : ";
         
         if(date%2==0){
             cout<<"even...so don't go"<<endl;
             continue;
            
         }
         if(pocketMoney==0){
             cout<<"out of pocket money"<<endl;
             break;
         }
         cout<<"Go Out today"<<endl;
         pocketMoney=pocketMoney-300;

     }

    return 0;
 }