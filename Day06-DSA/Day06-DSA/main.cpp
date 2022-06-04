//
//  main.cpp
//  Day06-DSA
//
//  Created by Harsh Yadav on 04/06/22.
//

#include <iostream>

//DAY-06
//MARK: Sorting Algorithms and More Questions on Linked List, Array, String


void selectionSort(int arr[],int size){ //taking pointer of array.
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    for(int i=0;i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    
    std::cout<<std::endl;
}

void bubbleSort(int arr[],int size){
    //perform n-1
    int counter = 1;
    while (counter < size-1) {
        
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int arr[5] = {2,5,1,8,3};
    selectionSort(arr, 5);
    return 0;
}
