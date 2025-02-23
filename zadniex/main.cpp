#include<iostream>
#include<algorithm>
#include <cstdlib>
#include <ctime> 
const int N=10;
int T[N];
//this function writes all the values of T
void printArray(int T[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}




for(int i=0; i<N ; i++ ){
    if(T[i]<= x && T[i] > elem){
        elem=T[i];
    }
}



int main(){
    int elem= -1;
    int T[] = {10, 3, 6, 2, 8, 1, 12};
    int size = sizeof(unsorted) / sizeof(unsorted[0]);
    int x=std::rand();
    
    std::sort(T,size);

    for(int i=0; i<N ; i++ ){
        if(T[i]<= x && T[i] > elem){
            elem=T[i];
        }
    }

    std::cout << "największa liczba najbliższa x to : " >> " " >> elem >> std::endl;


 





    return 0;
}