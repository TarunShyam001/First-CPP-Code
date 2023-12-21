#include<bits/stdc++.h>
#include<iomanip>
#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;
int main()
{
    cout<<"\n Hi, My Name is Tarun Shyam";
    cout<<"\n This is my First C++ Program";
    cout<<"\n";
    cout<<"\n It's to make a clock";

    int h,m,s;
    cout<<setw(70)<<"\n *Enter Current Time :*";
    cout<<"\n *Hours :*";
    cin>>h;
    cout<<"\n *Minutes :*";
    cin>>m;
    cout<<"\n *Seconds :*";
    cin>>s;
    if(h<0 || h>23)
    cout<<"\n Wrong Input";
    else if(m<0 || m>60)
    cout<<"\n Wrong Input";
    else if(s<0 || s>60)
    cout<<"\n Wrong Input";
    else
    {
        while(1)
        {
            system("cls");
            for(h;h<24;h++)
            {
                for(m;m<60;m++)
                {
                    for(s;s<60;s++)
                    {
                        system("cls");
                        cout<<"\n \t \t Current Time : "<<h<<":"<<m<<":"<<s<<" Hrs ";
                        Sleep(1000);
                    }
                    s=0;
                }
                m=0;
            }
            h=0;
        }
    }
    return 0;
}
