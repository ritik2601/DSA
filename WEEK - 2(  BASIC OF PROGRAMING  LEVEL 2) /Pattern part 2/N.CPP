#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    for(int row=0;  row<n; row=row+1 ){

        int totalcol = row+1;
        for(int col=0; col<totalcol; col=col+1){
            if(col ==  totalcol-1){
                cout << row+1;

            }
            else{
                cout << row+1 <<"*";
            }
        }
        cout<<endl;
    }

}
