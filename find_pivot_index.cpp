class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumLeft=0;
        int sumRight=0;

        for(int i=0; i<nums.size(); i++){
            sumRight += nums[i];
        }
        cout<<sumRight<<endl;

       
        for(int i=0; i<nums.size(); i++){

            sumRight -= nums[i];
            //bc when 1+1 = 2 then first subtract 2 then check with 1 if its equals
            //eg. a+b=c --> for b == c we must subtract it with a then check b==c
            
            if(sumLeft == sumRight){
                return i;
            }

            sumLeft += nums[i];
        }
        return -1;
    }
};