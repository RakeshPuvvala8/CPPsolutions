#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Input :";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"salute"<<endl;
        break;
    case 'd':
        cout<<"Hola"<<endl;
        break;
    case 'e':
        cout<<"ciao"<<endl;
        break;
    
    default:
        cout<<"Sorry...try again!!";2
        break;
    }




    return 0;
}