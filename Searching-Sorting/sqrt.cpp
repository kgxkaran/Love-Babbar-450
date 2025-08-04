https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1) return x;
        int low = 0;
        int high = x/2;
        int ans = 0;
        while(low <= high){
            int mid = low+(high-low)/2;
            long square = 1LL*mid*mid;
            if(square == x){
                return mid;
            }else if(square > x){
                high = mid-1;  
            }else{
                ans = mid;
                low = mid+1;
            }
        }

        return ans;
    }
};

| Expression | Type                 |
| ---------- | -------------------- |
| `1`        | `int`                |
| `1L`       | `long`               |
| `1LL`      | `long long`          |
| `1.0`      | `double`             |
| `1.0f`     | `float`              |
| `1ULL`     | `unsigned long long` |

