/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "cacheManager.h"

using namespace std;

int main() {
    CacheManager cacheManager(2);
    
    cacheManager.insertVal(1, 1);
    cacheManager.insertVal(2,2);
    
    cout<<cacheManager.getVal(1)<<endl;
    cout<<cacheManager.getVal(2)<<endl;
    cout<<cacheManager.getVal(7)<<endl;
    
    cacheManager.insertVal(3,3);
    
    cout<<cacheManager.getVal(1)<<endl;
    cout<<cacheManager.getVal(2)<<endl;
    cout<<cacheManager.getVal(3)<<endl;
    
    cacheManager.insertVal(3,33);
    cacheManager.insertVal(4,4);
    
    cout<<cacheManager.getVal(4)<<endl;
    cout<<cacheManager.getVal(3)<<endl;
   
    return 0;
}
