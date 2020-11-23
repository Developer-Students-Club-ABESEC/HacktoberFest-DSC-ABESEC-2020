#include <bits/stdc++.h>

using namespace std;

int func(vector<vector<int>> arr,int m, int n){
    int ans=0;
    int orm=m;
    int orn=n;
    for(int i=m;i<m+3;i++){
        for(int j=n;j<n+3;j++){
            ans+=arr[i][j];
            //n++;
        }
        //m++;
    }
    int red=arr[orm+1][orn]+arr[orm+1][orn+2];
    ans = ans-red;
    return ans;
}


// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int ans=0;
    int sum=INT_MIN;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            ans=func(arr,i,j);
            cout<<"for "<<i<<" "<<j<<" the sum is : "<<ans;
            sum = max(sum,ans);
        }
    }
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
