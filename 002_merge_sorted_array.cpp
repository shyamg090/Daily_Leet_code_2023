class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        //bcz initially 0 is given we have to replace it with nums2;
        // ---hence traverse in reverse order and replace 0 with number---
        //as mentioned nums1.size() = m+n;
        //and nums2.size()= n ;

        while(i>=0 && j>=0){
            if(nums2[j] > nums1[i]){
                nums1[k] = nums2[j];
                j--; k--;
            }
            else{
                nums1[k] = nums1[i];
                i--; k--;
            }
        }

        // below will replace all the zeros with nums2, 
        //this is for edge case [0] and [1]

        while(j>=0){
            nums1[k] = nums2[j];
            j--; k--;
        }
    }
};


// ----------------------using third nums to store-----------------------------------
        // vector<int> nums3;

        // int i=0,j=0;
        // while(i < m && j < n){
        //     if(nums1[i] < nums2[j]){
        //         nums3.push_back(nums1[i]);
        //         i++;
        //     }
        //     if(nums1[i]==nums2[j]){
        //         nums3.push_back(nums1[i]);
        //         nums3.push_back(nums2[j]);
        //         i++;
        //         j++;
        //     }else{
        //         nums3.push_back(nums2[j]);
        //         j++;
        //     }

        //     while(i < m){
        //         nums3.push_back(nums1[i]);
        //         i++;
        //     }

        //     while(j < n){
        //         nums3.push_back(nums2[j]);
        //         j++;
        //     }

        // }
        // return nums3;