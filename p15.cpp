#include<iostream>
using namespace std;

int main()
{
    char charr[50],choice;
    int v,i,j,p=0,sum=0,flag=0,c=0;

    cout<<"Enter number of vertices for a adjacency matrix \n";
    cin>>v;

    int arr[v][v],arr1[v];
    for( i=0;i<v;i++) {
        for( j=0;j<v;j++){
            cout<<"How many edge from "<<(char)(97+i)<<" to "<<(char)(97+j)<<" -> ";
            cin>>arr[i][j];
        }
    }

    cout<<"THE ADJANCY MATRIX : \n ";
    for(int m=0;m<v;m++){
        cout<<endl;
        for(int n=0;n<v;n++)
            cout<<arr[m][n]<<" ";
    }

    for(i=0;i<v;i++)   {
        sum=0;
        for(j=0;j<v;j++){
            sum+=arr[i][j];
        }
        arr1[i]=sum;
    }


    for(i=0;i<v;i++){
        if( (arr1[i]%2) !=0){
            flag =1;
            c++;

        }
    }

    cout<<endl;
    if(flag ==0)
        cout<<"There is euler circuit"<<endl;
    else
        cout<<"There is no euler circuit"<<endl;

    if(c==2)
        cout<<"There is a euler path"<<endl;
    else
        cout<<"There is no euler path"<<endl;

    return 0;
}
