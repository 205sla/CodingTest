#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

void s(int, int, int, int);

bool check(int, int, int, int);
void totalADD(int);

int total_1 = 0;
int total_2 = 0;
int total_3 = 0;
vector<vector<int>> paper;
int main() {
    
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        vector<int> v;
        for (int j = 0; j < num; j++) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        paper.push_back(v);
    }
    s(0,0,num,num);
    cout << total_1<<"\n";
    cout << total_2 << "\n";
    cout << total_3 << "\n";
    

}

void s(int x1, int y1, int x2, int y2) {

    //cout << x1 << "\t" << y1 << "\t" << x2 << "\t" << y2 << "\n";

    if (x1 == x2) {
        totalADD(paper[x1][y1]);
    }
    else
    {
        if (check(x1, y1, x2, y2)) {
            totalADD(paper[x1][y1]);
        }
        else {
            int Size = x2 - x1;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    s(x1 + Size / 3 * i, y1 + Size / 3 * j, x1 + Size / 3 * (i + 1), y1 + Size / 3 * (j + 1));
                    }
            }
        }
    }
}

bool check(int x1, int y1, int x2, int y2){
    int check = paper[x1][y1];
    for (int i = x1; i < x2; i++) {
        for (int j = y1; j < y2; j++) {
            if (paper[i][j] != check) {
                return false;
            }
        }
    }
    return true;
}

void totalADD(int num) {
    if (num == -1) {
        total_1++;
    }
    else if (num == 0)
    {
        total_2++;
    }
    else
    {
        total_3++;
    }
}