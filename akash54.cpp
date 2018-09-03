#include <iostream>
using namespace std;
int main()
{
int n1;
cout << "check wheather the number is divisible by 5 and 11 or not";
cout << "enter the number";
cin >> n1;
if(n1/5 && n1/11)
{
cout << "number" <<n1<< "is divisible by 5 and 11";
}
else
{
cout << "number" <<n1<< "is not divisible by 5 and 11";
}
return 0;
}
