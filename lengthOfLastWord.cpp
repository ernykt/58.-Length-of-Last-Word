class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = (int)s.size()-1;
        int count = 1;
        while(i>=0 && s[i]==' '){
            i--;
        }

        while(i >= 0 && s[i]!=' '){
            i--;
            count++;
        }
        return count-1;
    }
};
