#include<stdio.h>
int main(){
    int *nums;
    int n,target;
    scanf("%d",&n);
    nums=(int*)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    scanf("%d",&target);
    for(i=0;i<n-1;i++){
        if(nums[i]+nums[i+1]==target){
            printf("%d%d\n",i,i+1);
        }
    }
    return 0;
    
}