/*EXAMPLES:
1) II = 1+1 = 2
2) IV = 5-1 = 4
3) XLIX = (50-10)+(10-1) = 40 + 9 = 49

Compare the ith and (i+1)th terms, if [ith > (i+1)th] add else subtract */



class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        
        for(int i=0; i<s.length(); i++)                  //For example: XLVII convert it to integer i.e. 47
        {
            char c = s[i];                              
            
            if((i!=s.length()-1) && (value(s[i]) < value(s[i+1])))      //Here in our example, (s.length = 5). i should not be the last element of thr string as per the first condition and second condition says that; when i=0; (X < L) is true.
            {
                sum = sum - value(s[i]);                                
            }
            else {
                sum = sum + value(s[i]);                                //When i=1; (L < V) is false and hence we add it to sum
            }
        }
        return sum;
        
    }
    
   int value(char c)
    {
        switch(c)
        {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
                
        }
        return 0;
    }
    
};