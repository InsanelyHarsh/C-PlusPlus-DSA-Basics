//
//  main.cpp
//  C++DSA-Algorithm-Day03
//
//  Created by Harsh Yadav on 04/02/22.
//

#include <iostream>
#include <string>
using namespace std;

//MARK: Day 03

//Selection Sort
int selectionSort(){
    return 0;
}

int FirstFactorial(int num) {
  int final = 1;
  for(int i = num; i > 1; i--){
    final = final*i;
  }
  return final;
}



int main(int argc, const char * argv[]) {

    int num;
    std::cout << "Input: ";
    std::cin>>num;

    std::cout << "Output: ";
//    std::cout << FirstFactorial(num)<<std::endl;

    int arr[num];
    for(int i = 0; i<num; i++){
        std::cin>>arr[i];
    }

    //Bubble Sort
    /*
     Reapetedly swap two adjacent element if they are in wrong order.
     n-1
     n-2
     n-3
     n-4
     */
    
    
    //Selection Sort
    /*
     Find the minimum element in array and swap it with element at the beginning
     
     7,2,4,1,9
     ->
     */
    for(int i=0; i<num-1; i++){
        for(int j=i+1; j<num-1-i; j++){
            if(arr[j]>arr[i]){
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i = 0; i<num; i++){
        std::cout<<arr[i]<<" ";
    }

    return 0;
}

//int main(){
//    int n;
//    std::cin>>n;
//
//    int inputArr[n];
//    for(int i=0;i<n;i++){
//        std::cin>>inputArr[i];
//    }
//
//    int final = inputArr[0];
//    for(int i=0; i<n; i++){
//        if (final<inputArr[i]){
//            final = inputArr[i];
//        }
//    }
//    std::cout<<final;
//    return final;
//}
