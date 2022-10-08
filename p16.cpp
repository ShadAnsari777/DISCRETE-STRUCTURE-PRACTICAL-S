#include <iostream>
using namespace std;
//20
int main()
{
    int m,i,l;
    cout << "Enter value of m in m-ary tree:" << endl;
    cin>>m;
    cout<<"Enter total internal vertices: "<<endl;
    cin>>i;
    l=((m-1)*i)+1;
    cout<<"total leaves in a full m-ary tree: "<<l<<endl;
    return 0;
}
