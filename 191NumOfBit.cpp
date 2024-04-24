class Solution {
public:
    int hammingWeight(int n) {
        int Ones = 0;
        while(n > 0){
            if(n % 2 != 0)
                Ones++;
            n = n / 2;
        }

        return Ones;
    }
};