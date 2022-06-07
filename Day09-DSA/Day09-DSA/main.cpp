//
//  main.cpp
//  Day09-DSA
//
//  Created by Harsh Yadav on 07/06/22.
//

#include <iostream>
#include <vector>
#include <math.h>
#include <iterator>
#include <map>

using namespace::std;


//MARK: -1290. Convert Binary Number in a Linked List to Integer
struct ListNode {
   int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int getDecimalValue(ListNode* head) {
        
        ListNode* temp = head;
        vector<int> dataArray(0,0);
        int result=0;
        
        while(temp != NULL){
            dataArray.push_back(temp->val);
            temp = temp->next;
        }
        
        int x = dataArray.size()-1;
        for(int i=0;i<dataArray.size();i++){
            result += pow(2,x)*dataArray[i];
            x -= 1;
        }
        return result;
    }




int main(int argc, const char * argv[]) {
    // insert code here...
    map<int,int> freq;
    freq[0] = 1; //0 key 1 value
    std::cout << "Hello, World!\n";
    return 0;
}
