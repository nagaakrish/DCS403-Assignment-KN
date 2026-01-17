//mathematic functions

//Q.1
// #include <iostream>
// #include <cmath>

// using namespace std;
// int main(){
//     double num = -9;

//     cout << "Square root of 9 = " << sqrt(9) << endl;
//     cout << "2 raised to power 3 = " << pow(2, 3) << endl;
//     cout << "Absolute value of -9 = " << fabs(num) << endl;

//     return 0;
// }

//Q.2
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double angle = M_PI / 4;   // π/4 radians

//     cout << "sin(45°) = " << sin(angle) << endl;
//     cout << "cos(45°) = " << cos(angle) << endl;
//     cout << "tan(45°) = " << tan(angle) << endl;

//     return 0;
// }

//Q.3
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double a = 12.7, b = 9.3;

//     cout << "Maximum = " << fmax(a, b) << endl;
//     cout << "Minimum = " << fmin(a, b) << endl;

//     return 0;
// }


//Characters

//Q.1
// #include <iostream>
// #include <cctype>
// using namespace std;

// int main() {
//     char ch;
//     cin >> ch;

//     if (isalpha(ch))
//         cout << ch << " is a letter." << endl;
//     else if (isdigit(ch))
//         cout << ch << " is a digit." << endl;
//     else if (ispunct(ch))
//         cout << ch << " is a special character." << endl;

//     return 0;
// }

//Q.2
// #include <iostream>
// #include <cctype>
// using namespace std;

// int main() {
//     char ch;
//     cin >> ch;

//     cout << "Uppercase: " << (char)toupper(ch) << endl;

//     return 0;
// }

//Q.3
// #include <iostream>
// #include <cctype>
// using namespace std;

// int main() {
//     string str;

//     cout << "Enter a string: ";
//     getline(cin, str);

//     int vowels = 0, consonants = 0;

//     for(int i = 0; i < str.length(); i++) {
//         char c = tolower(str[i]);

//         if(isalpha(c)) {
//             if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//                 vowels++;
//             else
//                 consonants++;
//         }
//     }

//     cout << "Vowels: " << vowels << endl;
//     cout << "Consonants: " << consonants << endl;

//     return 0;
// }


//strings

//Q.1
// #include <iostream>
// using namespace std;

// int main() {
//     string str;
//     cin >> str;

//     cout << "Length of string: " << str.length() << endl;

//     return 0;
// }

//Q.2
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string str;
//     cin >> str;

//     reverse(str.begin(), str.end());

//     cout << "Reversed string: " << str << endl;

//     return 0;
// }

//Q.3
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string str, rev;
//     cin >> str;

//     rev = str;
//     reverse(rev.begin(), rev.end());

//     if(str == rev)
//         cout << "The string is a palindrome." << endl;
//     else
//         cout << "The string is not a palindrome." << endl;

//     return 0;
// }

//Q.4
// #include <iostream>
// using namespace std;

// int main() {
//     string a, b;

//     cin >> a >> b;

//     cout << "Concatenated String: " << a << " " << b << endl;

//     return 0;
// }


// Advanced Assignment

//Mathematic functions

//Q.1
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double a=1, b=-3, c=2;
//     double D = b*b - 4*a*c;

//     if(D > 0) {
//         double x1 = (-b + sqrt(D))/(2*a);
//         double x2 = (-b - sqrt(D))/(2*a);
//         cout << "Roots are real and distinct: " << x1 << " and " << x2 << endl;
//     }
//     else if(D == 0) {
//         double x = -b/(2*a);
//         cout << "Roots are equal: " << x << endl;
//     }
//     else {
//         cout << "Roots are imaginary." << endl;
//     }

//     return 0;
// }

//Q.2
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int x1=9, y1=3, x2=5, y2=7;

//     double dist = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

//     cout << "Distance between points = " << dist << endl;

//     return 0;
// }


// characters

//Q.1
// #include <iostream>
// #include <cctype>
// using namespace std;

// int main() {
//     string str;
//     getline(cin, str);

//     int freq[26] = {0};

//     for(int i = 0; i < str.length(); i++) {
//         char c = str[i];

//         if(isalpha(c)) {
//             c = tolower(c);
//             freq[c - 'a']++;
//         }
//     }

//     for(int i = 0; i < 26; i++) {
//         if(freq[i] > 0) {
//             cout << (char)(i + 'a') << ":" << freq[i] << " ";
//         }
//     }

//     return 0;
// }


//Q.2
// #include <iostream>
// #include <cctype>
// using namespace std;

// int main() {
//     string str;
//     getline(cin, str);

//     for(int i=0;i<str.length();i++) {
//         if(isalpha(str[i])) {
//             if(i%2==0)
//                 str[i]=tolower(str[i]);
//             else
//                 str[i]=toupper(str[i]);
//         }
//     }

//     cout << str << endl;

//     return 0;
// }

//Q.3
// #include <iostream>
// #include <cctype>   
// using namespace std;

// int main() {
//     string str, result = "";
//     getline(cin, str);

   
//     for (size_t i = 0; i < str.size(); i++) {
//         if (isalpha(str[i])) {
//             result += str[i];
//         }
//     }
//     cout << result << endl;

//     return 0;
// }

//strings

//Q.1
// #include <iostream>
// #include <sstream>
// using namespace std;

// int main() {
//     string str;
//     getline(cin, str);

//     string word;
//     stringstream ss(str);
//     int count = 0;

//     while(ss >> word)
//         count++;

//     cout << "Number of words: " << count << endl;

//     return 0;
// }

//Q.2
// #include <iostream>
// #include <sstream>
// using namespace std;

// int main() {
//     string str, word, longest="";
//     getline(cin, str);

//     stringstream ss(str);

//     while(ss >> word) {
//         if(word.length() > longest.length())
//             longest = word;
//     }

//     cout << "Longest word: " << longest << endl;

//     return 0;
// }

//Q.3
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string a, b;
//     cin >> a >> b;

//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());

//     if(a == b)
//         cout << "Strings are anagrams." << endl;
//     else
//         cout << "Strings are not anagrams." << endl;

//     return 0;
// }

//Q.4
// #include <iostream>
// #include <cctype>  
// using namespace std;

// int main() {
//     string str, result = "";
//     cin >> str; 
//     for (size_t i = 0; i < str.size(); i++) {
//         char c = str[i];
//         char x = tolower(c);  

//         if (!(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')) {
//             result += c;
//         }
//     }

//     cout << result << endl;

//     return 0;
// }

//Q.5
// #include <iostream>
// using namespace std;

// int main() {
//     string str;
//     cin >> str;

//     for(int i=0;i<str.length();i++) {
//         int count = 1;

//         while(i < str.length()-1 && str[i] == str[i+1]) {
//             count++;
//             i++;
//         }

//         cout << str[i] << count;
//     }

//     return 0;
// }
