//
//  main.cpp
//  Day08-DSA
//
//  Created by Harsh Yadav on 06/06/22.
//

#include <iostream>
#include <vector>
using namespace std;

//MARK: -1108. Defanging an IP Address
string defangIPaddr(string address) {
        string result;
        for(int i=0;i<address.length();i++){
            if(address[i] == '.'){
                result += "[.]";
            }
            else{
                result += address[i];
            }
        }
        return result;
}

//MARK: -1816. Truncate Sentence
string truncateSentence(string s, int k) {
        string result;
        int count = k-1;
        int x = 0;
        for(int i=0;i<s.length();i++){
            
            if(s[i] == ' '){
                if(count == 0){
                        // result = s.substr(0,x);
                    break;
                }
                count -= 1;
            }
            
            x +=1;
            result = s.substr(0,x);
        }
        return result;
    }

//MARK: -
vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
    vector<int> result(n,0);
    
    for(int i=0;i<result.size();i++){
        std::cout<<result[i]<<std::endl;
    }
    
    for(int i=0;i<bookings.size();i++){
        
        int start = bookings[i][0]; //2
        int end = bookings[i][1]; //5
        int seats = bookings[i][2]; //25
        std::cout<<"seats "<<seats<<std::endl;
        for(int j=start;j<=end;j++){ //2,3,4,5 -> i=1,2,3,4
            
            result[j-1] += seats;
            std::cout<<result[j-1]<<" ";
        }
        std::cout<<std::endl;
    }
    
    for(int i=0;i<result.size();i++){
        std::cout<<result[i]<<std::endl;
    }
    
    return result;
}

//MARK: -2176. Count Equal and Divisible Pairs in an Array
int countPairs(vector<int>& nums, int k) {
    int result=0;
    
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            
            if( (nums[i] == nums[j]) && ( (i*j)%k  == 0 ) ){
                result += 1;
            }
        }
    }
    
    return result;
}

//MARK: -1773. Count Items Matching a Rule
int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    int count = 0;
    int j = 0;
        //item[[type,color,name]]
    
        //ruleKey = type/color/name
    if(ruleKey == "color"){
        j = 1;
    }
    else if(ruleKey == "type"){
        j=0;
    }
    else if(ruleKey == "name"){
        j=2;
    }//ruleValue = Value of associated with ruleKey
    
    
    for(int i=0;i<items.size();i++){
        if(items[i][j] == ruleValue){
            count += 1;
        }
    }
    
    
        //return number of matches for given ruleKey and ruleValue
    return count;
}

//MARK: -
vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> target;
    for(int i=0;i<nums.size();i++){
        std::cout<<index[i]<<" ";
//        target[index[i]] = nums[i];
    }
    return target;
}

//MARK: -
string restoreString(string s, vector<int>& indices) {
    string result(s.size(),' '); //empty string.
    
    for(int i=0;i<indices.size();i++){
//        std::cout<<"i: "<<i<<std::endl;
        int x = indices.at(i);
        std::cout<<"At: "<<x<<std::endl;

        std::cout<<"in: "<<s[x]<<std::endl;
        result[i] = s[x];
        
//        std::cout<<"result: "<<result<<std::endl;
    }
    
    return result;
    
    
    /*
     string ans(s.size(), 'a');
     
     for(int i = 0; i < indices.size(); i++){
         ans[indices[i]] = s[i];
     }
     
     return ans;
     */
    
}

//MARK: -1572. Matrix Diagonal Sum
int diagonalSum(vector<vector<int>>& mat) {
    
    int result=0;
    int n = (int)mat.size();
    
    for(int i=0;i<mat.size();i++){
            result += mat[i][i];
            result += mat[i][n-i-1];
    }
    
    if((n+1)%2==0){
        return result-mat[(n+1)/2-1][(n+1)/2-1];
    }
    else{
        return result;
    }
}

//MARK: -1470. Shuffle the Array
vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> result;
    
    for(int i=0;i<n;i++){
        result.push_back(nums[i]);
        result.push_back(nums[i+n]);
    }
    
    return result;
}

//MARK: -1828. Queries on Number of Points Inside a Circle
vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
    vector<int> result(queries.size(),0);
    
    for(int i=0;i<queries.size();i++){
        
        int x1 = queries[i][0];
        int y1 = queries[i][1];
        int r = queries[i][2];
        
        for(int j=0;j<points.size();j++){
            
            int x = points[j][0];
            int y = points[j][1];
            
            int alpha = (x-x1)*(x-x1) + (y-y1)*(y-y1) - (r*r);
            
            if(alpha<=0){
                result[i] += 1;
            }
        }
    }
    
    return result;
}

//MARK: -1769. Minimum Number of Operations to Move All Balls to Each Box
vector<int> minOperations(string boxes) {
    vector<int> result(boxes.size(),0);
    
    for(int i=0;i<boxes.size();i++){
        int steps = 0;
        for(int j=0;j<boxes.size();j++){
            
            if(boxes[j] == '1'){ //box has ball
                steps += abs(i-j);
            }//number of steps will be difference b/w indices.
            
        }
        result[i] = steps;
    }
    
    return result;
}

//MARK: -832. Flipping an Image
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    //reverse
    //bit flip
//         vector<vector<int>> result(image.size(),vector<int>(image.size()));
//         int n = image.size();
    
//         for(int i=0;i<image.size();i++){
        
//             int start = 0;
//             int end = image[i].size();

//             while(start < end){
            
//                 //reverse
//                 int temp = image[i][start];
//                 image[i][start] = image[i][end];
//                 image[i][end] = temp;
                
//                 //bit flip
//                 if(image[i][start] == 1){
//                         image[i][start] = 0;
//                 }
//                 else if(image[i][start] == 0){
//                     image[i][start] = 1;
//                 }
            
            
//                 if(image[i][end] == 0){
//                     image[i][end] == 1;
//                 }
//                 else if(image[i][end] == 0){
//                     image[i][end] = 0;
//                 }
            
//                 start++;
//                 end--;
//             }
        
//             result[i] = image[i];
//         }
    
//         return result;
//     }
    
    
    int rows = (int)image.size();
    for(int r=0; r<rows; r++)
    {
        for(int i=0, j=(int)image[r].size()-1; i<=j; i++,j--)
        {
            int temp = image[r][i];
            image[r][i] = !image[r][j];
            image[r][j] = !temp;
        }
    }
    return image;
} //doubt

///Stacks,Linked List Questions

//Stack using Array
class CustomStack{
public:
    int *arr;
    int size;
    int top;
    
    CustomStack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    
    void pop(){
        if(top == -1){
            std::cout<<"empty Stack "<<std::endl;
        }
        else{
            top = top-1;
        }
    }
    
    void push(int element){
        if(top+1 < size){
            top++;
            arr[top] = element;
        }
        else{
            std::cout<<"stackOverFlow"<<std::endl;
        }
    }
    
    int peek(){
        return arr[top];
    }
    
    bool isEmpty(){
        if(top == -1){
            return 1;
        }
        else{
            return 0;
        }
    }
};
//Stack using STL

//Stack using Linked List

struct Node{
    Node *next;
    int data;
};

class LLStack{
public:
    int size;
    Node* top;
    
    LLStack(int size){
        this->size = size; //linked list is dynamic...
        top = NULL;
    }
    
    void pop(){
        
    }
    
    int peek(){
        return top->data;
    }
    
    void push(){
        
    }
    
    void isEmpty(){
        
    }
};





int main(int argc, const char * argv[]) {

//    vector<vector<int>> input = {{1,2,10},{2,3,20},{2,5,25}};
//    vector<int> result = corpFlightBookings(input, 5);
    
//    vector<int> nums = {1,2,3,4,0};
//    vector<int> index = {0,1,2,3,0};
//    vector<int> result = createTargetArray(nums, index);
    
//    vector<int> indices = {4,5,6,7,0,2,1,3};
//    vector<int> indices = {0,1,2};
//    string result = restoreString("abc", indices);
//    for(int i=0;i<result.length();i++){
//        std::cout<<result[i]<<" ";
//    }
//    string x = result;
    
//    std::cout<<truncateSentence("chopper is not a tanuki", 5)<<std::endl;
    
//    vector<vector<int>> input = {{1,1,1,1},
//        {1,1,1,1},
//        {1,1,1,1},
//        {1,1,1,1}
//
//    };
//    std::cout<<diagonalSum(input);
    
    vector<int> x = minOperations("110");
    for(int i=0;i<x.size();i++){
        std::cout<<x[i]<<" ";
    }
    return 0;
}
