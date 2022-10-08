#include <iostream>
//Q4 ds
using namespace std;

class RELATION
{
    public:
    bool reflexive(int *arr, int r, int c);
    bool symmetric(int *arr, int r, int c);
    bool anti_symmetric(int *arr, int r, int c);
    bool transitive(int *arr, int r, int c);
};
bool RELATION::reflexive(int *arr, int r, int c)
{
    int flag=1;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (i==j & *(arr+i*c+j)!=1){
                flag=0;

            }
        }
    }
    if (flag==1)
        return true;
        //cout<<"--> Reflexive"<<endl;
    else
        return false;
        //cout<<"--> Not Reflexive"<<endl;

}
bool RELATION::symmetric(int *arr, int r, int c){
    int flag=1;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (*(arr+i*c+j)==1){
                if (*(arr+j*c+i)!=1){
                   flag=0;
                }
            }
        }

    }
    if (flag==1)
        return true;
        //cout<<"--> Symmetric"<<endl;
    else
        return false;
        //cout<<"--> not Symmetric"<<endl;
}
bool RELATION::anti_symmetric(int *arr, int r, int c){
    int flag=1;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (i==j && *(arr+i*c+j)==1){
                if (*(arr+j*c+i)!=1){
                   flag=0;
                }
            }

            else if (*(arr+i*c+j)==1){
                if (*(arr+j*c+i)==1){
                   flag=0;
                }
            }
        }

    }
    if (flag==1)
        return true;
        //cout<<"--> Anti-Symmetric"<<endl;
    else
        return false;
        //cout<<"--> not Anti-Symmetric"<<endl;
}
bool RELATION::transitive(int *arr, int r, int c){
    int flag=1;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            for (int k=0; k<r; k++){
               if ((*(arr+i*c+j)==1) && (*(arr+j*c+k)==1)){
                    if (*(arr+i*c+k)!=1){
                        flag=0;
                    }
               }
            }

        }

    }
    if (flag==1)
        return true;
        //cout<<"--> Transitive"<<endl;
    else
        return false;
        //cout<<"--> not Transitive"<<endl;

}
int main()
{
    int row, col;
    //input matrix
    cout<<"enter no. of rows: ";
    cin>>row;
    cout<<"enter no. of columns: ";
    cin>>col;
    int matrix[row][col];
    for( int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout<<"enter "<<i+1<<j+1<<" element: ";
            cin>>matrix[i][j];
        }
    }

    //display matrix
    cout<<"\nentered matrix is :"<<endl;
    for( int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    RELATION operation;
    cout<<"The given relation is "<<endl;
    bool r = operation.reflexive((int*) matrix, row, col);
    bool s = operation.symmetric((int*) matrix, row, col);
    bool a = operation.anti_symmetric((int*) matrix, row, col);
    bool t = operation.transitive((int*) matrix, row, col);

    if ((r && s && t) || (r && a && t)){
        if (r && s && t)
            cout<<"--> Equivalence relation"<<endl;
        if (r && a && t)
            cout<<"--> Partial order relation"<<endl;
    }
    else{
        cout<<"--> none"<<endl;
    }

    return 0;
}
