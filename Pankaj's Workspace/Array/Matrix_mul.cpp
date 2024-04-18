#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int A[20][20];
    int B[20][20];
    int C[20][20];

    int Ar,Ac;
    int Br,Bc;

    cout<<"Enter number of rows and columns for Matrix A:"<<endl<<"Row:";
    cin>>Ar;
    cout<<"Column:";
    cin>>Ac;
    cout<<"Enter number of rows and columns for Matrix B:"<<endl<<"Row:";
    cin>>Br;
    cout<<"Column:";
    cin>>Bc;

    if(Ac!=Br)
    {
        cout<<"Rows of Matrix A and Columns of Matrix B should be equal"<<endl;
    }
    else
    {
        cout<<"Enter elements of Matrix A"<<endl;
        for(int i=0;i<Ar;i++)
        {
            for(int j=0;j<Ac;j++)
            {
                cin>>A[i][j];
            }
        }

        cout<<"Enter elements of Matrix B"<<endl;
        for(int i=0;i<Br;i++)
        {
            for(int j=0;j<Bc;j++)
            {
                cin>>B[i][j];
            }
        }

        for(int i=0;i<Ar;i++)
        {
            for(int j=0;j<Bc;j++)
            {
                C[i][j]=0;
            }
        }

        for(int i=0;i<Ar;i++)
        {
            for(int j=0;j<Br;j++)
            {
                for(int k=0;k<Ac;k++)
                {
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
                }
            }
        }

        for(int i=0;i<Ar;i++)
        {
            for(int j=0;j<Bc;j++)
            {
                cout<<setw(3)<<C[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}