#include<iostream>
#include<algorithm>

int binarySearch(int arr[], int left, int right, int target) {
      //finds the middle of the array
        int mid = left + (right-left)/2;
    
        
    //checks if the middle is  the target if it is the function returns it
    if(arr[mid]==target)
        return mid;
    
    
    //checks if the middle is smaller than the target and if after the pivot moves it is smaller or equal to our target if it isn't it returns the value of mid+1.
    if(arr[mid]<target && arr[mid+1]<= target)
        return binarySearch(arr,left,mid+1,target);
    
    else
    return mid - 1;
    


      
// checks if the pivot our moving will still be bigger or equal to the target if no it returns mid-1
    if(arr[mid-1]>=target && arr[mid]>target)
        return binarySearch(arr,mid-1,right,target);
    
    else 
    return mid +1;



    
    return -1;
}

int main(){

 int T[] = {5,3,6, 2, 8, 7, 4};
    int size = sizeof(T) / sizeof(T[0]);
    int x =  1;
    
    
    std::sort(T, T + size);

  int result = binarySearch(T, 0, size - 1, x);
if(result!=-1){
  std::cout << " indeks liczby najbliższej lub równej x to : " << "  " << result << std::endl;
}
else
{
std::cout << " Nie ma liczby mniejszej lub równej x " << " "  << std::endl;
}




return 0;
}