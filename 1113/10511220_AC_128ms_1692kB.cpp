#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=1;
    cin>>t;
    while(t--)
    {
        string s;
        stack<string>s1;
        stack<string>s2;
        s1.push("http://www.lightoj.com/");
        cout<<"Case "<<c++<<":"<<endl;
        while(cin>>s)
        {
            if(s=="QUIT")
            {
                break;
            }
            else if(s=="VISIT")
            {
                cin>>s;
                s1.push(s);
                cout<<s<<endl;
                while(!s2.empty())
                {
                    s2.pop();
                }
            }
            else if(s=="BACK")
            {
                s2.push(s1.top());
                s1.pop();
                if(!s1.empty())
                {
                    cout<<s1.top()<<endl;
                }
                else
                {
                    cout<<"Ignored"<<endl;
                    s1.push(s2.top());
                    s2.pop();
                }
            }
            else if(s=="FORWARD")
            {
                if(s2.empty())
                {
                    cout<<"Ignored"<<endl;
                }
                else
                {
                    s1.push(s2.top());
                    cout<<s2.top()<<endl;
                    s2.pop();
                }
            }
        }
    }
    return 0;
}
