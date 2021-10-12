Question
Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.
  solution
  int getPairsCount(int arr[], int n, int k) {
    int ans=0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        int temp=k-arr[i];
        if(m[temp]!=0){
            ans+=m[temp];
            m[arr[i]]++;
        }
        else{
            m[arr[i]]++;
        }
        }
    
       return ans;
   }
