#include <stdio.h>

int main(void) {
    // 1) 换行 / 回车 / 退格
    printf("Hello\nWorld\n");     // \n：换行
    printf("ABC\r123\n");         // \r：回到行首，把 ABC 的开头覆盖成 123（效果：123）
    printf("Hi\b!\n");         // \b：退格，可能把 i 覆盖成 !（效果：H! 或 Hi! 取决于终端）

    // // 2) Tab 对齐
    printf("Name\tScore\n");
    printf("Tom\t95\n");
    printf("Alice\t100\n");

    // 打印结果如下:
    // Name    Score
    // Tom     95
    // Alice   100

    // 3) 响铃 / 换页 / 垂直制表（效果可能不明显）
    printf("Alert:\a (maybe you hear a beep)\n");
    printf("FormFeed:\f (may clear screen / show ^L)\n");
    printf("VerticalTab:\v (may look like newline)\n");

    // 4) 打印特殊符号：\  '  " 前面添加\来达成转义的办法
    printf("Backslash: \\\n");
    printf("Single quote: \'\n");
    printf("Double quote: \"\n");
    printf("Question mark: \?\n");

    // 5) 八进制 / 十六进制 表示字符
    char a1 = '\101';   // 八进制 101 = 十进制 65 = 'A'
    char a2 = '\x41';   // 十六进制 41 = 十进制 65 = 'A'
    printf("Octal \\101 -> '%c' (code=%d)\n", a1, (unsigned char)a1);
    printf("Hex   \\x41 -> '%c' (code=%d)\n", a2, (unsigned char)a2);

    return 0;
}
