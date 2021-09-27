#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int a,b,c;
       cin>>a;
       cin>>b;
       cin>>c;
        
            if((a>b && b>c) || (c>b && b>a)){
                cout<<b<<endl;
            }
            if((b>a && a>c)||(c>a && a>b)){
                cout<<a<<endl;
            }
            if((a>c && c>b)||(b>c && c>b)){
                cout<<c<<endl;
            }
        
    }
    return 0;
}