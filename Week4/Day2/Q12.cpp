
#include <iostream>
using namespace std;

int main(){
    int n=3;
    int arr[3][3];
    cout<<"Enter 3x3 matrix: ";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>arr[i][j];

    cout<<"Boundary elements: ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==0 || i==2 || j==0 || j==2)
                cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}
