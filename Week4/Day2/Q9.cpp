
#include <iostream>
using namespace std;

int main(){
    int arr[3][3];
    cout<<"Enter matrix: ";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>arr[i][j];

    bool symmetric=true;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] != arr[j][i]){
                symmetric=false;
                break;
            }
        }
    }

    if(symmetric) cout<<"Matrix is symmetric";
    else cout<<"Matrix is not symmetric";

    return 0;
}
