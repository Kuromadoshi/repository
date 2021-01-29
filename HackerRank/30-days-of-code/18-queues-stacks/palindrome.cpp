#include <iostream>

using namespace std;

class Solution
{
protected:
    string stack;
    string queue;
public:
    void pushCharacter (char ch)
    {
        stack = stack + ch;
    }
    void enqueueCharacter (char ch)
    {
        queue = ch + queue;
    }
    char popCharacter ()
    {
        char ch = stack.back();
        stack.pop_back();
        return ch;
    }
    char deenqueueCharacter ()
    {
        char ch = queue.back();
        queue.pop_back();
        return ch;
    }
};

int main ()
{
    // read the string s.
    string s;
    getline(cin, s);

    // create the Solution class object.
    Solution obj;

    // push and enqueue all characters of string s to stack
    int len = s.length();
    for (int i = 0; i < len; ++i)
    {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < len / 2; ++i)
    {
        if (obj.popCharacter() != obj.deenqueueCharacter())
        {
            isPalindrome = false;
            break;
        }
    }

    // finally print wether string s is palindrome or not.
    if (isPalindrome)
    {
        cout << "The word, " << s << ", is a palindrome." << endl;
    }
    else
    {
        cout << "The word, " << s << ", is not a palindrome." << endl;
    }
    return 0;
}
