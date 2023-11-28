int maxArea(int* height, int heightSize) {
    int left = 0,right = heightSize-1;
    int area = 0,temp = 0,minside = 0;
    while(left < right )
    {
        if(height[left] < height[right]) minside = height[left++];
        else minside = height[right--];
        area = minside*(right-left+1);
        if(area > temp) temp = area;
    }
    return temp;
}
