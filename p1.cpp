#include <iostream>
#include <math.h>
using namespace std;
//Q1 ds practical

void ismember(int a, int A[], int n);
void display(int A[],int n);
void powerset(int A[], int n);

int main()
{
    int n, i, j, e, a_input, count=0;

    cout<<"enter length of array A: ";
    cin>>n;
    int arr[n]={};

    //input array and element
    cout<<"enter elements of SET"<<endl;
    for (i=0; i<n; i++)
        cin>>arr[i];
    cout<<"enter element to be searched:";
    cin>>a_input;

    //display original array
    cout<<"original ";
    display(arr,n);

    //duplicates to 0's
    for (i=0; i<n; i++){
        e=arr[i];
        for(j=0; j<n; j++){
            if ((e==arr[j])&&(i!=j))
               arr[j]=0;
        }
        if (arr[i]==0)
            count+=1;
    }
    cout<<endl;

    //shift all 0's in right
    for (i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            if(arr[i]==0 & arr[j]==0){
                arr[j]=arr[j+1];
                arr[j+1]=0;
            }
        }
    }
    int new_len=n-count;
    //creating new array after removing duplicates
    int arr_d[(new_len)]={};
    for (i=0; i<(new_len); i++) {
            arr_d[i]=arr[i];

    }
    cout<<"After removing duplicates ";
    display(arr_d,(new_len));

    cout<<"cardinality of the set ="<<new_len<<endl;

    //function declaration
    ismember(a_input,arr_d,new_len);
    powerset(arr_d,new_len);
    return 0;

}

//functions
void powerset(int A[], int n)
{
  int s=pow(2,n);
  cout<<"power set is:" <<endl;
  cout<<"{}";
  for (int i=0; i<s; i++)
  {
    for (int j=0; j<n; j++)
    {
      if (i & (1<<j))
        cout<<A[j]<<" ";
    }
    cout<<"  ";
  }
}
void ismember(int a, int A[], int n)
{
    int i, bol;
    bol=0;
    for (int i=0; i<n; i++)
        if (a==A[i])
            bol=1;
     cout<<"Does "<<a<<" belongs to set :";
    if (bol==1)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
}
void display(int A[],int n)
{
    cout<<"Set is: ";
    for (int i=0; i<n; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
