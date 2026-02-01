#include <stdio.h>

int main(void) {
    // 1) 定义枚举类型：默认 male=0, female=1
    enum gender { male, female };

    // 2) 声明变量（此时未赋值，值不确定，别打印）
    enum gender myGender;

    // 3) 赋值
    myGender = male;

    // 4) 声明并初始化
    enum gender anotherGender = female;

    // --- 打印枚举“对应的整数值” ---
    printf("male as int = %d\n", male);        // 输出：0
    printf("female as int = %d\n", female);    // 输出：1

    printf("myGender as int = %d\n", myGender);          // 输出：0
    printf("anotherGender as int = %d\n", anotherGender);// 输出：1

    // --- 打印“人能读懂的字符串” ---
    printf("myGender as text = %s\n", (myGender == male) ? "male" : "female");
    printf("anotherGender as text = %s\n", (anotherGender == male) ? "male" : "female");

    // --- 比较（枚举可以直接比较） ---
    printf("myGender == anotherGender ? %s\n",
           (myGender == anotherGender) ? "true" : "false"); // 输出：false

    return 0;
}
