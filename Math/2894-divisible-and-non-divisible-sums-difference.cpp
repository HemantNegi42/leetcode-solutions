class Solution {
public:
    int differenceOfSums(int n, int m) {
       long long sumOfAll=n*(n+1)/2;
       int totalNo=n/m;
       if(totalNo==0)return sumOfAll;
       long long sumDivisible=totalNo*(m+totalNo*m)/2;
       long long notDivisible=sumOfAll-sumDivisible;
       return notDivisible-sumDivisible;
    }
};
