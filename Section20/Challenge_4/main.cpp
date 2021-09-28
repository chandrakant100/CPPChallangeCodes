// Section 20
// Challenge 4
// Identifying palindrome strings using a stack and queue
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

bool is_palindrome(const std::string& s)
{
    // You must implement this function.
    // Since we are learning the STL - use a stack and a queue to solve the problem.
    queue<char> newString1;
    stack<char> newString2;
    for (auto c:s)
    {
        if(isalpha(c))
        {
            newString1.push(toupper(c));
            newString2.push(toupper(c));
        }
    }
    while(!newString1.empty())
    {
        if (newString1.front() != newString2.top())
            return false;
        newString1.pop();
        newString2.pop();
    }
    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}