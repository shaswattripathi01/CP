struct FT{
    vi e;
    int N;
    void init(int x){e = vi(x,0); N = x;}
    int sum(int k){
        int s = 0;
        while (k >= 1){
            s += e[k];
            k -= k&-k;
        }
        return s;
    }
 
    void add(int k, int x){
        while (k <= N-1) {
            e[k] += x;
            k += k&-k;
        }
    }
 
    int range_sum(int a, int b){
        if(a == 1) return sum(b);
        return sum(b) - sum(a-1);
    }
};