#include<iostream>
#include "swap.h"
int main(){
    int a,b;
    std::cout<<"Enter the values of a and b: ";
    std::cin>>a>>b;
    std::cout<<"Before swapping the values of  a and b are: "<<a<<" "<<b<<std::endl;
    Swap(a,b);
    std::cout<<"After swapping the values of a and b are:"<<a<<" "<<b<<std::endl;
    return 0;

}