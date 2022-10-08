#include<iostream>

using namespace std;
//6
void insertionsort(int *array,int n){

    cout<<"Initial Array : ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

    cout<<"Insertion sort steps : "<<endl;
    for(int i=1;i<n;i++){
        int current=array[i];
        int j=i-1;

        while(array[j]>current&&j>=0){
            array[j+1]=array[j];
            j--;
        }
        cout<<endl<<"No of comparison in this pass : "<<i-1-j<<endl;
        array[j+1]=current;
        cout<<"Given array after this pass : "<<endl;
        cout<<"|";
            for(int i=0;i<n;i++){
                cout<<array[i]<<" ";
            }
        cout<<"|  ";
        cout<<endl;
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

    insertionsort(array,n);

    cout<<endl<<"Sorted array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
