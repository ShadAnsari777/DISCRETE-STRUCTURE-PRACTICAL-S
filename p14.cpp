#include <iostream>
#include <iomanip>
using namespace std;
//18
int n;
int ar[10][10];
int m[10][10];

void matrix()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter value in ar["<<i<<"]["<<j<<"] ";
            cin>>ar[i][j];
        }
    }
    cout<<endl<<endl;
}
// fn to display matrix
void display()
{
    cout<<"Adjency Matrix :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(6)<<ar[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
//fn to multiply 2 matrix
void multiply()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                m[i][j]=m[i][j]+ar[i][k]*ar[k][j];
            }
        }
    }
}
int main()
{
    cout<<"Enter no. of vertices ";
    cin>>n;
    matrix();
    display();
    int l,s,e;
    cout<<"Enter path length : ";
    cin>>l;
    cout<<"Enter Starting vertex : ";
    cin>>s;
    cout<<"Enter Ending vertex : ";
    cin>>e;
    for(int i=1;i<=l;i++)
    {
        multiply();
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(6)<<m[i][j];
        }
        cout<<endl;
    }
    cout<<"No. of paths of length "<<l<<" = "<<m[s][e];
}
