#include <iostream>
using namespace std;
int strStr(string haystack, string needle)
{
    int size1 = haystack.size();
    int size2 = needle.size();

    for (int i = 0; i <= size1 - size2; i++)
    {
        int j;
        for (j = 0; j < size2; j++)
        {
            if (haystack[i + j] != needle[j])
            {
                break;
            }
        }
        if (j == size2)
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    string haystack = "leetcode", needle = "leeto";
    cout<<strStr(haystack, needle);
}