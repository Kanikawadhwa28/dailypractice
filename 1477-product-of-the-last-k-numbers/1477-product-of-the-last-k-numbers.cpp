class ProductOfNumbers {
    vector<int> ans={1};
    int n;
    int lastzero;

public:
    ProductOfNumbers() {
        n=1;
        lastzero=-1;
    }
    
    void add(int num) {
        if(num==0) lastzero=n;
        if(ans.back()==0) ans.push_back(num);
        else ans.push_back(ans.back()*num);
        n++;
    }
    
    int getProduct(int k) {
        if(lastzero>=n-k) return 0;
        if(ans[n-k-1]==0) return ans[n-1];
        else return ans[n-1]/ans[n-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */