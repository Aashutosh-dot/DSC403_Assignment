
#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    cout<<"Enter 9 elements: ";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>arr[i][j];

    cout<<"Row sums: ";
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++) sum+=arr[i][j];
        cout<<sum<<" ";
    }

    cout<<"\nColumn sums: ";
    for(int j=0;j<3;j++){
        int sum=0;
        for(int i=0;i<3;i++) sum+=arr[i][j];
        cout<<sum<<" ";
    }
    return 0;
}
