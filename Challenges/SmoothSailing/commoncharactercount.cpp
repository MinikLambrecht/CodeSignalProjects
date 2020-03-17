#include <iostream>

int commonCharacterCount(std::string s1, std::string s2)
{
        // Store the frequencies of characters in string s1 and s2.
        int f1[26] = { 0 };
        int f2[26] = { 0 };

        // Store the count of valid pairs.
        int c = 0;

        // Update the frequencies of the characters in s1.
        for (size_t i = 0; i < s1.length(); i++)
        {
                f1[s1[i] - 'a']++;
        }

        // Update the frequencies of the characters in s2.
        for (size_t i = 0; i < s2.length(); i++)
        {
                f2[s2[i] - 'a']++;
        }

        // Find the count of valid pairs.
        for (size_t i = 0; i < 26; i++)
        {
                c += (std::min(f1[i], f2[i]));
        }

        return c;
}
