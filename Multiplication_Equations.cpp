#include <iostream>

using namespace std;

int main()
{
    int num = -1;
    while (num!=0) {
        cout<<"Enter a number to for multiplication table from 1 to your number (or 0 to exit): ";
        cin>>num;
        if (num == 0) {
            break;
        }
        for (int i = 1; i<=num; i++) {
            for (int j = 1; j<=12; j++) {
                cout<<i<<" x "<<j<<" = "<<i * j <<"\n";
            }
             cout<<"\n";
        }
        cout<<endl;
    }

 return 0;
}