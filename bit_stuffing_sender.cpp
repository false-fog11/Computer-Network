#include<iostream>
using namespace std;

int main() 
{
    string data,destuffed="";
    int count=0;

    cout<<"Enter stuffed data:";
    cin>>data;

    for(int i =0;i<data.length();i++) {
        destuffed+=data[i];

        if(data[i]=='1')
            count++;
        else
            count=0;

        if(count==5) {
            i++;
            count=0;
        }
    }

    cout<<"Destuffed Data:"<<destuffed<<endl;
    return 0;
}