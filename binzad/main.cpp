#include <iostream>
#include <algorithm>


int binary( int arr[] , int left , int right , int target ) {
    int mid = left + (left+right) / 2;
    if(arr[mid]==target){

        return mid;
}
    if(arr[mid]<target){
        return binary(arr,mid+1,right,target);
    }
    else{
        return binary(arr,left,mid-1,target);
    }
     return -1;
}




int mian(){
int T[] = {4,87,23,78,1,0,45,76,86,23,94,52,32,21};
int size = sizeof(T)/sizeof(T[0]);
std::sort(T,T+size) ;

int t=3;
int i = 0;
while(i<t){
int x;
std::cout << "Poadaj x" << std::endl;
std::cin >> x;
int result = binary( T, 0 , size-1 , x);

std::cout << "Jest " << " " << result << " " << " " << " liczb mniejszych od " << " " << x << std::endl;
i++;
}




    return 0;
}

