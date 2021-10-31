#include <bits/stdc++.h>

class Solution {
public:
    int b_size = 9;
    int s_size = 3;

    bool isValidRow(std::vector<std::vector<char>> &board, int num){
        bool flag = true;
        int *tab = new int [b_size];

        for (int i = 0; i < b_size; ++i)
            tab[i] = 0;

        for (auto &i : board[num])
            if (i != '.')
                ++tab[i - '1'];

        for (int i = 0; i < b_size; ++i)
            if (tab[i] > 1) {
                flag = false;
                break;
            }

        delete [] tab;

        return flag;
    }

    bool isValidColumn(std::vector<std::vector<char>> &board, int num){
        bool flag = true;
        int *tab = new int [b_size];

        for (int i = 0; i < b_size; ++i)
            tab[i] = 0;

        for (auto &i : board)
            if (i[num] != '.')
                ++tab[i[num] - '1'];

        for (int i = 0; i < b_size; ++i)
            if (tab[i] > 1) {
                flag = false;
                break;
            }

        delete [] tab;

        return flag;
    }

    bool isValidSquare(std::vector<std::vector<char>> &board, int row, int col){
        bool flag = true;
        int *tab = new int [b_size];

        for (int i = 0; i < b_size; ++i)
            tab[i] = 0;

        for (int i = 0; i < s_size; ++i)
            for (int j = 0; j < s_size; ++j)
                if (board[s_size * row + i][s_size * col + j] != '.')
                    ++tab[board[s_size * row + i][s_size * col + j] - '1'];

        for (int i = 0; i < b_size; ++i)
            if (tab[i] > 1) {
                flag = false;
                break;
            }

        delete [] tab;

        return flag;
    }

    bool isValidSudoku(std::vector<std::vector<char>> &board) {
        for (int i = 0; i < b_size; ++i)
            if (!isValidRow(board, i))
                return false;

        for (int i = 0; i < b_size; ++i)
            if (!isValidColumn(board, i))
                return false;

        for (int i = 0; i < s_size; ++i)
            for (int j = 0; j < s_size; ++j)
                if (!isValidSquare(board, i, j))
                    return false;

        return true;
    }
};
