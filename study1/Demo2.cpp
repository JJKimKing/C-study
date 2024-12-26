#include "iostream"
#include <random>

using namespace std;

//系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。
void game() {
    int playNumber, randomNumber;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    randomNumber = dis(gen);
    cout << " randomNumber=" << randomNumber << endl;

    bool gameOver = false;
    while (!gameOver) {
        cout << "请输入你所选的数字:" << endl;
        cin >> playNumber;
        if (playNumber > randomNumber) {
            cout << "数字过大" << endl;
        } else if (playNumber < randomNumber) {
            cout << "数字过小" << endl;
        } else {
            gameOver = true;
            cout << "恭喜玩家胜利!" << endl;
        }
    }
}

void game2() {
    int playNumber, randomNumber;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    cout << "欢迎来到猜数字游戏！\n";
    randomNumber = dis(gen);
    cout << " randomNumber=" << randomNumber << endl;

    bool gameOver = false;
    while (!gameOver) {
        cout << "请输入你所选的数字 (1-100): ";

        while (!(cin >> playNumber) || playNumber < 1 || playNumber > 100) {
            cout << "输入无效，请输入一个有效的数字（1到100之间）: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (playNumber > randomNumber) {
            cout << "你猜的数字过大！\n";
        } else if (playNumber < randomNumber) {
            cout << "你猜的数字过小！\n";
        } else {
            gameOver = true;
            cout << "恭喜玩家胜利！你猜对了！\n";
        }
    }
}

//实现for循环 打印99乘法表
void forPrint() {
    for (int i = 1; i < 9; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << "*" << i << "=" << i * j << "\t";
        }
        cout << endl;
    }
}

int main() {
    forPrint();
}
