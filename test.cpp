#include <print>
using namespace std;

// simple cpp 23 code

template <size_t N>
int add(int (&value)[N]) {
    int sum = 0;
    for (auto v : value){
        sum+=v;
    }
    return sum;
}

int main() {
    int value[] = {1,2,3,4};
    std::print("sum: {}\n",add(value));
}