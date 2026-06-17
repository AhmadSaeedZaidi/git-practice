#include <print>
#include <limits>
// simple cpp 23 code

template <size_t N>
int add(int (&value)[N]) {
    int sum = 0;
    for (auto v : value){
        sum+=v;
    }
    return sum;
}

int product(int (&value)[N]){
    int prod = 1;
    for (auto v : value) {
        prod*=v;
    }
    return prod;
}

// small comment here to add a change in the commit history
template <size_t N>
int max(int(&value)[N]) {
    int max_val = std::numeric_limits<int>::min();
    for (auto v: value) {
        max_val = std::max(v,max_val);
    }
    return max_val;
}

int main() {
    int value[] = {1,2,3,4};
    std::print("sum: {}\n",add(value));
    std::print("prod {}\n", prod(value))
    std::print("another small change\n");
}