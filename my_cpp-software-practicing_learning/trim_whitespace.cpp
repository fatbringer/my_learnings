string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

// SAMPLE FUNCTIONS
/* EXPLANATION FROM POE
The two functions you provided are ltrim and rtrim, which are used to trim leading and trailing whitespace characters from a given string, respectively.

ltrim(const string &str):

This function takes a string as input and returns a new string with the leading whitespace characters removed.
The function first creates a copy of the input string s(str).
It then uses the erase() function to remove the characters from the beginning of the string up to the first non-whitespace character.
The find_if() function is used to locate the first non-whitespace character in the string. The not1(ptr_fun<int, int>(isspace)) expression creates a unary function that returns the logical complement of the isspace() function, effectively identifying the first non-whitespace character.
Finally, the modified s string is returned.


rtrim(const string &str):

This function takes a string as input and returns a new string with the trailing whitespace characters removed.
The function first creates a copy of the input string s(str).
It then uses the erase() function to remove the characters from the end of the string starting from the last non-whitespace character.
The find_if() function with s.rbegin() and s.rend() is used to locate the last non-whitespace character in the string. The not1(ptr_fun<int, int>(isspace)) expression is used again to identify the last non-whitespace character.
The base() function is used to convert the reverse iterator to a forward iterator, as required by the erase() function.
Finally, the modified s string is returned.
Both of these functions are commonly used in string manipulation tasks, where you need to remove leading or trailing whitespace characters from a given string. They can be useful when working with user input, file paths, or any other situations where you want to ensure a string is "clean" and doesn't have unnecessary whitespace.

*/
