// URL : https://leetcode.com/explore/featured/card/october-leetcoding-challenge/559/week-1-october-1st-october-7th/3484/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
         int bitwiseComplement(int N) {
             
            int X = 1; 
            while (N > X) X = X * 2 + 1;
            return X - N;
    }
};