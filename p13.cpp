#include <iostream>
using namespace std;
//17
int main()
{
    int row, col;
    //input matrix
    cout<<"enter no. of rows in adjacency matrix: ";
    cin>>row;
    cout<<"enter no. of columns in adjacency matrix: ";
    cin>>col;
    int matrix[row][col];
    for( int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout<<"enter "<<i+1<<j+1<<" element: ";
            cin>>matrix[i][j];
        }
    }

    //display matrix
    cout<<"\nAdjacency matrix is :"<<endl;
    for( int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for( int i=0; i<row; i++){
        int in=97+i;
        int in_deg=0,out_deg=0;
        char c=(char)in;
        for (int j=0; j<col; j++){
           in_deg+=matrix[i][j];
           out_deg+=matrix[j][i];

        }
        cout<<"in-degree("<<c<<")="<<in_deg<<endl;
        cout<<"out-degree("<<c<<")="<<out_deg<<endl;
        cout<<endl;
    }
}
