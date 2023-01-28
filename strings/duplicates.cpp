#include<iostream>
#include <string>

using namespace std;


int duplicates(string s,int n){
   // string x;
    for(int i  = 0; i<n; i++)
    {
        for(int j =i+1 ;j<n;j++)
        {
            if(s[i] == s[j])
            {
                // s.erase(s.begin()+i);
              //  cout<<s[i];
               // s.erase(s[i]);
                //x = s.replace(s[i], "", 1)
                //s.erase(0, i);
                s[i] = '\0';                //if you keep this program will remove only one repeat character
                s[j] = '\0';                //here it will remove duplicates from string;
            }
        }
    }
   cout<<"New string is  :"<< s;
    return 0;

}
int main()
{
    string s;
    getline(cin,s);  //if ypu use getline ypu will get line.
    int n = s.size();
    duplicates(s,n);
    return 0;
}