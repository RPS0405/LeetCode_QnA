#include <iostream>
using namespace std;

void watertrapped(int *heights,int n){
    
    int leftMax[20000], rightMax[20000];
    
    leftMax[0]=heights[0];
    rightMax[n-1]=heights[n-1];
    
    for(int i=1;i<=n;i++){
        leftMax[i]=max(leftMax[i-1],heights[i-1]);
    }
    
    for(int i=n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],heights[i+1]);
    }
    
    int trapped=0;
    
    for(int i=0;i<=n;i++){
        int currWater=min(rightMax[i],leftMax[i])-heights[i];
        if(currWater>0){
            trapped+=currWater;
        }
    }
    cout<<"water trapped is ="<<trapped<<endl;
    
}

int main(){
    
    int arr[]={4,2,0,6,3,2,5};
    
    int size= sizeof(arr)/sizeof(int);
    
    watertrapped(arr, size);
    
    return 0;
}