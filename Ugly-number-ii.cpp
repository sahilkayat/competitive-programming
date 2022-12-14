// problem link : https://leetcode.com/problems/ugly-number-ii/

// solution

int nthUglyNumber(int n) {
    if (n==1) return 1;
    
    vector<int> a(n);
    int p2=0,p3=0,p5=0;
    a[0]=1;
    
    for(int i=1;i<n;i++){
        
        a[i]=min({a[p2]*2,a[p3]*3,a[p5]*5});
        
        if(a[i]==a[p2]*2) p2++;
        if(a[i]==a[p3]*3) p3++;
        if(a[i]==a[p5]*5) p5++;
        
    }
    return a[n-1];
}