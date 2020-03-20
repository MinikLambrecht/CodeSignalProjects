// TASK
// Write a function that reverses caracters in (possibly nested)
// parentheses in the input string.

// Input strings will always be well-formed with matcing ()s.

// EXAMPLE
// For inputString = "(bar)", the output should be
// reverseInParentheses(inputString) = "rab";

// For inputString = "foo(bar)baz", the output should be
// reverseInParentheses(inputString) = "foorabbaz";

// For inputString = "foo(bar)baz(blim)", the output should be
// reverseInParentheses(inputString) = "foorabbazmilb";

// For inputString = "foo(bar(baz))blim", the output should be
// reverseInParentheses(inputString) = "foobazrabblim".

// Because "foo(bar(baz))blim" becomes "foo(barzab)blim" and then "foobazrabblim".

#include <algorithm>
#include <iostream>
#include <vector>

std::string reverseInParentheses(std::string inputString)
{
        // Initialize a new string array to store the characer in.
        std::vector<std::string> charArr;

        // Initialize a new string to store the final result in.
        std::string res = "";

        // Initialize a new string to store characters in.
        std::string ch;

        // Iterate every through each character in the inputString.
        for (auto c: inputString)
        {
                // Check if the current character equals ')'.
                if (c != ')')
                {
                        // Store the char.
                        ch.push_back(c);

                        // Push char to the character array as the last element.
                        charArr.push_back(ch);

                        // Clear the string.
                        ch.clear();
                }
                else
                {
                        // Initialize a new string to store the word or sentence inside the parentheses.
                        std::string toBeReversed = "";

                        // Loop through the character array untill it's empty.
                        while (!charArr.empty())
                        {
                                // Store and remove the last element from the character array.
                                ch = charArr.back();
                                charArr.pop_back();

                                // If the current character equals '(' stop the loop.
                                if (ch == "(")
                                {
                                        break;
                                }

                                // Add the character to the string.
                                toBeReversed = ch + toBeReversed ;
                        }

                        // Clear the string.
                        ch.clear();

                        // Reverse the string.
                        std::reverse(toBeReversed.begin(), toBeReversed.end());

                        // Add the word or sentence as the last element in the character array.
                        charArr.push_back(toBeReversed);
                }
        }

        // iterate through all the elements in the character array and add them to the 'res' string.
        for (auto item: charArr)
        {
                res += item;
        }

        return res;
}
