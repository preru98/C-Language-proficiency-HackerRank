#include <iostream>
using namespace std;
int main()
{
    int i;
    string lookup[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin >> i;
    (i>9)?cout<<"Greater than 9":cout<<lookup[i];
    return 0;
}
