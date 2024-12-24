#include<iostream>
using namespace std;

unsigned int fibonacci(unsigned int x); 
    
int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}
unsigned int fibonacci(unsigned int x){
    if (x <= 1) {
        return x;
    } else {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}