int totalFruit(int* fruits, int fruitsSize){
    int type[2];
    int count = 0;
    int len = 1;
    int max = 1;
    type[0] = fruits[0];
    type[1] = -1;
    for(int i = 1; i < fruitsSize; i++){
        // the fruit is matched to one of baskets
        if(fruits[i] == type[0] || fruits[i] == type[1]){
            // the type of current fruit and the previous are same
            if(fruits[i] == fruits[i-1]){
                count++;
            }
            else{
                count = 0;
            }
            len++;
        }
        // the fruit is not matched, and the second basket is empty
        else if(type[1] == -1){
            type[1] = fruits[i];
            count = 0;
            len++;
        }
        else{
            if(len > max){
                max = len;
            }
            len = 2 + count; // reset the length(start at two new fruits and add the continous sequence of them)
            count = 0;
            type[0] = fruits[i-1];
            type[1] = fruits[i];
        }
    }
    if(len > max){
        max = len;
    }
    return max;
}