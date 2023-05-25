class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        cout<<"nums1 b :"<<nums1.size()<<endl;
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        cout<<"Nums1 a :"<<nums1.size()<<endl;
        sort(nums1.begin(),nums1.end());

        if(nums1.size()%2)
        {
            return nums1[nums1.size()/2];
        }
        else
        {
            return ((double)nums1[nums1.size()/2]+(double)nums1[nums1.size()/2-1])/2;
        }

    }
};