#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the 1st Matrix : ";
    cin>>m;
    int n;
    cout<<"Enter the 1st Matrix : ";
    cin>>n;

    int p;
    cout<<"Enter the 2nd Matrix : ";
    cin>>p;
    int q;
    cout<<"Enter the 2nd Matrix : ";
    cin>>q;

    if(n==p){
        int a[m][n];
        cout<<"Enter the element of 1st matrix :";
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Enter the element of 2nd matrix :";
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                cin>>b[i][j];
            }
        }

        // resultant Matrix
        int r[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                r [i][j]=0;
                for(int k=0; k<p; k++){
                    r[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        cout<<endl;
        
        //    print
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                cout<<r[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"The matrix cannot multiplied";
    }
}