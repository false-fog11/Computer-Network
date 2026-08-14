#include<iostream>
using namespace std;

int main()
{
    int h[12],p1,p2,p4,p8,error;

    cout<<"Enter 11 bit Hamming code:";
    for(int i=1;i<=11;i++)
        cin>>h[i];

    // Check parity
    p1 =h[1] ^ h[3] ^ h[5] ^ h[7] ^ h[9] ^ h[11];
    p2 =h[2] ^ h[3] ^ h[6] ^ h[7] ^ h[10] ^ h[11];
    p4 =h[4] ^ h[5] ^ h[6] ^ h[7];
    p8 =h[8] ^ h[9] ^ h[10] ^ h[11];

    error =p8*8+p4*4+p2*2+p1;

    if(error==0)
        cout<<"No error";

    else
    {
        cout<<"Error at position: "<<error<< endl;

        h[error]=h[error]^1;

        cout<<"Corrected Code: ";
        for(int i=1;i<= 11; i++)
            cout<<h[i];
    }

    return 0;
}