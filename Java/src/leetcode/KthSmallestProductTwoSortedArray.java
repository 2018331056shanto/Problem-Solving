//package leetcode;
//
//import java.util.Arrays;
//
///**
// * @author: Ashraful Islam Shanto
// * <p>Date:6/26/25</p>
// * <p>Time:7:24 AM</p>
// */
//public class KthSmallestProductTwoSortedArray {
//
//
//    public long kthSmallestProduct(int[] nums1, int[] nums2, long k){
//
//        if(nums1[0]>=0&&nums2[0]>=0){
//            int cur= (int)k/ nums2.length;
//            int rem= (int)k%nums2.length;
//            return(long) nums1[cur]*(long)nums2[rem-1];
//        }
//        else if(nums1[0]<0&&nums2[0]>=0){
//            //Check how many negative numbers in the first array then i have to count from the last of the second array to  find small number
//            //Then if the number is not in the range then i have to again start counting from the non negative in the correct order
//
//        }
//        else{
//            //
//        }
//    }
//
//    public static void main(String[] args) {
//        KthSmallestProductTwoSortedArray kthSmallestProductTwoSortedArray = new KthSmallestProductTwoSortedArray();
//
//        System.out.println(kthSmallestProductTwoSortedArray.kthSmallestProduct(new int[]{1, 2, 3},new int[]{2,3,4,5},7));
//    }
//}
