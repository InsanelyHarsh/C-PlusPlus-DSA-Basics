//
//  main.cpp
//  Day03-DSDA
//
//  Created by Harsh Yadav on 01/06/22.
//  \\    //
//   \\  //
//    \\//
//DAY-03
//Solving more problems.
#include <iostream>
#include <vector>

//vector & arrow pointer/symbol
void reverseVectorArray(std::vector<int> *a){

    std::vector<int> &b = *(a);
    std::cout<<"B Front "<<b.front()<<std::endl;
    
    int start = 0;
    int end = (int)b.size()-1;

    
    while(start<end){
        int tmp = (*a)[start];
        (*a)[start] = (*a)[end];
        (*a)[end] = tmp;
        
//        int tmp = b[start];
//        b[start] = b[end];
//        b[end] = tmp;
        
        start++;
        end--;
    }
}

//Array
void reverseArray(int arr[],int size){ //passing pointer.
    
    
    
//    std::cout<<arr + 1<<std::endl; //Pointer______Memory address
//    std::cout<<*(arr + 1)<<std::endl; //deRefer
//
//    std::cout<<arr[2]<<std::endl; //Value
//    std::cout<<&(arr[2])<<std::endl; //Memory Address
    int start = 0;
    
    while(start < size-1){
        int tmp = arr[start];
        arr[start] = arr[size-1];
        arr[size-1] = tmp;
            start = start + 1;
            size = size - 1;
    }
    
//    std::cout<<arr[0];
}


//2d array
void rowWiseSume(int arr[][4],int row, int clm){
    for(int i=0; i<row;i++){
        int rowSum = 0;
        for(int j=0;j<clm;j++){
            rowSum += arr[i][j];
            //row = 0 -> clm = 0,1,2
            //row = 1 -> clm = 0,1,2
        }
        
        std::cout<<"Sum of "<<i+1<<" Row is "<<rowSum<<std::endl;
    }
}

void clmWiseSume(int arr[][4],int row, int clm){
    
    for(int i=0;i<clm;i++){
        int clmSum = 0;
        for(int j=0;j<row;j++){
            clmSum += arr[j][i];
            //clm = 0 -> row = 0,1,2
            //clm = 1 -> row = 0,1,2
        }
        
        std::cout<<"Sum of "<<i+1<<" Column is "<<clmSum<<std::endl;
    }
}

std::vector<int> wavePrint(int arr[][4],int row, int clm){
    
    std::vector<int> result;
    
    for(int i=0;i<clm;i++){
        
        if(i%2 == 0){
            for(int j=0;j<row;j++){
                result.push_back(arr[j][i]);
//                std::cout<<arr[j][i]<<std::endl;
            }
//            std::cout<<std::endl;
        }
        
        else{
            for(int j=row-1;j>=0;j--){
                result.push_back(arr[j][i]);
//                std::cout<<arr[j][i]<<std::endl;
            }
//            std::cout<<std::endl;
        }
        
    }
    
    return result;
}

void spiralPrint(int arr[][4],int row, int clm){
    std::vector<int> finalResult;
    int total = row*clm;
    int count = 0;
    
    int firstRow = 0;
    int firstColumn = 0;
    
    int lastRow = row-1;
    int lastColumn = clm-1;
    
    while(count<total){
        
        //First Row
        for(int j=0;j<lastColumn;j++){
            std::cout<<arr[firstRow][j]<<" ";
        }
        firstRow += 1;
        count++;
        
        //Last Column
        for(int i=0;i<lastRow;i++){
            std::cout<<arr[i][lastColumn]<<" ";
        }
        firstColumn += 1;
        count++;
        
        //Last Row
        for(int j=lastColumn;j>=firstColumn;j--){
            std::cout<<arr[lastRow][j]<<" ";
        }
        lastRow -= 1;
        count++;
        
        //First Column
        for(int i=lastRow;i>=firstRow;i--){
            std::cout<<arr[i][firstColumn]<<" ";
        }
        count++;
//        firstRow += 1;
        firstColumn += 1;
        
//        lastRow -= 1;
//        lastColumn -= 1;
    }
}

void printSubArray(int arr[6][6], int row, int clm){

    for(int k=0;k<4;k++){
        
        for(int r=0;r<4;r++){
            for(int c=0;c<4;c++){ //r=0 -> c=0,1,2,3
                
                //print 2d array...
                for(int i=r;i<3+r;i++){
                    std::cout<<arr[i][k]<<" ";
                }
                std::cout<<std::endl;
                
                
            }
        }
        
    }
    
}

void leftRotate(int arr[], int length,int numberOfRotations){

    for(int k=0;k<numberOfRotations;k++){
        for(int i=0;i<length-1;i++){
            int tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
        }
    }
    
    for(int i=0;i<length;i++){
        std::cout<<arr[i]<<" ";
    }
}
//MARK: imp
int diagonalDifference(std::vector<std::vector<int>> arr) {
    int size = (int)arr.size();
    
    //left to right
    int x = 0;
    for(int i=0;i<arr.size();i++){
        x += arr[i][i];
        
    }
    
    //right to left
    int y = 0;
    for(int i=0;i<arr.size();i++){
        y += arr[i][size-i-1];
        
    }
    std::cout<<"x is :"<<x<<std::endl;
    std::cout<<"y is :"<<y<<std::endl;
    int result = x-y;
    if (result>=0){
        return result;
    }
    else{
        return -result;
    }
}



void plusMinus(std::vector<int> arr) {
    float count = arr.size();
    int positives = 0,negatives = 0.0,zeroes = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            positives += 1;
        }
        else if(arr[i]<0){
            negatives += 1;
        }
        else{
            zeroes += 1;
        }
    }
    
    std::cout<<positives/count<<std::endl;
    std::cout<<negatives/count<<std::endl;
    std::cout<<zeroes/count<<std::endl;
}

int main(int argc, const char * argv[]) {
    
//    std::cout << "Hello, World!\n";
    
//    int arr[5] = {2,53,62,15,4};
//    reverseArray(arr, 5);
//    for(int i = 0;i<5;i++){
//        std::cout<<arr[i]<<std::endl;
//    }
//    int test = 23;
    
//    std::vector<int> a;
    
//    a.push_back(test);
//    a.push_back(3);
//    a.push_back(45);
//    std::cout<<a.front()<<std::endl;
//    reverseVectorArray(&a);
   
    //MARK: 2d Array
//    int arr1[5] = {5,3,24,52,18};
//    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//    int arr2[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    
//    rowWiseSume(arr,3,4);
    
//    clmWiseSume(arr, 3, 4);
    
//    std::cout<<"Wave Print is: ";
//    for(int i=0;i<wavePrint(arr, 3, 4).size();i++){
//        std::cout<<wavePrint(arr, 3, 4)[i]<<" ";
//    }
//    std::cout<<std::endl;
    
//    std::cout<<"Spiral Print: ";
//    spiralPrint(arr2, 4, 4);
    
    int arr[6][6] = {
        1, 1, 1, 0, 0, 0,
        0, 1, 0, 0, 0, 0,
        1, 1, 1, 0, 0, 0,
        0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0,

    };
//    printSubArray(arr, 6, 6);
    
//    leftRotate(arr1, 5,2);
    
//    std::vector<std::vector<int>> v(3);
    
//    std::vector<std::vector<int>> ok   {1, 2, 3, 4, 5, 6,9, 8, 9};
    
    
    
    
//    std::vector<std::vector<int>> vect
//       {
//           {1, 2, 3},
//           {4, 5, 6},
//           {7, 8, 9}
//       };
//
//    std::cout<<diagonalDifference(vect);
    
    
    std::vector<int> plus = {-4, 3, -9, 0, 4, 1};
    plusMinus(plus);
    return 0;
}



//Sovled: 13 Question on HackerRank
