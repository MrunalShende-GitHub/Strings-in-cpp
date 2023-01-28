#include<iostream>
using namespace std;

int swap(string x, string y,int n,int m)
{
    string temp;
    //int j = temp.size();

    for (int i = 0; i <= n; i++)
    {
        temp[i] = x[i];
    }
    for (int j = 0; j <= m; j++)
    {
        x[j] = y[j];
    }
    cout<<"After swapping: "<<x+" "+y<<endl;
}

int main()
{
    string first,second;
    cin>>first;
    cin>>second;
    cout<<"Before swapping: "<<first+" "+second<<endl;
    int n = first.size();
    int m = second.size();
 swap(first,second,n,m);  //or you can use swap(first,second);
    swap(first,second);

    cout << "After swapping: " << first + " " + second << endl;  //both works same;
}