#include <bits/stdc++.h>

std::vector<std::pair<int, int>> v;

void factor(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        int cnt = 0;
        while (x % i == 0)
        {
            x /= i;
            cnt++;
        }
        if (cnt)
            v.emplace_back(i, cnt);
    }
    if (x > 1)
        v.emplace_back(x, 1);
}

int main()
{
    int n;
    std::cin >> n;
    factor(n);
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i].first << " " << v[i].second << "\n";
    }
}