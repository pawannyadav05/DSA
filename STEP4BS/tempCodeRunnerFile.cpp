int kokoeatingBananabrute(vector<int>a,int h){
    int x= *max_element(a.begin(),a.end());
    for(int i=1;i<=x;i++){
        int reQ=requiredtime(a,i);
        if(reQ<=h) return i;
    }
    return -1;
}
int kokoeatingbananoptimal(vector<int>a,int h){
    int x= *max_element(a.begin(),a.end());
    int l=1,hi=x;
    int reQ;
    while(l<=hi){
        int mid=(l+h)/2;
        reQ=requiredtime(a,mid);
        if(reQ<=h){
            hi=mid-1;
        }else{
            l=mid+1;
        }
    }
    return reQ;
}