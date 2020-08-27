/*描述
菲波那契数列是指这样的数列: 数列的第一个和第二个数都为1，接下来每个数都等于前面2个数之和。
给出一个正整数a，要求菲波那契数列中第a个数是多少。
输入
第1行是测试数据的组数n，后面跟着n行输入。每组测试数据占1行，包括一个正整数a(1 <= a <= 20)
输出
输出有n行，每行输出对应一个输入。输出应是一个正整数，为菲波那契数列中第a个数的大小*/
#include<iostream>
using namespace std;
int f(int m)
{
    if(m == 1)
       return 1;
    if( m == 2)
       return 1;
    return f(m-1)+f(m-2);
}
int main()
{
    int n;
    cin >> n; 
    while(n--){
        int k;
        cin >> k;
        cout << f(k) << endl;

    }
    return 0;
}
