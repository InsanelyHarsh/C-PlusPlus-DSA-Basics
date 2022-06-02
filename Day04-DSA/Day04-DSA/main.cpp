//
//  main.cpp
//  Day04-DSA
//
//  Created by Harsh Yadav on 02/06/22.
//

#include <iostream>
//DAY-04 Strings & More Questions

int getNameLength(char name[]){
    int count = 0;
    for(int i=0;name[i] != '\0';i++){
        count++;
    }
    return count;
}

void reverseString(char name[]){
    int lenth = getNameLength(name)-1;
    int start = 0;
    while(start<lenth){
        char tmp = name[start];
        name[start] = name[lenth];
        name[lenth] = tmp;
        
        start++;
        lenth--;
    }
    
    std::cout<<"Reverse String is: "<<name<<std::endl;
}

char toLowerCase(char input){
    if(input >= 'a' && input <= 'z'){
        return input;
    }
    else{
        char x = input -'A'; //this is the difference
        return x+'a'; //now adding diiference of Ascii value in a;
    }
} //Important

bool checkPalindrome(char name[]){
    int length = getNameLength(name)-1;
    int start = 0;
    
    //if not case sensitive.
    //Changing all char to lower case
    for(int i=0;i<=length;i++){
        name[i] = toLowerCase(name[i]);
    }
    
    while(start<length){
        if(name[start] == name[length]){
            start++;
            length--;
            return 1;
        }
        else{
            break;
        }
    }
    return 0;
} //basic implementation


int main(int argc, const char * argv[]) {
    char inputString[20];
    //Char Array will print until \0 comes and stops..
    //Any Space,Enter,Tab etc.
    
    //if Pressed Enter/Space/Tab is Entered then \0 will come.
    /*
     Enter you name:
     Harsh Mohan
     Your name is: Harsh
     Program ended with exit code: 0
     */
    
    std::cout<<"Enter you name: "<<std::endl;
    std::cin>>inputString;
    

    std::cout<<"Your name is: "<<inputString<<std::endl;

    std::cout<<"Length of your Name is: "<<getNameLength(inputString)<<std::endl;
    
    reverseString(inputString);
    
    std::cout<<"Checking Palindrome Condition: "<<checkPalindrome(inputString)<<std::endl;
    return 0;
}


