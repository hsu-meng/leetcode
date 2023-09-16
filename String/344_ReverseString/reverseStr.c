void reverseString(char* s, int sSize){
    int l = 0, r = sSize - 1;
    while(l < r) {
        char tmp = s[l];
        s[l] = s[r];
        s[r] = tmp;
        l++;
        r--;
    }
}
