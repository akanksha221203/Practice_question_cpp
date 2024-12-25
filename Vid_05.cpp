 // Bitwise operators
#include<iostream>
using namespace std;
int main(){
   /*int a = 2;
    int b = 5;
    cout<<"a&b : "<<(a&b)<< endl;
     cout<<"a/b : "<<(a/b)<< endl;
      cout<<"~b : "<<(~b)<< endl;
       cout<<"a^b : "<<(a^b)<< endl;*/
    //   right and left shift:
     /*cout<<(2>>1)<<endl;
       cout<<(b>>1);*/
    //    increament and decreament:
    // 5 questions:
    /*question 1
    int a, b = 1;
    a = 10;
    if(++a)
    cout<<b;
    else
    cout<<++b; */
   /* int a = 1;
    int b = 2;
    if(a-->0||++b>2){
        cout<<"Stage 1- Inside If"<<endl;
    }
    else{
        cout<<"Stage 2 - Inside Else";
    }
    cout<<a<<" "<<b<<endl;*/
    /* question 4 
    int a = 3;
    cout<<(25*(++a));*/
    // int a = 1;
    // int b = a++;
    // int c = ++a;
    // cout<<b;
    // cout<<c;


    // use of for loop
    /* sum on n natural no. 
    int n;
    int i;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    int sum = 0;
    for(i=1; i<=n; i++){
        sum+=i;
    


       } cout<<sum;*/
    //    fibbonacci sereis
    /*int n;
    cin>>n;
    int a = 0;
    int b = 1;
    int sum;
    int i;
    cout<<a<<" "<<b<<" ";
    for (i = 1; i<=n; i++){
        sum = a+b;  
        cout<<sum<<" ";
        a=b;
        b=sum;
        
    }*/
  /*int i;
   for(int i = 0; i<=15; i+=2){
   cout<<i<<" ";
   if(i&1){
    continue;
   }
       i++;
       
   }*/
  int i;
  int j;
  for(int i = 0; i <= 5; i++){
    for(int j = i; j <= 5; j++){
        if(i+j ==10){
            break;
        }
        cout<<i<<" "<<j<<endl;
    }
  }
 

}