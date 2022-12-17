#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>> points(5);
    int var;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<"a"<<i<<j<<"  ";
            cin>>var;
            points[i].push_back(var);
        }
        system("cls");
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<points[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}