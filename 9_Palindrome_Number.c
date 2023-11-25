bool isPalindrome(int x) {
    if(x < 0)
        return false;
    int y , sum = 0;
    y = x;
    while(y != 0)
    {
        sum = sum*10 + y%10;
        y /= 10;
    }
    if(x == sum) return true;
    else return false;
}


