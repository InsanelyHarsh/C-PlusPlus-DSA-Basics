//
//  main.cpp
//  C++DSA-Algorithm-Day02
//
//  Created by Harsh Yadav on 03/02/22.
//

#include <iostream>
//MARK: Searching in Arrays

//Linear Search
int linearSearch(int arr[],int n,int key){
    for(int i = 0; i<n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}


//Binary Search
int binarySearch(int arr[],int n,int key){
    int startingPoint;
    int endPoint;
    
    startingPoint = 0;
    endPoint = n-1;
    
    while (startingPoint <= endPoint) {
        
        int midPoint = (startingPoint+endPoint)/2;
        
        if (arr[midPoint] == key){
            return midPoint;
        }
        else if (arr[midPoint] < key){
            startingPoint = midPoint + 1;
        }
        else if (arr[midPoint] > key){
            endPoint = midPoint - 1;
        }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    
    int n;
    std::cout<< "Enter Size of Array: ";
    std::cin>>n;
    
    int arr[n];
    std::cout<<"Enter elements of Array: ";
    for(int i = 0;i<n;i++){
        std::cin>>arr[i];
    }
    
    int key;
    std::cout<<"Enter key: ";
    std::cin>>key;
    
//    MARK: Linear Search
    if (linearSearch(arr, n, key) == -1){
        std::cout<<"Sorry, The key you are looking is not present. :(";
    }
    else{
        std::cout<<"The Key you are looking is found at:"<<linearSearch(arr, n, key)<<std::endl;
    }
    
//    MARK: Binary Search
    if (binarySearch(arr, n, key) == -1){
        std::cout<<"Sorry, The key you are looking is not present. :(";
    }
    else{
        std::cout<<"The Key you are looking is found at: "<<linearSearch(arr, n, key)<<" Index."<<std::endl;
    }
    
    return 0;
}
//MARK: Summary of DAY
/*
 Not much progress today. 30-40 minutes of study today.
 Learning: Sorting Arrays => Selection Sort
 */
