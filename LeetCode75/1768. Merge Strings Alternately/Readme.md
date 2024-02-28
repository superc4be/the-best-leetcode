# Task
#### Level: Easy

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

# Examples

## Example 1:

Input: `word1 = "abc"`, `word2 = "pqr"`

Output: `"apbqcr"`

Explanation: The merged string will be merged as so:

`word1:  a   b   c`

`word2:    p   q   r`

`merged: a p b q c r`

## Example 2:


Input: `word1 = "ab"`, `word2 = "pqrs"`

Output: `"apbqrs"`

Explanation: Notice that as word2 is longer, "rs" is appended to the end.

`word1:  a   b`

`word2:    p   q   r   s`

`merged: a p b q   r   s`

## Example 3:

Input: `word1 = "abcd"`, `word2 = "pq"`

Output: `"apbqcd"`

Explanation: Notice that as word1 is longer, "cd" is appended to the end.

`word1:  a   b   c   d`

`word2:    p   q `

`merged: a p b q c   d`

 

# Constraints:

1 <= word1.length, word2.length <= 100

word1 and word2 consist of lowercase English letters.

# Solution
```cpp
string mergeAlternately(string word1, string word2) {
    string ans = "";

    int sw1 = (int) word1.size();
    int sw2 = (int) word2.size();
    int p1 = 0, p2 = 0;

    while (p1 < sw1 && p2 < sw2) {
        ans += word1[p1];
        ans += word2[p2];
        ++p1; ++p2;
    }

    while (p1 < sw1) {
        ans += word1[p1];
        ++p1;
    }

    while (p2 < sw2) {
        ans += word2[p2];
        ++p2;
    }

    return ans;
}
```

Пока одно из слов не закончилось, добавляем вначале символ из первого слова, потом символ из второго слова. А дальше условием `while` проверяем какое из слов мы обошли, а какое нет, и так вставляем оставшиеся символы из того слова, которое еще не прошли.

<!-- TODO: Снять видео -->
[YT]() 