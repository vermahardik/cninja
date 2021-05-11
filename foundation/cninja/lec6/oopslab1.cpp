
Terms · Privacy · Program Policies
Last account activity: 0 minutes ago
Open in 1 other location · Details
#include<iostream>
using namespace std;

int main(){
    int r1,r2,c1,c2;

    cout<<"\nEnter rows and columns for first matrix";
    cin>>r1>>c1;
    cout<<"\nEnter rows and columns for second matrix";
    cin>>r2>>c2;

    int m1[r1][c1];
    int m2[r2][c2];

    cout <<endl<<"Enter elements of matrix 1:"<<endl;
    for(int i = 0; i<r1; ++i){
        for(int j = 0; j<c1; ++j)
        {
            cout<<"Enter element "<<i + 1<<j + 1<<":";
            cin>>m1[i][j];
        }
    }
    cout<<endl<<"Enter elements of matrix 2:"<<endl;
    for(int i = 0; i<r2; ++i){
        for(int j = 0; j<c2; ++j)
        {
            cout<<"Enter element "<<i + 1<<j + 1<<":";
            cin>>m2[i][j];
        }
    }
    int ans[r1][c2];
    for(int i = 0; i<r1; ++i){
        for(int j = 0; j<c2; ++j){
            ans[i][j]=0;
            for (int k=0;k<c1;k++){
                ans[i][j] += m1[i][k] * m2[k][j];
            }

        }
    }
    cout<<endl<<"Required Matrix is : ";
    for (int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}