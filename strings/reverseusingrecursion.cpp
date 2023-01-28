#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <list>
#include <vector>
#include <tuple>
#include <algorithm>
//#include<algorithm>
using namespace std;
int reverse1(string x,int n)
{
        if(n >=0)
        {
        reverse1(x[n],n--);
        cout<<x;
        }

    
    return 0;
}

int main()
{
    string s;
    cin>>s;
    int m = s.size();
    reverse1(s,m);
    return 0;
}