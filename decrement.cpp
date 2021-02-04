#include<iostream>
using namespace std;
int main(){
     int i=2;
     int j=3;
     int k;
        //2 + 3 + 2  +  3  +  0  +   1 = 11
     k = i + j + i-- + j-- + --i + --j;
     cout<<i<<" "<<j<<" "<<k<<endl; 





    return 0;
}