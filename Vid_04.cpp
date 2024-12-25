// Pattern Questions
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    // while(i<n){
    //     int j = 1;
    //     while(j<n){
    //         cout<<j;
    //         j = j + 1;
    //     } 
    //     cout<<endl;
    //     i = i + 1;
    // }
    // if you want to print 4321
                         // 4321
                        //  4321
                         // 4321
    // replace cout<<j;by cout<<n-j
    while(i<n){
        int j = 1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
           i=i+1;
        
    }
}