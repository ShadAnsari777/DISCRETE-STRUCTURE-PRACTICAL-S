#include<iostream>

using namespace std;
//8
int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int permutation(int n,int r){
    if(n<r){
        return -1;
    }
    return (factorial(n)/factorial(n-r));
}

int combination(int n,int r){
    if(n<r){
        return -1;
    }

    return (factorial(n)/(factorial(n-r)*factorial(r)));
}

int main(){
    int n,r;
    cout<<"Enter value of n : " ;
    cin>>n;
    cout<<"Enter value of r : ";
    cin>>r;

    cout<<"Permuatation for given values : "<<permutation(n,r)<<endl;
    cout<<"Combination for given values : "<<combination(n,r)<<endl;

    return 0;
}

