#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b,c;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size();
    cout<<endl;
    c=a+b;
    cout<<c;
    cout<<endl;
    a[0]=b[0];
    b[0]=c[0];
    cout<<a<<" "<<b;
    return 0;
}
