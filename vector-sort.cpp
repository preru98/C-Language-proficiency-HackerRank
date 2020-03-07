#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin>>N; 
    vector<int> res; int temp;
    for(int i=0;i<N;i++){
        cin>>temp;
        res.push_back(temp);
    }
    sort(res.begin(),res.end());
    for(int x:res){
        cout<<x<<" ";
    }
    return 0;
}
