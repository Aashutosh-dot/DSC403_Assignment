#include <iostream>
#include <cmath>
#include <cctype>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    // 🧮 Mathematical Functions
    // Question 1: Find the square root, power, and absolute value of a number.
    double num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Square root of " << fabs(num) << " = " << sqrt(fabs(num)) << "\n";
    cout << "2 raised to power 3 = " << pow(2, 3) << "\n";
    cout << "Absolute value of " << num << " = " << fabs(num) << "\n";


    // Question 2: Calculate the sine, cosine, and tangent of an angle in radians.
    double angle;
    cout << "Enter angle in radians: ";
    cin >> angle;
    cout << "sin = " << sin(angle) << "\n";
    cout << "cos = " << cos(angle) << "\n";
    cout << "tan = " << tan(angle) << "\n";


    // Question 3: Find the largest and smallest of two numbers using fmax() and fmin().
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Maximum = " << fmax(a, b) << "\n";
    cout << "Minimum = " << fmin(a, b) << "\n";


    // 🔤 Characters
    // Question 1: Check if a character is a letter, digit, or special character.
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isalpha(ch))
        cout << ch << " is a letter.\n";
    else if (isdigit(ch))
        cout << ch << " is a digit.\n";
    else if (ispunct(ch))
        cout << ch << " is a special character.\n";


    // Question 2: Convert lowercase to uppercase and vice versa.
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if (islower(c))
        cout << "Uppercase: " << char(toupper(c)) << "\n";
    else if (isupper(c))
        cout << "Lowercase: " << char(tolower(c)) << "\n";
    else
        cout << "Not a letter.\n";


    // Question 3: Count vowels and consonants in a string.
    string text;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, text);
    int vowels = 0, consonants = 0;
    for (int i = 0; i < text.length(); i++) {
        char lower = tolower(text[i]);
        if (isalpha(lower)) {
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    cout << "Vowels: " << vowels << "\n";
    cout << "Consonants: " << consonants << "\n";


    // 🧵 Strings
    // Question 1: Find the length of a string.
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Length of string: " << str.length() << "\n";


    // Question 2: Reverse a string.
    string rev;
    cout << "Enter a string to reverse: ";
    getline(cin, rev);
    reverse(rev.begin(), rev.end());
    cout << "Reversed string: " << rev << "\n";


    // Question 3: Check if a string is a palindrome.
    string pal;
    cout << "Enter a string: ";
    getline(cin, pal);
    string temp = pal;
    reverse(temp.begin(), temp.end());
    if (temp == pal)
        cout << "The string is a palindrome.\n";
    else
        cout << "The string is not a palindrome.\n";


    // Question 4: Concatenate two strings.
    string s1, s2;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);
    cout << "Concatenated String: " << s1 + " " + s2 << "\n";


    // 🚀 Advanced Mathematical Functions
    // 1. Quadratic Equation Roots
    double A, B, C, D, root1, root2;
    cout << "Enter coefficients a, b, c: ";
    cin >> A >> B >> C;
    D = (B * B) - (4 * A * C);
    if (D > 0) {
        root1 = (-B + sqrt(D)) / (2 * A);
        root2 = (-B - sqrt(D)) / (2 * A);
        cout << "Roots are real and distinct: " << root1 << " and " << root2 << "\n";
    } else if (D == 0) {
        root1 = -B / (2 * A);
        cout << "Roots are real and equal: " << root1 << "\n";
    } else
        cout << "Roots are imaginary.\n";


    // 2. Distance Between Two Points
    double X1, Y1, X2, Y2, dist;
    cout << "Enter x1, y1, x2, y2: ";
    cin >> X1 >> Y1 >> X2 >> Y2;
    dist = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));
    cout << "Distance between points = " << dist << "\n";


    // 🔤 Advanced Characters
    // 1. Character Frequency Counter
    string freq;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, freq);
    int count[26] = {0};
    for (int i = 0; i < freq.length(); i++)
        if (isalpha(freq[i]))
            count[tolower(freq[i]) - 'a']++;
    for (int i = 0; i < 26; i++)
        if (count[i] > 0)
            cout << char(i + 'a') << ":" << count[i] << " ";
    cout << "\n";


    // 2. Character Case Alternator
    string alt;
    cout << "Enter a string: ";
    getline(cin, alt);
    for (int i = 0; i < alt.length(); i++) {
        if (isalpha(alt[i])) {
            if (i % 2 == 0)
                alt[i] = tolower(alt[i]);
            else
                alt[i] = toupper(alt[i]);
        }
    }
    cout << alt << "\n";


    // 3. Remove All Non-Alphabetic Characters
    string mix;
    cout << "Enter a string: ";
    getline(cin, mix);
    string clean = "";
    for (int i = 0; i < mix.length(); i++)
        if (isalpha(mix[i]))
            clean += mix[i];
    cout << clean << "\n";


    // 🧵 Advanced Strings
    // 1. Count Words in a Sentence
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    int words = 0;
    bool inWord = false;
    for (int i = 0; i < sentence.length(); i++) {
        if (isspace(sentence[i]))
            inWord = false;
        else if (!inWord) {
            inWord = true;
            words++;
        }
    }
    cout << "Number of words: " << words << "\n";


    // 2. Find the Longest Word in a Sentence
    string sen;
    cout << "Enter a sentence: ";
    getline(cin, sen);
    string word = "", longest = "";
    for (int i = 0; i < sen.length(); i++) {
        if (isspace(sen[i])) {
            if (word.length() > longest.length())
                longest = word;
            word = "";
        } else
            word += sen[i];
    }
    if (word.length() > longest.length())
        longest = word;
    cout << "Longest word: " << longest << "\n";


    // 3. Anagram Checker
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 == str2)
        cout << "Strings are anagrams.\n";
    else
        cout << "Strings are not anagrams.\n";


    // 4. Remove Vowels from a String
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    string noVowel = "";
    for (int i = 0; i < s.length(); i++) {
        char lower = tolower(s[i]);
        if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u')
            noVowel += s[i];
    }
    cout << noVowel << "\n";


    // 5. String Compression
    string comp;
    cout << "Enter a string: ";
    getline(cin, comp);
    string result = "";
    int countChar = 1;
    for (int i = 0; i < comp.length(); i++) {
        if (i + 1 < comp.length() && comp[i] == comp[i + 1])
            countChar++;
        else {
            result += comp[i];
            result += to_string(countChar);
            countChar = 1;
        }
    }
    cout << result << "\n";

    return 0;
}