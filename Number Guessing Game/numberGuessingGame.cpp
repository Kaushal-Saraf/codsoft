#include <bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    int between = 100;
    int x = rand()%between;
    int c=-1;
    while(c!=x){
        cout<<"Guess a number between 0 and "<<between<<" :"<<" ";
        cin>>c;
        if(c>x){
            cout<< "Try smaller number."<<endl;
        }
        else if(c<x){
            cout<< "Try bigger number."<<endl;
        }
    }
    cout<<"You guessed it right."<<endl;
    system("pause");
    return 0;
}