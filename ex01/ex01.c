#include <stdio.h>

#define PRINT(a) printf("%d\n", a);
#define LOOP(v, s, e) for (int v = s; v <= e; v++) {
#define ENDLOOP }

// 도메인 특화 언어(DSL)를 정의하고 DSL을 이용해 코드를
// 작성하는 매크로의 활용법
int main(int argc, char const *argv[]) {
    LOOP(counter, 1, 10)
    PRINT(counter)
    ENDLOOP
    return 0;
}
