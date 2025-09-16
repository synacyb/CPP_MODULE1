#include <iostream>

namespace basic_math{
    int power(int num, int exponent){
        int res = 1;
        if (num == 1)
            return (1);
        for(int i = 0; i < exponent; i++)
        {
            res *= num;
        }
        return res;
    }
}

namespace advanced_math{
    int power(int number){
        return(number * number);
    }
}
int main(){

    int res1 = basic_math::power(5, 4);
    int res2 = advanced_math::power(2);
    std::cout << res1 << std::endl;
    std::cout << res2 << std::endl;
    return 0;
}