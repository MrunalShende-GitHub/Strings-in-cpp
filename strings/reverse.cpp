#include<iostream>
using namespace std;
int swap(int a, int b)
{
int temp;
temp =a;
a=b;
b=temp;
}
void reverse1(string x,int m)
{
  for(int i= 0;i<m/2;i++)
  {
    swap( x[i] ,x[m-i-1]);
  }
}
int main()
{
    string name;
    string name1;
    cin>>name;
    name1 =name;
    int n = name.size();
    reverse1(name,n);

if(name == name1)
{
    cout<<"palindrome";
}
else
cout<<"not a palindrome";
    return 0;
}