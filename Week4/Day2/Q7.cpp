
#include <iostream>
using namespace std;

int main(){
    int A[2][3], B[3][2], C[2][2]={0};

    cout<<"Enter matrix A (2x3): ";
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            cin>>A[i][j];

    cout<<"Enter matrix B (3x2): ";
    for(int i=0;i<3;i++)
        for(int j=0;j<2;j++)
            cin>>B[i][j];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    cout<<"Result (2x2):\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            cout<<C[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
