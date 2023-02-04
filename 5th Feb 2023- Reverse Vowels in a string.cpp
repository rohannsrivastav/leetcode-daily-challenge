class Solution {
public:
    bool ifVowel(char s){
        if(s=='a' || s=='e' || s=='i' || s=='o' ||s=='u' ||s=='A' ||s=='E' || s=='I' ||s=='O' ||s=='U'){
                return true;
            }
            return false;
        }
    string reverseVowels(string s) {
        int i=0;
        int j=s.size();
        while(i<j){
            if(ifVowel(s[i]) && ifVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(ifVowel(s[i])==true && ifVowel(s[j])==false){
                j--;
            }
            else if(ifVowel(s[i])==false && ifVowel(s[j])==true){
                i++;
            }
            else if(ifVowel(s[i])==false && ifVowel(s[j])==false){
                i++;
                j--;
            }
        }
         return s;

    }
};