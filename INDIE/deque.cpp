#include <iostream>
#include <deque>

int main()
{
    std::deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "zero index element -> " << d.at(0) << std::endl;
    std::cout << "first ele -> " << d.front() << std::endl;
    std::cout << "empty or not " << d.empty() << std::endl;

    return 0;
}