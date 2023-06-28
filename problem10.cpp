// Search in 2D matrix

#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &mat, int target)
{

    if (mat.size() == 0)
        return false;

    int n = mat.size();
    int m = mat[0].size();

    int lo = 0;
    int hi = (n * m) - 1;

    while (lo <= hi)
    {
        int mid = (lo + (hi - lo) / 2);
        if (mat[mid / m][mid % m] == target)
        {
            return true;
        }
        if (mat[mid / m][mid % m] < target)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    bool res = searchMatrix(mat, 3);
    cout << res << endl;
    return 0;
}