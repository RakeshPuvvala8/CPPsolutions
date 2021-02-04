#include<iostream>
using namespace std;
int main(){
     int i=2;
     int j=3;
     int k;

     k = i + j + i++ + j++ + ++i + ++j;
     cout<<i<<" "<<j<<" "<<k<<endl; 



    return 0;
}