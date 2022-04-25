#include<iostream>
using namespace std;

int solveMeFirst(int a, int b){
    //Returns sum of two numbers
    return a+b;    
}


int main(){
    int a,b,sum;
    cin>>a>>b;
    sum = solveMeFirst(a,b);
    cout<<sum;
}
