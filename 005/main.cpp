#include <iostream>
#define PI 3.1416
#define REP(n) for(int i = 0; i < n; i++) 
int main(void)
{
    int n=5;
    REP(n){
        std::cout << i+PI;
    }
    return 0;
}