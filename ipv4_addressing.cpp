
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ip;
    int a, b, c, d;

    cout << "Enter IP address: ";
    cin >> ip;

    // Find dots
    int dot1=ip.find('.');
    int dot2=ip.find('.', dot1+1);
    int dot3=ip.find('.', dot2+1);

    // Convert parts into integers
    a = stoi(ip.substr(0, dot1));
    b = stoi(ip.substr(dot1+1, dot2-dot1- 1));
    c = stoi(ip.substr(dot2+1,dot3-dot2-1));
    d = stoi(ip.substr(dot3+1));

    // Check valid range
    if(a<0 || a>255 ||
       b<0 || b>255 ||
       c<0 || c>255 ||
       d<0 || d> 255)
    {
        cout << "Invalid IP";
        return 0;
    }

    cout << "Valid IP";

    if(a >= 1 && a <= 126)
    {
        cout << "\nClass: A";
        cout << "\nNetwork ID: "<<a<<".0.0.0";
        cout << "\nHost ID: "<<b<<"."<<c<<"."<<d;
        cout << "\nDefault Mask: 255.0.0.0";
    }
    else if(a >= 128 && a <= 191)
    {
        cout << "\nClass: B";
        cout << "\nNetwork ID: "<<a<<"."<<b<<".0.0";
        cout << "\nHost ID: " <<c<<"."<<d;
        cout << "\nDefault Mask: 255.255.0.0";
    }
    else if(a >= 192 && a <= 223)
    {
        cout << "\nClass: C";
        cout << "\nNetwork ID: "<<a<<"."<<b<<"."<<c<<".0";
        cout << "\nHost ID: " <<d;
        cout << "\nDefault Mask: 255.255.255.0";
    }
    else if(a>=224 && a<=239)
    {
        cout << "\nClass: D ";
    }
    else if(a>=240 && a<=255)
    {
        cout << "\nClass: E ";
    }
    else
    {
        cout << "\nInvalid IP";
    }

    return 0;
}