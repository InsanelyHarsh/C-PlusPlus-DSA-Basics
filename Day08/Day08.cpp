#include <iostream>

// ! # $ % & * @ ^ ~ 
/*
Input: 
N = 5
nuts[] = {@, %, $, #, ^}
bolts[] = {%, @, #, $ ^}
Output: 
# $ % @ ^
# $ % @ ^
*/
int main(int argc, char const *argv[])
{
// #ifndef ONLINE_JUDGE
// 		freopen("inuput.txt","r",stdin);
// 		freopen("inuput.txt","w",stdin);
// #endif
	// int n;
	// std::cin>>n; 

	// int nuts[n];
	// int bolts[n];

	// for(int i=0;i<n;i++){
	// 	std::cin>>nuts[i];
	// }

	// for(int i=0;i<n;i++){
	// 	std::cin>>blots[i];
	// }

	/*
	Input:
	N = 5
	arr[] = {4,0,2,1,3}

	Output: 3 4 2 0 1
	Explanation: 
	arr[arr[0]] = arr[4] = 3
	arr[arr[1]] = arr[0] = 4
	arr[arr[2]] = arr[2] = 2
	arr[arr[3]] = arr[1] = 0
	arr[arr[4]] = arr[3] = 1
	and so on.
	*/

	//
	// int n;
	// std::cin>>n;

	int arr[5];
	arr[0] = 4;
	arr[1] = 0;
	arr[2] = 2;
	arr[3] = 1;
	arr[4] = 3;
	// for(int i=0;i<n;i++){
	// 	std::cin>>arr[i];
	// }
	std::string s = "hello";
	int x = s.length();
	for(int i;i<x;i++){
		std::cout<<s[i]<<"**";
	}
	std::cout<<x;
	std::cin>>x;
	std::cout<<"fuck sake";
	return 0;
}