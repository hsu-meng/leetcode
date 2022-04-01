// Binary Search solution
// Time complexity: O(logn)
int mySqrt(int x){
    long left = 1;
    long right = x;
    while(left <= right){
        long mid = (left + right) / 2;
        if(mid * mid == x){
            return mid;
        }
        else if(mid * mid > x){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return left - 1;
}