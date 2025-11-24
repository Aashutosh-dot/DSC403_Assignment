
#include <iostream>
using namespace std;

int main(){
    int arr[3][3];
    cout<<"Enter 3x3 matrix: ";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>arr[i][j];

    cout<<"Transpose:\n";
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
