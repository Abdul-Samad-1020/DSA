#include<string>
#include<iostream>

using namespace std;
class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        ::reverse(s.begin(),s.end());
        unsigned int y;
        stringstream ss(s);
        ss>>y;
        if(log2(y) > 31){
            return 0;
        }
        return x>0 ? y :-y;
    }
};
int main(){
    Solution s;
    cout<<s.reverse(123)<<endl;
    cout<<s.reverse(-123)<<endl;
    cout<<s.reverse(120)<<endl;
    cout<<s.reverse(0)<<endl;
    return 0;
}