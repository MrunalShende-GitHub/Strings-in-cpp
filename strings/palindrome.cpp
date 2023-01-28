#include <iostream>
// #include <algorithm>
using namespace std;
// int swap(int a, int b)
// {
//   int temp;
//   temp = a;
//   a = b;
//   b = temp;
// }
int count;
void palindrome(string x, int m)
{
  for (int i = 0; i < m / 2; i++)
  {
    if (x[i] == x[m - i - 1])
      {
        count=count+1;
        if(count ==m/2)
        {
          cout<<"palindrome";
        }
      }
      else
      {
        cout << "not a palondrome";
        break;
      }
  }
  // cout<<x;
}
int main()
{
  string name;
  string name1;
  cin >> name;
  name1 = name;
  int n = name.size();
  palindrome(name, n);

  // if (name == name1)
  // {
  //   cout << "palindrome";
  // }
  // else
  //   cout << "not a palindrome";
  return 0;
}