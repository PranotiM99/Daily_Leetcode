class Solution {
public:
    bool isPalindrome(int x) {
        
        if( x < 0 )    //When x is a negative number, x is not a palindrome.
            return false;
        
        long int num=0;
        int y = x;
        
        while (x>0)       
        {
            num = num*10;
            num = num + (x % 10);
            x = x/10;
        }
        
        //Check if original number and reversed number are same.
        if(num == y)
            return true;
        else
            return false;
        
    }
    
};