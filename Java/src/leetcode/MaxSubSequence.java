package leetcode;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.PriorityQueue;

/**
 * @author: Ashraful Islam Shanto
 * <p>Date:6/29/25</p>
 * <p>Time:5:25 AM</p>
 */
public class MaxSubSequence {

//    class Pair implements Comparable<Pair> {
//        int val;
//        int index;
//
//        Pair(int val,int index){
//            this.val=val;
//            this.index=index;
//        }
//
//        @Override
//        public int compareTo(Pair o) {
//            return Integer.compare(this.val,o.val);
//        }
//    }
//
    public int[] maxSubsequence(int[] nums, int K) {
        int [] sortedNums=Arrays.stream(nums).sorted().toArray();
        int len=sortedNums.length-1;
        int[] ans=new int [K];
        int KK=K;
        while(K>0&&sortedNums[len]>=0){

            ans[KK-K]=sortedNums[len];
            len--;
            K--;
        }
        return ans;
    }


    public static void main(String[] args) {
        MaxSubSequence ms = new MaxSubSequence();

        int [] ans=ms.maxSubsequence(new int[]{2,1,3,3},2);

        Arrays.stream(ans).forEach(System.out::println);

    }
}
