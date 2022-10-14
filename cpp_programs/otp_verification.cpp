#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;

string OTPgenerator(int n){
    string str="0123456789";
    int len = str.length();
    string otp;
    int j;
    srand(time(0));
    for(int i=1;i<=n;i++){
        int j=rand()%len;
        otp[i]=str[j];
    }
    for(int i=1;i<=n;i++){
        cout<<otp[i];
    }
    cout<<endl;
    cout<<"OTP will expire in 5 sec..... \n\n"<<endl;
    sleep(5);
    cout<<"Oops otp is expired";
    int choice;
    cout<<"press 1 for new otp generation"<<endl;
    cout<<"press 2 for exit \n\n ";
    cin>>choice;
    switch (choice)
    {
    case 1: system("CLS");
    cout<<"new otp"<<OTPgenerator(n).c_str()<<endl;
    sleep(5);
        break;
    
    case 2:exit(0);
        break;
    }
}

int main(){
    int n;
    cout<<"Enter length :";
    cin>>n;
    OTPgenerator(n);
    return  0;
}

// Time Complexity  O(n)