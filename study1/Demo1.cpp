#include <iostream>
#include "string"
using namespace std;

int main() {
    //if 控制语句
    //输入一个分数，如果分数大于600分，视为考上一本大学，并在屏幕上打印
    int score = 0;
    cout << "请输入一个分数：" << endl;
    cin >> score;
    cout << "您输入的分数为： " << score << endl;
    if (score > 30) {
        cout << "我考上了一本大学！！！" << endl;
    }else{
        cout << " 对不起,你考上家里蹲了" << endl;
    }

    //逻辑非
    int a = 10;
    cout << !a << endl;
    cout << !!a << endl;

    //sizeOf关键字
    cout << "short 类型所占内存空间为:" << sizeof(short) << endl;
    cout << "int 类型所占内存空间为:" << sizeof(int) << endl;

    //浮点数计算
    float f1 = 3.14f;
    double d1 = 3.14;

    cout << f1 << endl;
    cout << d1 << endl;

    //科学计算法
    float f2 = 3e2;
    cout << "F2=" << f2 << endl;


    string msg = "Hello C++";
    cout << msg << endl;

    std::cout << "Hello world!" << std::endl << "Hello C++" << std::endl;
    std::cout << 5 * 2 << std::endl;
    //实现打印年龄
    int ageNum = 27;
    std::cout << "I am " << ageNum << " years old." << endl;
    //声明多变量,
    int x, y, z;
    x = y = z = 50;
    int q = 3, t = 4, u = 6;
    //常量
    const int minusHour = 8;
    //用户输入
    int keyNumber;
    cout << "Type a  number :" << endl;
    cin >> keyNumber;
    cout << "Your number is :" << keyNumber << endl;
    //实现简单的输入计算
    int oneNumber, twoNumber;
    cout << "Type a number :" << endl;
    cin >> oneNumber;
    cout << " Type another number :" << endl;
    cin >> twoNumber;
    cout << " result sum :" << oneNumber + twoNumber;
    return 0;
}