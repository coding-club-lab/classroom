#include <iostream>

void collatz(int n) {
    while (n!=1) {
        std::cout<<n<<" ";
        if (n%2==0) {
            n=n/2;
        } else {
            n=3*n+1;
        }
    }
    std::cout<<1<<std::endl;
}

int main() {
    int n;
    std::cout<<"n=";
    std::cin>>n;
    collatz(n);
}