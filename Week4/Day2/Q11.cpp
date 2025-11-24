
#include <iostream>
using namespace std;

int main(){
    int arr[3][2];
    cout<<"Enter 3x2 matrix: ";
    for(int i=0;i<3;i++)
        for(int j=0;j<2;j++)
            cin>>arr[i][j];

    for(int j=0;j<2;j++){
        int top=0, bottom=2;
        while(top<bottom){
            int temp=arr[top][j];
            arr[top][j]=arr[bottom][j];
            arr[bottom][j]=temp;
            top++; bottom--;
        }
    }

    cout<<"Reversed columns:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
