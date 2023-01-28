//tried to remove characteristics from string one which are duplicated in string 2;
//NO luck yet.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int remove2(string s111,string temp)
{
    int n = s111.size();
    int n1 = temp.size()
    for(int i  = 0;i<n;i++)
    {
        for(int j=i+1;j<n1;j++)
        {
            if(s111[i]==temp[j])
            {
                s111[i]='\0';
            }
        }
    }
    cout<<s111;
    return 0;
}

int remove(string s11,string s21,int n1,int n2)
{   string temp;
    for(int i=0; i<n2; i++)
    {
        for(int j=i+1; j<n2; j++)
        {
            if(s21[i] == s21[j])
            {
                ////s2[i] ='\0';  to remove duplicates from s2
                //duplicate = s2[i];

                // for(int x=0;x<n2;x++)
                // {
                //     temp[x] = s2[i];
                // }
                temp.push_back(s21[i]);
            }
        }
    }
    //cout<<temp;
    remove2(s11,temp);
}

int main()
{
string s1,s2;
cin>>s1>>s2;
int n1,n2;
n1 = s1.size();
n2 = s2.size();
cout<<endl;
remove(s1,s2,n1,n2);
return 0;
}