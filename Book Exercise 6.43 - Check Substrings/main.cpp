// main.cpp
// Reverse Numbers
// Created by ax on 9/28/16.
// Copyright © 2016 COMP130. All rights reserved.

#include<iostream>
#include<string>

using namespace std;

bool check_length(string s1, string s2) {
    
    bool long_enough = 0;
    
    if (!(s1.length() > s2.length()))
    {
        long_enough = 1;
    }
    
    return long_enough;
}

int find_first_position(string s1, string s2) {
    
    char first_char_s1 = s1.at(0);
    int return_val = -1;
    string check_match_seqence = "";
    
    cout << "looking for match to letter \"" << first_char_s1 << "\" in second string." << endl;
    
    for (int i = 0; i < s2.length() - s1.length(); i++)
    {
        if (first_char_s1 == s2.at(i)) {
            cout << "Found a first character match at position " << i + 1 << " in the second string." << endl;
            return_val = i;
            
            // run another function to for loop check the next s1 length of s2
            
            cout << "running next checker" << endl;
            
            for (int j = 0; j < s1.length(); j++) {
                cout << "s2.j: " << s2.at(i + j) << endl;
                check_match_seqence += s2.at(i + j);
            }
            
        }
        
    }
    
    cout << "string s1: " << s1 << endl;
    cout << "check match sequence: " << check_match_seqence << endl;
    
    cout << "checking if s1 matches check match sequence... " << endl;
    
    if (s1 == check_match_seqence) {
        cout << "we found a match!" << endl;
    }
    else {
        cout << "boo, no match found!" << endl;
    }
        
    
    return return_val;
    
}

int main() {
    
    string s1 = " ";
    string s2 = " ";
    
    cout << "Enter string 1: ";
    
    getline(cin, s1);
    
    cout << "Enter string 2: ";
    
    getline(cin, s2);
    
    if (check_length(s1, s2) == 0) {
        cout << "First string is longer than the second string, -1" << endl;
    }
    else {
        cout << "We can work with this! ";
        
        cout << find_first_position(s1, s2) << endl;
    }
    
    
    
    return 0;
    
}