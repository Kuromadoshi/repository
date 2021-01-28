#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    int hg;
    int max = 0;
    
    for (int i = 0; i < 4; ++i)
	{
        for (int j = 0; j < 4; ++j)
        {
            hg = 0;
            for (int k = 0; k < 3; ++k)
                for (int l = 0; l < 3; ++l)
                {
                    if (k != 1 || k == l)
                    hg += arr[i+k][j+l];
                }
			if (i == 0 && j == 0) max = hg;
            if (max < hg) max = hg;
			cout << hg << endl;
        }
	}
    cout << max;

    return 0;
}
