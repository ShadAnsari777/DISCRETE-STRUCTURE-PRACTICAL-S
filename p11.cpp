#include<iostream>
#include<cmath>
//Q15
using namespace std;

int solution(int array[],int n,int x){

    int sum=0;
    for(int i=n;i>=0;i--){
        sum+=(array[abs(i-n)]*pow(x,i));
    }
    return sum;
}

int main(){

    int n,s,value;
    cout<<" Enter the degree of polynomial : ";
    cin>>n;
    int array[n];

    for(int i=n;i>=0;i--){
        cout<<"Enter the variable or constant of power "<<i<<endl;
        cin>>s;
        array[abs(i-n)]=s;
    }

    cout<<"Your Polynomial : "<<endl;
    for(int i=0;i<n+1;i++){
        cout<<array[i]<<"x^"<<abs(i-n);
        if (array[i]>0 & array[i+1]>0){
            cout<<"+";
        }
    }

    cout<<"\nEnter value of x : ";
    cin>>value;

    cout<<"value of polynomial for value "<<value<<"is : "<<solution(array,n,value)<<endl;
    return 0;
}
