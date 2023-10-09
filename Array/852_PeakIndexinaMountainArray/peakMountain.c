int peakIndexInMountainArray(int* arr, int arrSize){
    return maxIndex(arr, arrSize);
}
int maxIndex(int* arr, int arrSize){
    int maxIndex = 0;
    for(int i = 0; i < arrSize - 1; i++){
        if(arr[i] < arr[i+1]) 
            maxIndex = i + 1;
    }
    return maxIndex;
}
