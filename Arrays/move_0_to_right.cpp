class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;

        if(nums.size()==1){
           return; 
        }
        //j=i bcz it shoul start from i i.e when i=0,
        for(int j=i; j<nums.size(); j++){
            //exectues only if nums[j]!= 0
            //here moving the zero to right
            //hence i is incremented when 0 is found i.e i changes only 2 times 
            //note that the i is not in for loop, check for each loop by seeing changes made by prev loop
            // [0(s),1(s),0,3,12]-->[1,0(s),0,3(s),12]-->[1,3,0(s),0,12(s)]
            //here (s) is swapped in each step

            if(nums[j] != 0){

                swap(nums[i],nums[j]);
                i++;

            }
            //here if [1,2] then 
            // i=0 , j=0 --> 1!=0 swaps[1,1]
            // i=1,j=1(i,j both are incremented)--> 2!=0 swaps[2,2]
            // babbar works for 23/72 cases but this works 100%
        }
    }
};