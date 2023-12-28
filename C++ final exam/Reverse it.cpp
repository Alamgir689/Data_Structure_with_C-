/*
Problem Statement

You will be given data for N students, where each student will have a name (nm), class (cls), section (s) and student ID (id). The Headmaster decided to change the sections of the students. He wants to reverse their sections. Now he needs your help to do so.

Your task is reverse their section and print all the students data. That means the section of the first student will be replaced by the section of the last student, the section of the second student will be replaced by the section of the second last student and so on. See the sample input and output for more clarifications.

Input Format

First line will contain N.
Next N lines will contain nm, cls, s, and id respectively.
Constraints

1 <= N <= 100
1 <= |nm| <= 100 and will contain only English alphabets.
1 <= cls <= 10
'A' <= s <= 'Z'
1 <= id <= 100
Output Format

Output all the students data after reversing their section.
Sample Input 0

3
Rakib 7 B 90
Sakib 10 A 85
Ahsan 9 C 36
Sample Output 0

Rakib 7 C 90
Sakib 10 A 85
Ahsan 9 B 36
Sample Input 1

4
Munna 8 D 10
Shojoy 9 E 11
Asif 10 C 12
Joy 9 G 13
Sample Output 1

Munna 8 G 10
Shojoy 9 C 11
Asif 10 E 12
Joy 9 D 13
*/
#include <bits/stdc++.h>

using namespace std;

class Student {
  public:
    string name, sec;
    int cls, id;
};



int main() {
    int t;
    cin>>t;
    Student std[101];
    for(int i=0; i<t; i++){
        cin >> std[i].name >> std[i].cls >> std[i].sec >> std[i].id;
    }
    for(int i=0; i<t/2; i++){
        string temp = std[i].sec;
        std[i].sec = std[t-i-1].sec;
        std[t-i-1].sec = temp;
    }
    for(int i=0; i<t; i++){
        cout << std[i].name << " " << std[i].cls << " " << std[i].sec << " " << std[i].id << endl;
    }

}
