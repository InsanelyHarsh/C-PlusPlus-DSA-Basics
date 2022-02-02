//
//  DSA-Basics-02.cpp
//  DSA-Algorithm-C++
//
//  Created by Harsh Yadav on 02/02/22.
//

//#include <stdio.h>
#include <math.h>
#include "iostream"

int reverseNumber(int input){
    int reverseNumber = 0;
    
    while (input>0) {
        int lastDigit = input%10;
        reverseNumber = reverseNumber*10 + lastDigit;
        input = input/10;
    }
    
    return reverseNumber;
}

bool checkArmstrongNumber(int input){
    
    int originalInput = input;
    int sum = 0;
    
    while (input>0) {
        int lastDigit = input%10;
        sum += pow(lastDigit,3);
        input = input/10;
    }
    if (sum == originalInput){
        return true;
    }
    else{
        return false;
    }
}

//Fibencci Sequence
//0,1,1,2,3,5,8,13,...
int fib(int t1, int t2){
    
    return 0;
}
int main(){
    int inputNumber;
    std::cin>>inputNumber;

//    std::cout<<reverseNumber(inputNumber)<<std::endl;
//    std::cout<<checkArmstrongNumber(inputNumber)<<std::endl;
    
    return 0;
}
