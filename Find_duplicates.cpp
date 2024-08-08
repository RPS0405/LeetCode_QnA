#include <iostream>
using namespace std;


int duplicate(int *a, int size, int target){
       int start = 0, end = size-1;
       while (start <= end) {
       int mid = (start + end) / 2;
       if (a[mid] == target) {
       return mid;
     }
      if (a[start] <= a[mid]) {
         if (a[start] <= target && target < a[mid]) {
           end = mid - 1;
          }  
          else {
           start = mid + 1;
          }
       } 
      
        else {
         if (a[mid] < target && target <= a[end]) {
          start = mid + 1;
              } else {
         end = mid - 1;
          }
        }
            }
      return -1;
    }
    
    

int main(){
    
    int arr[]={4,5,6,7,0,1,2};
    
    int size= sizeof(arr)/sizeof(int);
    int key=3;
    
    cout <<duplicate(arr, size, key)<<endl;
    
    return 0;
}