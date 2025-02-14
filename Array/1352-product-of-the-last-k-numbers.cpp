class ProductOfNumbers {
private:
    vector<int> v;

public:
    ProductOfNumbers() {}

    void add(int num) { v.push_back(num); }

    int getProduct(int k) {
        int n = v.size();
        int product = 1;
        for (int i = n - k; i < n; i++) {
            product *= v[i];
        }
        return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
