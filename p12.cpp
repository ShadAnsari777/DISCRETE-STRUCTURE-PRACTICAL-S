#include<iostream>
using namespace std;

int main()
{
    char choice;
    int v,flag=0,q;
    cout<<"enter the number of vertices";
    cin>>v;
    int matrix[v][v];
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<"How many edge from "<<(char)(97+i)<<" to "<<(char)(97+j)<<" - ";
            cin>>matrix[i][j];
        }
    }

    cout<<"\nthe adjacency matrix of graph is"<<endl;
    for(int i=0;i<v;i++){
        cout<<endl;
        for(int l=0;l<v;l++){
            cout<<matrix[i][l]<<" ";
        }
    }

    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if((i!=j) && (i<j)){
                if(matrix[i][j]!=1){
                    flag=1;
                    break;
                }
            }
        }
    }

    cout<<endl;
    if(flag==1)
        cout<<"this is a not complete graph\n";

    else
        cout<<"this is a complete graph\n";

}
