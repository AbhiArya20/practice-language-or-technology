#include <bits/stdc++.h>
using namespace std;
void helper(int r, int c, vector<vector<int>> soduku, map<pair<int, int>, map<int, int>> md, vector<map<int, int>> row, vector<map<int, int>> col)
{
    if (r == 9)
    {
        for (auto it : soduku)
        {
            for (auto i : soduku)
            {
            printf("%d", i);
            }
                cout << endl;
            return;
        }
    }
    if (c == 9)
    {
        helper(r + 1, c, soduku, md, row, col);
        return;
    }
    if (soduku[r][c] != 0)
    {
        helper(r, c + 1, soduku, md, row, col);
        return;
    }

    for (int i = 1; i <= 9; i++)
    {
        int rw = r / 3, c = c / 3;
        if (!md[{rw, c}][i] && !row[r][i] && !col[c][i])
        {
            md[{rw, c}][i] = 1;
            row[r][i] = 1;
            col[r][i] = 1;
            soduku[r][c] = i;
            helper(r, c + 1, soduku, md, row, col);

            md[{rw, c}][i] = 0;
            row[r][i] = 0;
            col[r][i] = 0;
            soduku[r][c] = 0;
        }
    }
}
void issafe(vector<vector<int>> &soduku)
{
    map<pair<int, int>, map<int, int>> md;
    vector<map<int, int>> col(9);
    vector<map<int, int>> row(9);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (soduku[i][j] != 0)
                md[{i / 3, j / 3}][soduku[i][j]] = 1;
            row[i][soduku[i][j]] = 1;
            col[j][soduku[i][j]] = 1;
        }
    }
    helper(0, 0, soduku, md, row, col);
}
int main()
{

    int n;
    cin >> n;

    vector<vector<int>> soduku(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> soduku[i][j];
        }
    }
}