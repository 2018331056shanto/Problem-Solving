package leetcode;

import java.util.Objects;

class LongestBinarySubsequence {
    public int longestSubsequence(String s, int k) {
        int ans=0;

        int len=s.length()-1;
//        System.out.println(len);
        long curNumber=0;
        int shift=0;
        while(len>=0){


            curNumber+= (long) (1L << shift) *(s.charAt(len)-'0');
            if(curNumber>k){
                break;

            }
            shift++;
            ans++;
            len--;
        }
//        System.out.println(curNumber);
//        System.out.println(ans);
//        System.out.println(len);
    if(len>0){
        while(len>=0){
            if(Objects.equals(s.charAt(len),'0'))
                ans++;

            len--;

        }

    }
    return ans;


    }

    public static void main(String[] args) {
        LongestBinarySubsequence sol = new LongestBinarySubsequence();
        System.out.println(sol.longestSubsequence("000101010011011001011101111000111111100001011000000100010000111100000011111001000111100111101001111001011101001011011101001011011001111111010011100011110111010000010000010111001001111101100001111", 300429827));
    }

}