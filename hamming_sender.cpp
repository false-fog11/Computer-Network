#include <iostream>
using namespace std;

int main()
{
    int d[7],h[12];

    cout<<"Enter 7 data bits:";
    for(int i=0; i<7;i++)
        cin>>d[i];

    // Data bits
    h[3]  = d[0];
    h[5]  = d[1];
    h[6]  = d[2];
    h[7]  = d[3];
    h[9]  = d[4];
    h[10] = d[5];
    h[11] = d[6];

    // Even parity bits
    h[1] = h[3] ^ h[5] ^ h[7] ^ h[9] ^ h[11];
    h[2] = h[3] ^ h[6] ^ h[7] ^ h[10] ^ h[11];
    h[4] = h[5] ^ h[6] ^ h[7];
    h[8] = h[9] ^ h[10] ^ h[11];

    cout<<"hamming code :";

    for(int i=1;i<=11;i++)
        cout<<h[i];

    return 0;
}