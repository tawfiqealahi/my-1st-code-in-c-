#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int amount;
cout<< "enter per  ticket price: ";
cin>> amount;
int num;
cout<< "enter total ticket : ";
cin>>num;
int totalCost = amount*num;
if (num>3 || amount>1500){
    totalCost== totalCost-(totalCost*.15);
}
cout<< "you buy " << num << " ticket. \n" << "total TK:" << totalCost ;



}
