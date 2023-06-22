#include <bits/stdc++.h>
using namespace std;

void luhn(string a) { 
    int b[a.length()];
    if (a.length()==15 || a.length()==16) {
        for (int i=0;i<a.length();i++) {
            b[i]=a[i]-48;
        }
        int odd=0;
        int even=0;
        for (int i=a.length()-1;i>=0;i--) {
            if (i%2!=0) {
                odd=odd+b[i];
            } else {
                int x=2*b[i];
                if (x>9) {
                    even = even + (x/10) + (x%10);
                } else {
                    even = even + x;
                }
            }
        }
        
        int y=odd+even;
        if (y%10==0) {
            cout<<"This card is valid"<<endl;
            cout<<"Thank you"<<endl;
        } else {
            cout<<"The card is invalid"<<endl;
            cout<<"Thank You"<<endl;
        }
    } else {
        cout<<"Try Again"<<endl;
        return ;
    }
    
}

int main () {
    cout<<"hello"<<endl;
    while (1) {
        
        int n;
        cout<<"Enter 1 to validate your credit card number"<<endl;
        cout<<"Enter 2 to exit"<<endl;
        cin>>n;

        string a;

        switch (n) {
            case 1:
                cin>>a;
                luhn(a);
                break;
            
            case 2:
                cout<<"Thank You for Visiting"<<endl;
                break;
        }
        if (n==2) {
            break;
        }
    }
    
    return 0;
}