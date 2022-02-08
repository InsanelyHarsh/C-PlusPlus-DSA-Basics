#include <iostream>
//MARK: Stacks

// int max_size = 123;

int A[123];
int top = -1;



void pushStack(int value){
	// handling Stack overflow
	if(top == 123-1){
		std::cout<<"ERROR: stack overflow"<<std::endl;
	}

	/*
	top = top + 1;
	A[top] = value;
	*/
	//or
	A[++top] = value;
	
}
void popStack(){
	if(top> -1){
		top = top - 1; //we do not care what value is stored in array(),we will access only top value.
	}
	else{
		std::cout<<"ERROR: Empty Stack."<<std::endl;
	}
}

int Top(){
	return A[top];
}

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}