// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     string s = "bcad";
//     sort(s.begin(),s.end());
//     cout<<"sorted array : "<<s<<endl;
// }
#include <iostream>
#include <algorithm> // this header is required for std::sort to work
int main()
{
    std::string s = "dacb";
    std::sort(s.begin(), s.end());
    std::cout << s << std::endl;

    return 0;
}