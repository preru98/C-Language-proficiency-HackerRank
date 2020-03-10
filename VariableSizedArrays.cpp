#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q,temp,element,r,c;
    vector<vector<int>>a(n); 
    
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>temp;
        for(int j=0;j<temp;j++){
            cin>>element;
            a[i].push_back(element);
        }
    }

    for(int x=0;x<q;x++){
        cin>>r;
        cin>>c;
        cout<<a[r][c];
        cout<<endl;
    }
    return 0;
}
