#include<iostream>

using namespace std;
int main(){
int i;

    for ( i=0; i<=300 ;i+=5 ){
       if(i>100 && i<=200){
         i+=5;
        }else if(i>200 && i<=300){
         i+=15;
        }
        cout<< i <<"\n";
    }





}
