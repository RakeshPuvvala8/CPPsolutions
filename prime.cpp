#include<iostream>
using namespace std;
 int main(){
     int n;
     cin>>n;
      int i;
      for(i=2;i<n;i++){
          if(n%i==0){
              cout<<"Not prime"<<endl;
              break;

          }
      }
      for(i==n){
          cout<<"prime"<<endl;
      }
 }