//
//  main.cpp
//  DSA-Algorithm-C++
//
//  Created by Harsh Yadav on 02/02/22.
//

//MARK: Pattern

#include <iostream>
//MARK: Rectangles
/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 
 *****
 *   *
 *   *
 *   *
 *****
 */
/*
int main(int argc, const char * argv[]) {

    int rows = 0,coulmns = 0;
    int r,c;

    std::cin >> rows;
    std::cin >> coulmns;

    //MARK: Rectangle

    for(r = 1; r <= rows; r++){
        for(c = 1; c<= coulmns; c++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }

    //MARK: Hollow Rectangle

    for(r=1; r<=rows; r++){
        for(c=1; c<=coulmns; c++){
            if(r==1 || r == rows){
                std::cout<<"*";
            }
            else if(c == 1 || c == coulmns){
                std::cout<<"*";
            }
            else{
                std::cout<<" ";
            }
        }
        std::cout<<std::endl;
    }

    return 0;
}
*/

//MARK: Pyraminds
/*
 
*****
****
***
**
*
 
*
**
***
****
*****
 
 
 1
 22
 333
 4444
 55555
 
 
 Floyd's Triangle
 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14 15
 */

//int main(int argc, const char * argv[]){
    
//    int n = 0;
//    std::cin>>n;
    
//    for(int i=n; i >= 1; i--){
//        for(int j= 1; j<=i; j++){
//            std::cout<<"*";
//        }
//        std::cout<<std::endl;
//    }
    
//    for(int r = 1; r<=n; r++){
//        for(int j = 1; j<=n; j++){
//            if(j<=n-r){
//                std::cout<<" ";
//            }
//            else{
//                std::cout<<"*";
//            }
//        }
//        std::cout<<std::endl;
//    }
    
//    for(int i = 1; i<=n; i++){
//        for(int j = 1; j<=i; j++){
//            std::cout<<i;
//        }
//        std::cout<<std::endl;
//    }
    
//    int count = 0;
//    for(int i = 1; i<=n; i++){
//        for(int j = 1; j<=i; j++){
//            count += 1;
//            std::cout<<count<<" ";
//
//        }
//        std::cout<<std::endl;
//    }
    
//    return 0;
//}
