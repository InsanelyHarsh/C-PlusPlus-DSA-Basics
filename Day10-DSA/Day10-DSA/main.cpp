//
//  main.cpp
//  Day10-DSA
//
//  Created by Harsh Yadav on 08/06/22.
//

#include <iostream>
#include <map>
#include <unordered_map>

#include <stack>
#include <queue>
using namespace std;




struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//MARK: - 217. Contains Duplicate
bool containsDuplicate(vector<int>& nums) {
        std::map<int,int> freq;//key-> element  value->freq of appearing
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        
        for(auto& [element,fr]:freq){
            if(fr>1){
                return 1;
                break;
            }
        }
        return 0;
        // for (int i = 1; i < nums.size(); ++ i) {
        //     for (int j = 0; j < i; ++ j) {
        //         if (nums[i] == nums[j]) {
        //             return true;
        //         }
        //     }
        // }
        // return false;
}

//MARK: - 2130. Maximum Twin Sum of a Linked List
int pairSum(ListNode* head) {

        int maxSum=0;
        vector<int> list(0);
        
        ListNode* temp = head;
        while(temp != NULL){
            list.push_back(temp->val);
            temp = temp->next;
        }
        
        for(int i=0;i<=((list.size()/2) -1);i++){
            if(maxSum < (list[i]+list[list.size()-1-i])){
                maxSum = (list[i]+list[list.size()-1-i]);
            }
        }
        return maxSum;
}

//MARK: - 771. Jewels and Stones
int numJewelsInStones(string jewels, string stones) {
    map<char,int> stone; //stone,stone freq in stones
    
    for(int i=0;i<stones.length();i++){
        stone[stones[i]]++;
    }
    
    int result =0;
    
    for(int i=0;i<jewels.length();i++){
        if (stone.find(jewels[i]) != stone.end()) {
            result += stone[jewels[i]];
        }
    }
    
    return result;
}

//MARK: - 1721. Swapping Nodes in a Linked List
ListNode* swapNodes(ListNode* head, int k) {
    //swap k with n-k+1
    
    ListNode* temp = head;
    int length=0;
    ListNode* forward;
    ListNode* backward = head;
    
    while(temp != NULL){//length of linked list and Kth node
        length++;
        if(length == k){ //kth node from start
            forward = temp;
        }
        temp = temp->next;
    }
    
    
    int x = 1;
    while(x != length-k+1){//get the (n-k+1)th node from starting, Kth from back
        x++;
        backward = backward->next;
    }
    
    //swapping values
    int y = forward->val;
    forward->val = backward->val;
    backward->val = y;
    
    temp = head;
    return temp;
    
}

//MARK: - 2095. Delete the Middle Node of a Linked List
ListNode* deleteMiddle(ListNode* head) {
    
    ListNode* temp = head;
    int length = 0;
    
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    
    int midNode;
    if(length%2 != 0){ //length = 7, middle node = 4
        midNode = (length+1)/2;
    }
    else{
        midNode = length/2+1;
    }
    
    int tmp = 1;
    temp = head;
    
    if(length == 1){ //single node Linked List;
        head = NULL;
        return head;
    }
    
    while(tmp != midNode-1){ //previous to mid node
        temp = temp->next;
        tmp++;
    }
    
    ListNode* mid = temp->next;
    temp->next = mid->next;

    return head;
}

//MARK: - 1614. Maximum Nesting Depth of the Parentheses
int maxDepth(string s) {
    
    int ans=0;
    int mx=0;
    stack<char>st;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            st.push(s[i]);
            ans++;
        }
        else if(s[i]==')')
        {
            st.pop();
            ans--;
        }
        mx=max(mx,ans);
    }
    return mx;
}

//MARK: -2058. Find the Minimum and Maximum Number of Nodes Between Critical Points
vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    ListNode* current = head->next;
    ListNode* prev = head;
    vector<int> criticalPoint(0);
    int count = 1;
    while(current != NULL){
        ListNode* next = current->next;
        if(next == NULL){
            break;
        }
        if(current->val>next->val && current->val>prev->val){ //maxima
            criticalPoint.push_back(count);
        }
        else if((current->val<next->val) && (current->val<prev->val)){ //minima
            criticalPoint.push_back(count);
        }
        count++;
        current = current->next;
        prev = prev->next;
    }
    
    vector<int> result(0);
    
    if(criticalPoint.size() < 2){
        result.push_back(-1);
        result.push_back(-1);
        return result;
    }
    else{
        int maxi=INT_MIN;
        int mini=INT_MAX;
        
        maxi =criticalPoint[criticalPoint.size()-1]-criticalPoint[0];
        for(int i=1;i<criticalPoint.size();i++){
            mini = min(criticalPoint[i]-criticalPoint[i-1],mini);
        }
        // for(int i=0;i<criticalPoint.size();i++){
        //     for(int j=i+1;j<criticalPoint.size();j++){
        //         int x = criticalPoint[j]-criticalPoint[i];
        //         if(x<mini){
        //             mini = x;
        //         }
        //         if(x>maxi){
        //             maxi = x;
        //         }
        //     }
        // }
        result.push_back(mini);
        result.push_back(maxi);
        return result;
    }
}



int main(int argc, const char * argv[]) {
    
    std::stack<int> stack;
    std::queue<int> q;
    q.push(3);
    q.pop();
    q.size();
    q.empty();
    q.back();
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);
    
    stack.pop();
    stack.pop();
    std::cout<<stack.top()<<std::endl;
    stack.empty();
    std::cout << "Hello, World!\n";
    
    std::map<int,int> freq;
    
    std::cout<<maxDepth("(1)+((2))+(((3)))")<<std::endl;
    freq[3] = 34;
    return 0;
}
