#include <iostream>
using namespace std;
#include<climits>


int MaxSubarraySum(int *a, int n){
       
    int MaxProduct=INT_MIN;
    
    for(int i=0;i<n;i++){
        
        int currSum=a[i];
        for(int j=i+1;j<=n;j++){
            
            currSum*=a[j];
            if(currSum<0){
                currSum=0;
            }
            MaxProduct=max(currSum,MaxProduct);
        }
        
    }
    
    return MaxProduct;
}    

int main(){
    
    int arr[]={-2,-1,0};
    
    int size= sizeof(arr)/sizeof(int);
    
    
    cout <<MaxSubarraySum(arr, size)<<endl;
    
    return 0;
}