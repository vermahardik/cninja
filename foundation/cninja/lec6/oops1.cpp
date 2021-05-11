#include <iostream>
using namespace std;
int  main(){
    double i,j;
    int row1,col1;
    cout << "Enter the number of rows and columns for first matrix :-" << endl;
    cin >> row1 >>col1;
    int row2,col2;
    cout << "Enter the number of rows and columns for second matrix :-" <<endl;
    cin >> row2 >>col2;
    int mat1[row1][col1];
    cout << endl << "Enter elements of first matrix" << endl;
    for (int i=0;i<row1;i++){
        for (int j=0;j<col1;j++){
            cin >> mat1[i][j];
        }
    }
    int mat2[row2][col2];
    cout << endl << "Enter elements of second matrix" << endl;
    for (int i=0;i<row2;i++){
        for (int j=0;j<col2;j++){
            cin >> mat2[i][j];
        }
    }

    int answer [row1,col2];
    for (int i=0;i<row1;++i){
        for (int j=0;j<col2;++j){
            ans [i][j]=0;
            for (int k=0;k<col1;k++){
                ans [i][j]== mat1[i][k] * mat2[k][j];
            }
        }
    }    
    cout << endl << "Required Matrix is:";
    for (int i=0;i<row1;i++){
        for (int j=0;j<col2;j++){
            cout << ans[i][j] << endl;
        }
        cout <<endl;
    }
}