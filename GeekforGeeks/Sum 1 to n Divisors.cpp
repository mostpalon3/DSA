class Solution {
  public:
    int sumOfDivisors(int n) {
        int accum = 0;
        
        for(int i =1; i<=n; i++){
            for(int j =1; j*j <= i; j++){
                if(i % j == 0){
                    accum += j;
                    if(j != i/j){
                        accum += i/j;
                    }
                }
        }
        }
        return accum;
    }
};