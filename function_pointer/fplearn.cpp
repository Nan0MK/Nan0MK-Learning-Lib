#include <iostream>

int addYay(int numIn1, int numIn2){
    int out = numIn1 + numIn2;
    return out;
}
int subYay(int numIn1, int numIn2){
    int out = numIn1 - numIn2;
    return out;
}

// *math is the function pointer. The pointer it's self takes in 2 intagers.
// Whatever function *math points to also has to be an intager function and has to take in 2 intagers.
int (*math)(int, int);

//Idk why this version is any better
typedef int (*opperator)(int, int);

int main(){

    opperator op;// Whatever


    //math = addYay; This would point *math to addYay(). Any integers passed into *math will now be passed into addYay().
    
    int oper;
    std::cin >> oper;
    if(oper == 0){
        math = addYay;
    }
    if(oper == 1){
        math = subYay;
    }

    int a,b;
    std::cin >> a;
    std::cin >> b;
    int answer = math(a, b);

    std::cout << answer << std::endl;

    return 0;
}