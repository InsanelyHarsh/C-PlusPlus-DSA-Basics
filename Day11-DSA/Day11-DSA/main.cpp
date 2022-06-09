//
//  main.cpp
//  Day11-DSA
//
//  Created by Harsh Yadav on 09/06/22.
//

#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;

string removeDuplicates(string s) {
    stack<char> st;
    
    for(int i=0;i<s.length();i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else if(s[i] == st.top()){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    
    stack<char> finale;
    while(!st.empty()){
        finale.push(st.top());
        std::cout<<st.top()<<std::endl;
        st.pop();
    }
    
    string result;
    
    while(!finale.empty()){
        std::cout<<finale.top();
        result += finale.top();
        finale.pop();
    }
    
    return result;
}


int calPoints(vector<string>& ops) {
        stack<int> st;
        
        int prev = 0;
        for(int i=0;i<ops.size();i++){
            if(ops[i] == "C"){
                prev = st.top();
                st.pop();
            }
            else if(ops[i] == "D"){
                st.push(prev*2);
            }
            else if(ops[i] == "+"){
                
                int first = st.top();
                st.pop();
                int second = st.top();
                
                st.push(first);
                
                st.push(first+second);
                
            }
            else{ //integer
                stringstream obj;
                int x;
                
                obj << ops[i]; // insert data into obj
                obj >> x; // fetch integer type data
                        
                st.push(x);
//                st.push(ops[i]);
            }
        }
        int result = 0;
        int x = st.size();
        for(int i=0;i<x;i++){
            if(st.empty()){
                break;
            }
            result += st.top();
            st.pop();
        }
        return result;
    }

bool isValid(string s) {
    stack<char> st;
    
    for(int i=0;i<s.length();i++){
        if((s[i] == '(')  || (s[i] == '[') || (s[i] =='{')){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                break;
                return 0;
            }
            else{
                if(s[i] == ')' && st.top() == '('){
                    st.pop();
                }
                else if(s[i] == '}' && st.top() == '{'){
                    st.pop();
                }
                else if(s[i] == ']' && st.top() == '['){
                    st.pop();
                }
                else{
                    return 0;
                }
            }
        }
        
        if(st.empty()){
            return 1;
        }
        return 0;
    }
    return 1;
}
int main(int argc, const char * argv[]) {
    
    std::cout << "Hello, World!\n";
//    vector<string> x = {"5","-2","4","C","D","9","+","+"};
//    std::cout<<calPoints(x)<<std::endl;
    std::cout<<removeDuplicates("abbaca")<<std::endl;
    return 0;
}
