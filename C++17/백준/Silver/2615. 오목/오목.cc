#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>

vector<vector<int>> grid(19, vector<int>(19));
int GetColor(int x, int y);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int color = 0, count = 0;
    pair<int, int> p;



    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            color = GetColor(i, j);
            if (!color) continue;

            p = { i,j };

            count = 1;
            for (int ii = 1; ii < 5; ii++) {
                if (color != GetColor(i + ii, j)) break;

                count++;
                if (count == 5 && color != GetColor(i + ii + 1, j) && color != GetColor(i -1, j)) {
                    cout << color << "\n" << p.first + 1 << " " << p.second + 1;
                    return 0;
                }
            }

            count = 1;
            for (int ii = 1; ii < 5; ii++) {
                if (color != GetColor(i, j + ii)) break;

                count++;
                if (count == 5 && color != GetColor(i, j + ii + 1) && color != GetColor(i, j -1)) {
                    cout << color << "\n" << p.first + 1 << " " << p.second + 1;
                    return 0;
                }
            }

            count = 1;
            for (int ii = 1; ii < 5; ii++) {
                if (color != GetColor(i + ii, j + ii)) break;

                count++;
                if (count == 5 && color != GetColor(i + ii + 1, j + ii + 1) && color != GetColor(i -1, j -1)) {
                    cout << color << "\n" << p.first + 1 << " " << p.second + 1;
                    return 0;
                }
            }

            count = 1;
            for (int ii = 1; ii < 5; ii++) {
                if (color != GetColor(i - ii, j + ii)) break;

                count++;
                if (count == 5 && color != GetColor(i - ii - 1, j + ii + 1) && color != GetColor(i +1, j -1)) {
                    cout << color << "\n" << p.first + 1 << " " << p.second + 1;
                    return 0;
                }
            }

        }
    }


    cout << "0";
    return 0;

}


int GetColor(int x, int y) {
    if (!(0 <= x && x < 19)) return 0;
    if (!(0 <= y && y < 19)) return 0;
    return grid[x][y];
}
