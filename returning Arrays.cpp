#include<iostream>
using namespace std;
int* multiply(int,int[],int[]);
void display(int[],int);
int main(){
    int n =3;
    int A[]={3,2,5};
    int B[]={5,1,2};
    int* C =multiply(n,A,B);
    display(C,2*n-1);
    delete C;
    return 0;
}

int* multiply(int n ,int A[] ,int B[]){
    int size_of_product_array=2*n-1;
    int* product_array=new int[size_of_product_array];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            product_array[i+j]+=A[i]*B[j];
        }
    }
    return product_array;
}

void display(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" | ";
    }
    cout<<"\n\n";
}