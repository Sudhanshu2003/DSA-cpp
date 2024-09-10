#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no of rows/coiumns : ";
    cin>>m;
    int arr[m][m];
       //  Input
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<'\n';
       //  Output
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  
    cout<<endl;

    //   transpose
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            //  swaping                                                                                                                                 
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
       // Reverse each row to rotate the matrix 90 degrees clockwise
    for(int k=0; k<m; k++){
        int i=0;
        int j=m-1;
        while (i<j)
        {
       // Swapping elements to reverse the row
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }
        
    }

    
    // // Reverse each row to rotate the matrix 90 degrees clockwise
    // for(int i = 0; i < m; i++) {
    //     int start = 0;
    //     int end = m - 1;
    //     while (start < end) {
    //         // Swapping elements to reverse the row
    //         int temp = arr[i][start];
    //         arr[i][start] = arr[i][end];
    //         arr[i][end] = temp;
    //         start++;
    //         end--;
    //     }
    // }
    //  printing the transpose
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// #include<iostream>
// using namespace std;

// int main() {
//     int m;
//     cout << "Enter the number of rows/columns: ";
//     cin >> m;
    
//     int arr[m][m];

//     // Input
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     cout << '\n';

//     // Output original matrix
//     cout << "Original matrix:\n";
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }  
//     cout << endl;

//     // Transpose of the matrix
//     for(int i = 0; i < m; i++) {
//         for(int j = i + 1; j < m; j++) {
//             // Swapping elements across the diagonal
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }

//     // Reverse each row to rotate the matrix 90 degrees clockwise
//     for(int i = 0; i < m; i++) {
//         int start = 0;
//         int end = m - 1;
//         while (start < end) {
//             // Swapping elements to reverse the row
//             int temp = arr[i][start];
//             arr[i][start] = arr[i][end];
//             arr[i][end] = temp;
//             start++;
//             end--;
//         }
//     }

//     // Printing the rotated matrix
//     cout << "Rotated matrix (90 degrees clockwise):\n";
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < m; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
