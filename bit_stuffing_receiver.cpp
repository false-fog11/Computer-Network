#include <iostream>
using namespace std;

int main()
{
    string received,data = "";
    int count=0;

    cout<<"Enter received bit string: ";
    cin>> received;

    for (int i=0;i<received.length(); i++)
    {
        data+=received[i];

        if (received[i]=='1')
            count++;
        else
            count=0;
        if (count==5 && i + 1 <received.length() && received[i+1]=='0')
        {
            i++;
            count=0;
        }
    }

    cout<<"After de-stuffing:"<<data<< endl;

    return 0;
}