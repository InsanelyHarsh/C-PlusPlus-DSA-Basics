//
//  main.cpp
//  Day06-DSA
//
//  Created by Harsh Yadav on 04/06/22.
//

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;
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

 
std::vector<int> gradingStudents(std::vector<int> grades) {
    std::vector<int> result;
    for(int i=0;i<grades.size();i++){
        if(grades[i]<34 || grades[i] > 95){
            result.push_back(grades[i]);
        }
        else{
            if(grades[i]%10<3 || grades[i]%10 >7){ //no rounding off
                result.push_back(grades[i]);
            }
            else{ //rounding off
                int x = 5-(grades[i]%10);
                result.push_back((grades[i]+x));
            }
        }
    }
    for(int i=0;i<result.size();i++){
        std::cout<<result[i]<<" ";
    }
    std::cout<<std::endl;
    return result;
}

void bubbleSort(int arr[],int size){
    //perform n-1
    int counter = 1;
    while (counter < size-1) {
        
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
//    std::cout << "Hello, World!\n";
//    int arr[5] = {2,5,1,8,3};
    std::vector<int> ip = {73,
        67,
        38,
        33};
//    selectionSort(arr, 5);
    std::vector<int> x = gradingStudents(ip);
    return 0;
}
