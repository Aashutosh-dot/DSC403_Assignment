
#include <iostream>
using namespace std;

int main(){
    int arr[2][3];
    cout<<"Enter 2x3 matrix: ";
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
            cin>>arr[i][j];

    for(int i=0;i<2;i++){
        int s=0, e=2;
        while(s<e){
            int temp=arr[i][s];
            arr[i][s]=arr[i][e];
            arr[i][e]=temp;
            s++; e--;
        }
    }

    cout<<"Reversed rows:\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
