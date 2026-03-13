#include <iostream>

using namespace std;

int main() {

int num=-2;
    while (num!=0) {
        cout<<"Enter a number to list it from 1 to your number and tell you which is even or odd: \n";
        cin>>num;
        if (num==0) break;
        for (int i = 1; i<=num; i++) {
                cout<<i<<"\t";
            if (i%2==0) {
                cout<<"Even";
            }
            else {
                cout<<"Odd";
            }
        cout<<endl;
        }
    }

 return 0;

}
