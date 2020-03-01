#include <iostream>
using namespace std;
int main()
{
    int num,limit;
    string lookup[]={"zero","one","two","three","four","five","six","seven","eight",         "nine"};
    cin >> num >> limit;
    for(int i=num;i<=limit;i++){
        if(i>9){
            (i%2==0)?cout<<"even":cout<<"odd";cout<<endl;
        }
        else{
            cout<<lookup[i];cout<<endl;
        }
    }
    return 0;
}
