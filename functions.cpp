#include<iostream>
#include<vector>
using namespace std;

int return_max();
int main(){
    cout<<return_max();
    return 0;
}

int return_max(){
    vector<int> number(4);
    int max=INT32_MIN;
    for(int i=0;i<number.size();i++){
        cin>>number[i];
        if(max<number[i])
            max=number[i];
    }
    return max;
}