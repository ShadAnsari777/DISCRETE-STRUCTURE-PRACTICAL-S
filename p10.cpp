#include<iostream>
#include<stdlib.h>
using namespace std;
//13

void conj(char,char);
void disj(char,char);
void exOR(char,char);
void condition(char,char);
void bicondition(char,char);
void exNOR(char,char);
void negat(char);
void nand(char,char);
void nor(char,char);
int main()
{
    char x,y,ans;
    int ch;
    do
    {
        cout<<"\nLOGICAL OPERATIONS"<<endl;
        cout<<"\n1. Conjunction";
        cout<<"\n2. Disjunction";
        cout<<"\n3. Exclusive OR";
        cout<<"\n4. Conditional";
        cout<<"\n5. Bi-Conditional";
        cout<<"\n6. Exclusive NOR";
        cout<<"\n7. Negation";
        cout<<"\n8. NAND";
        cout<<"\n9. NOR";
        cout<<"\n10. Exit"<<endl;
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\nEnter two inputs(t/f)";
                cin>>x>>y;
                conj(x,y);
                break;
            case 2:
                cout<<"\nEnter two inputs(t/f)";
                cin>>x>>y;
                disj(x,y);
                break;
            case 3:
                cout<<"\nEnter two inputs(t/f)";
                cin>>x>>y;
                exOR(x,y);
                break;
            case 4:
                cout<<"\nEnter two inputs(t/f)";
                cin>>x>>y;
                condition(x,y);
                break;
            case 5:
                cout<<"\nEnter two inputs(t/f)";
                cin>>x>>y;
                bicondition(x,y);
                break;
            case 6:
                cout<<"\nEnter two inputs(t/f)";
                cin>>x>>y;
                exNOR(x,y);
                break;
            case 7:
                cout<<"\nEnter one input(t/f)";
                cin>>x;
                negat(x);
                break;
            case 8:
                cout<<"\nEnter two inputs(t/f)";
                cin>>x>>y;
                nand(x,y);
                break;
            case 9:
                cout<<"\nEnter two inputs(t/f)";
                cin>>x>>y;
                nor(x,y);
                break;
            case 10:
                exit(0);
            default:
                cout<<"\n Wrong input!!!";
        }
        cout<<"\n Want to continue??(y/n)";
        cin>>ans;
     }while(ans=='y'||ans=='Y');
     return 0;
}
void conj(char x, char y)
{
    if(x=='t'&&y=='t')
       cout<<"\nYour answer is TRUE";
    else
        cout<<"\nYour answer is FALSE"<<endl;
    cout<<"\n Truth Table for Conjunction : "<<endl;
    cout<<"\nX"<<'\t'<<"Y"<<'\t'<<"OUTPUT"<<endl;
    cout<<"F"<<'\t'<<"F"<<'\t'<<" F "<<endl;
    cout<<"F"<<'\t'<<"T"<<'\t'<<" F "<<endl;
    cout<<"T"<<'\t'<<"F"<<'\t'<<" F "<<endl;
    cout<<"T"<<'\t'<<"T"<<'\t'<<" T "<<endl;
}
void disj(char x, char y)
{
    if(x=='f'&&y=='f')
       cout<<"\nYour answer is FALSE";
    else
       cout<<"\nYour answer is TRUE"<<endl;
    cout<<"\n Truth Table for Disjunction : "<<endl;
    cout<<"\nX"<<'\t'<<"Y"<<'\t'<<"OUTPUT"<<endl;
    cout<<"F"<<'\t'<<"F"<<'\t'<<" F "<<endl;
    cout<<"F"<<'\t'<<"T"<<'\t'<<" T "<<endl;
    cout<<"T"<<'\t'<<"F"<<'\t'<<" T "<<endl;
    cout<<"T"<<'\t'<<"T"<<'\t'<<" T "<<endl;
}
void exOR(char x, char y)
{
    if(x==y)
       cout<<"\nYour answer is FALSE";
    else
       cout<<"\nYour answer is TRUE";
    cout<<"\n Truth Table for Exclusive OR : "<<endl;
    cout<<"\nX"<<'\t'<<"Y"<<'\t'<<"OUTPUT"<<endl;
    cout<<"F"<<'\t'<<"F"<<'\t'<<" F "<<endl;
    cout<<"F"<<'\t'<<"T"<<'\t'<<" T "<<endl;
    cout<<"T"<<'\t'<<"F"<<'\t'<<" T "<<endl;
    cout<<"T"<<'\t'<<"T"<<'\t'<<" F "<<endl;
}
void condition(char x, char y)
{
    if(x=='t'&&y=='f')
       cout<<"\nYour answer is FALSE";
    else
       cout<<"\nYour answer is TRUE";
    cout<<"\n Truth table for Conditional : "<<endl;
    cout<<"\nX"<<'\t'<<"Y"<<'\t'<<"OUTPUT"<<endl;
    cout<<"F"<<'\t'<<"F"<<'\t'<<" T "<<endl;
    cout<<"F"<<'\t'<<"T"<<'\t'<<" T "<<endl;
    cout<<"T"<<'\t'<<"F"<<'\t'<<" F "<<endl;
    cout<<"T"<<'\t'<<"T"<<'\t'<<" T "<<endl;
}
void bicondition(char x, char y)
{
    if(x==y)
        cout<<"\nYour answer is TRUE";
    else
        cout<<"\nYour answer is FALSE";
    cout<<"\n Truth table for Bi-Conditional : "<<endl;
    cout<<"\nX"<<'\t'<<"Y"<<'\t'<<"OUTPUT"<<endl;
    cout<<"F"<<'\t'<<"F"<<'\t'<<" T "<<endl;
    cout<<"F"<<'\t'<<"T"<<'\t'<<" F "<<endl;
    cout<<"T"<<'\t'<<"F"<<'\t'<<" F "<<endl;
    cout<<"T"<<'\t'<<"T"<<'\t'<<" T "<<endl;
}
void exNOR(char x, char y)
{
    if(x==y)
       cout<<"\nYour answer is TRUE";
    else
       cout<<"\nYour answer is FALSE";
    cout<<"\n Truth table for Exclusive NOR : "<<endl;
    cout<<"\nX"<<'\t'<<"Y"<<'\t'<<"OUTPUT"<<endl;
    cout<<"F"<<'\t'<<"F"<<'\t'<<" T "<<endl;
    cout<<"F"<<'\t'<<"T"<<'\t'<<" F "<<endl;
    cout<<"T"<<'\t'<<"F"<<'\t'<<" F "<<endl;
    cout<<"T"<<'\t'<<"T"<<'\t'<<" T "<<endl;
}
void negat(char x)
{
    if(x=='t')
        cout<<"\nYour answer is FALSE";
    else
        cout<<"\nYour answer is TRUE";
    cout<<"\n Truth Table for Negation : ";
    cout<<"\nINPUT"<<'\t'<<"OUTPUT"<<endl;
    cout<<" F "<<'\t'<<" T "<<endl;
    cout<<" T "<<'\t'<<" F "<<endl;
}
void nand(char x, char y)
{
    if(x=='t'&&y=='t')
        cout<<"\nYour answer is FALSE";
    else
        cout<<"\nYour answer is TRUE";
    cout<<"\n Truth Table for NAND : ";
    cout<<"\nX"<<'\t'<<"Y"<<'\t'<<"OUTPUT"<<endl;
    cout<<"F"<<'\t'<<"F"<<'\t'<<" T "<<endl;
    cout<<"F"<<'\t'<<"T"<<'\t'<<" T "<<endl;
    cout<<"T"<<'\t'<<"F"<<'\t'<<" T "<<endl;
    cout<<"T"<<'\t'<<"T"<<'\t'<<" F "<<endl;
}
void nor(char x, char y)
{
    if(x=='f'&&y=='f')
        cout<<"\nYour answer is TRUE";
    else
        cout<<"\nYour answer is FALSE";
    cout<<"\n Truth Table for NOR : ";
    cout<<"\nX"<<'\t'<<"Y"<<'\t'<<"OUTPUT"<<endl;
    cout<<"F"<<'\t'<<"F"<<'\t'<<" T "<<endl;
    cout<<"F"<<'\t'<<"T"<<'\t'<<" F "<<endl;
    cout<<"T"<<'\t'<<"F"<<'\t'<<" F "<<endl;
    cout<<"T"<<'\t'<<"T"<<'\t'<<" F "<<endl;
}
