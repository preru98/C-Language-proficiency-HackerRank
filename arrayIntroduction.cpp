#include <iostream>
using namespace std;


int main() {
    int size;
    int array[1000];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    for(int j=size-1;j>=0;j--){
        cout<<array[j];cout<<" ";
    }
    return 0;
}
