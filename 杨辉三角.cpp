class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>arr;
        if(numRows<=0){return arr;}
        for(int i=0;i<numRows;i++)
        {
                vector<int>arr2(i+1,1);
            for(int j=1;j<i;j++)
            {
                arr2[j]=arr[i-1][j]+arr[i-1][j-1];

            }
            arr.push_back(arr2); 
        }
        return arr;

    }
};
