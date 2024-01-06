#include <iostream>
#include <stack>

int main()
{
    std::stack<std::string> s;

    s.push("a");
    s.push("b");
    s.push("c");

    std::cout << "top ele -> " << s.top() << std::endl; // c (last in first out)
    s.pop();
    std::cout << "top ele -> " << s.top() << std::endl; // b

    return 0;
}