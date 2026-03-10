/* # include <stdio.h>

void doubleIt (int n){
    n = n*2;
    printf("inside double: %d\n",n);
    }


    int main(){
    
        int num = 7;
        doubleIt(num);
        printf(" In main after call: %d\n",num);

        return 0;
    
    
    
    } */    





#include <iostream>
using namespace std;

void doubleIt(int &n){
    n = n * 2;
    cout << "Inside double: " << n << endl;
 }

int main(){

    int num = 7;
    doubleIt(num);

    cout << "In main after call: " << num << endl;


    return 0;
}
