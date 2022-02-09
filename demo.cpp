#include<iostream>

using namespace std;
int main(){
int i;

    for ( i=0; i<=300 ; ){
        if(i<100){
            cout<< (i+=5) << "\n";
        }else if(i>100 && i<=200){
         cout<< (i+=10) << "\n";
        }else if(i>200 && i<=300){
         cout<< (i+=20) << "\n";
        }
    }





}
