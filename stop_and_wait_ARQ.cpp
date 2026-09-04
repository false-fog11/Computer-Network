#include<iostream>
#include<chrono>
#include<thread>

using namespace std;

int main()
{
    int n;

    cout<<"Enter number of frames: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<"\nSender:Sending Frame "<<i;

       //timer
        cout<<"\nTimer started for Frame "<<i;

        for(int t=2; t>=1;t--)
        {
            cout<<"\nTime remaining:"<<t<<"seconds";
            this_thread::sleep_for(chrono::seconds(1));
        }

        cout<<"\nTimer expired for Frame "<< i;

        cout<<"\nReceiver: Frame "<<i<<"received";
        cout<<"\nReceiver: Sending ACK "<<i;
        cout<<"\nSender: ACK "<<i<<"received";
    }

    cout<<"\nAll frames transmitted successfully.";

    return 0;
}
