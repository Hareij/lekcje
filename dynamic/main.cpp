#include <iostream>

int fibo(int n){

int prevPrev, prev, curr;

prevPrev = 0;
prev = 1;
curr = 1;
for (int i = 2; i <= n; i++) {
    curr = prev + prevPrev;
    prevPrev = prev;
    prev = curr;
}

return curr;
}

int main() {
int n = 5;
std:: cout << fibo(n);
return 0;
}


