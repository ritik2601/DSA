#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int row=0; row<n; row=row+1){
// -----> for space;
        for(int col=0; col<row; col=col+1){
           cout<<" ";

        }
        // ----> for strar;

        int totalCol = n - row;
        for(int col=0; col<totalCol; col=col+1){

            if(col == 0 || col == totalCol -1){
                cout <<"* ";
            }
            else{
                cout <<"  ";
            }

            
          
        }
        
        cout<< endl;
    }
}