#include<iostream>
using namespace std;

void Bubblesort(int *array,int n){
    cout<<"Initial Array : ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"\nBubble sort steps :"<<endl;
    for(int i=0;i<n-1;i++){
        cout<<"\nNo of comparison in this pass : "<<n-i-1<<endl;
        for(int j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            cout<<"|";
            for(int i=0;i<n;i++){
            cout<<array[i]<<" ";
        }
        cout<<"|  ";
        }
    cout<<endl;
    }
    cout<<"\nSorted array:";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"enter length of array";
    cin>>n;

    int array[n];
    cout<<"Enter elements of array";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    Bubblesort(array,n);

    // for(int i=0;i<n;i++){
    //     cout<<array[i]<<" ";
    // }

    return 0;
}
