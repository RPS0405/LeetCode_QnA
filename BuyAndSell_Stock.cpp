#include <iostream>
using namespace std;
#include <climits>

int maxProfit(int *a, int n){

    int maximum=INT_MIN;
    
    for(int i=1;i<=n;i++){
        
        for(int j=0;j<i;j++){
            int currMin=a[i]-a[j];
            maximum=max(maximum,currMin);
        }
    }
    
    return maximum;

}
 
int main(){

    int arr[]={7,1,5,3,6,4};
    int size= sizeof(arr)/ sizeof(int);
    

    cout<<maxProfit(arr, size)<<endl;

    return 0;

}