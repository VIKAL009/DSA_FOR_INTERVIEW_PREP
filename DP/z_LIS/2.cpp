//lis


int Solution::lis(const vector<int> &A) {
    int arr[A.size()];
    arr[0]=1;
    for(int i=1;i<A.size();i++){
        arr[i]=1;
        for(int j=i-1;j>=0;j--){
              if(A[i]>A[j] and arr[j]>=arr[i]){
                  arr[i]=arr[j]+1;
              }
        }
    }
    int k=0;
    for(int i=0;i<A.size();i++){
        k=max(k,arr[i]);
    }
    return k;
}
