/***

https://leetcode.com/problems/climbing-stairs/submissions/
***/


int climbStairs(int n){
int one=1,two=1,sum;
    int i;
    if(n==1){
        return 1;
    }
    for(i=n-2;i>=0;i--){
        sum=one+two;
        one=two;
        two=sum;
    }
    return sum;
}
