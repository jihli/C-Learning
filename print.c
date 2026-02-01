#include <stdio.h>

int main(void) {
		// 1. 首先分配空间给 string和integer
    char str[100];
    int i;
    // 2. printf可以自由打印字符串
    printf("Enter a value: ");
    
    // 3. 通过scanf来提取用户输入的内容 然后存储到指定空间
    // i一般指代int的value 所以指定空间需要&i,而 str已经是这个空间第一个char的地址了
    // 所以不需要&
    scanf("%d %s", &i, str);
    printf("\n You entered : %d:::::%s\n",i,str);

    return 0;

}