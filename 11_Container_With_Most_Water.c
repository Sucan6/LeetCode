int maxArea(int* height, int heightSize) {
    int left = 0,right = heightSize-1;
    int area,temp,minside;
    while(left < right )
    {
        if(height[left] < height[right]) minside = height[left++];
        else minside = height[right--];
        area = minside*(right-left);
        if(area > temp) temp = area;
    }
    return temp;
}
