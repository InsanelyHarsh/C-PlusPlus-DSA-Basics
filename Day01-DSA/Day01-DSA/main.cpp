//
//  main.cpp
//  Day01-DSA
//
//  Created by Harsh Yadav on 30/05/22.
//

#include <iostream>
using namespace::std;

//number = 5
/*
 printNum(5) -> printNum(4) -> printNum(3) -> printNum(2) -> printNum(1)
 - Base case will execute first, if inner function is called before print.
 - Base case will be called at last, if inner function is called first.
 */

void printNum(int number){
    if (number == 1){
//        std::cout<<"First";
        std::cout<<1<<std::endl;
        return;
    }
    
    printNum(number-1);
    std::cout<<number<<std::endl;
    
}


int getFactorial(int n){
    if (n <= 1){
        return 1;
    };
    
    int x = getFactorial(n-1);
    return x*n;
}

int sumOfNumber(int n){
    if (n <= 1){
        return 1;
    }
    
    return n + sumOfNumber(n-1);
    
}


int fibonacciseries(int n){
    if(n <= 1){
        return 0;
    }
    else if (n == 2){
        return 1;
    }
    
    return fibonacciseries(n-1) + fibonacciseries(n-2);
}
void towerOfHanoi(int numberOfDisks, char src, char helper, char des){
    if (numberOfDisks == 1){
        std::cout<<"Transfer disk "<< numberOfDisks << " from "<<src<<" to "<<des<<" with the help of "<<des<<std::endl;
        return;
    };
    
    towerOfHanoi(numberOfDisks-1, src, des, helper); //moving top n-1 disks to helper pole with the help of destination pole.
    std::cout<<"Transfer disk "<< numberOfDisks << " from "<<src<<" to "<<des<<" with the help of "<<des<<std::endl;
    towerOfHanoi(numberOfDisks-1, helper, src, des);
    
}

void reverseString(std::string str, int index){
    if (index == 0){
        std::cout<<str[index];
        return;
    }
    std::cout<<str[index];
    reverseString(str, index-1);
}

void printNumber(int n){
    if(n <= 0){
        return;
    }
    printNumber(n/10);

    std::cout<<n%10<<std::endl;
     
}

int powerOf(int num, int power){
    if(power <= 0){
        return 1;
    }
//    std::cout<<num<<std::endl;;
    return num*powerOf(num, power-1);
}


void getPowerSets(int arr[],int index){
    if(index <= 3){
        return;
    }
    
//    getPowerSets(<#int *arr#>, <#int index#>)
}



int main(int argc, const char * argv[]) {
//    printNum(5);
    
//    std::cout<<sumOfNumber(10)<<std::endl;

//    std::cout<<getFactorial(5)<<std::endl;

//    std::cout<<fibonacciseries(7)<<std::endl;
    
//    printNumber(938);
    
    std::cout<<powerOf(3, 3)<<std::endl;
    
//    towerOfHanoi(10, 'S', 'H', 'D');
    
//    reverseString("ABCD", 3);
    return 0;
}
