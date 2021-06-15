#include <iostream>
#include <cstdlib>
 
int prosoft_atoi(const char *str){
    int i = atoi(str);
    return i;
}

int main() {
    printf("Test1: %d\n", prosoft_atoi("1"));         // 1
    printf("Test2: %d\n", prosoft_atoi("-1"));        // -1
    printf("Test3: %d\n", prosoft_atoi("1234567890"));// 1234567890
    printf("Test4: %d\n", prosoft_atoi(""));          // 0
    printf("Test5: %d\n", prosoft_atoi("test"));      // 0
    printf("Test6: %d\n", prosoft_atoi("22test"));    // 22
    printf("Test7: %d\n", prosoft_atoi("   537"));    // 537
    printf("Test8: %d\n", prosoft_atoi("xx123"));     // 0
    printf("Test9: %d\n", prosoft_atoi(NULL));        // 0
    printf("TestA: %d\n", prosoft_atoi("123-4"));     // 123
    printf("TestB: %d\n", prosoft_atoi("!123"));      // 0
    return 0;
}


