#include <iostream>
#include <iomanip>
#include <string>
#include <thread>
#include <chrono>
#include <random>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <stdio.h>
using Interval = std::pair<int, int>;

int main()
{
    long long sum = 0;
    int N, K;
    std::cin >> N >> K;
    std::vector<long long> H(N);
    for(auto& e : H)
    {
        std::cin >> e;
        sum += e;
    }
    std::sort(H.begin(),H.end());
    if(K > 0)
    {
        for(int i = 0; i < K; ++i)
        {
            sum -= H[N - 1 - i];
            if(sum == 0)
            {
                break;
            }
        }
    }
    std::cout << sum << '\n';
}
