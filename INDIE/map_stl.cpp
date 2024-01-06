#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> m;

    m[1] = "bring";
    m[2] = "pepsi";
    m[13] = "coke";
    m.insert({5, "bheem"});

    for (auto i : m)
    {
        std::cout << i.first << " " << i.second << std::endl;
    }

    return 0;
}