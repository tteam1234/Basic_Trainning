// khởi tạo mảng hai chiều
#include <iostream>
using namespace std;
auto main() ->int{
    int row = 3, col = 7;
    int a[row][col] = {{1,2,3,4,5,6,7}, {1,2,3,4,5,6,7}, {1,2,3,4,5,6,7}};
    for(int i = 0; i <row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}