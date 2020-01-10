#include <stdio.h>
struct fraction {
    int numer;
    int deno;
};
//最大公约数
int comdiv(int num1,int num2){
    return num2?comdiv(num2, num1 % num2) : num1;
}
//最小公倍数
int commul(int num1,int num2){
    return num1 / comdiv(num1, num2) * num2;
}
//约分
struct fraction rdcfrc(struct fraction frac){
    int div = comdiv(frac.numer, frac.deno);
    frac.numer /= div;
    frac.deno /= div;
    return frac;
}
//两个分数相加
struct fraction ADD(struct fraction frac1,struct fraction frac2){
    int mul = commul(frac1.deno, frac2.deno);
    int numer = mul / frac1.deno * frac1.numer + mul / frac2.deno * frac2.numer;
    struct fraction sum = {numer, mul};
    return rdcfrc(sum);
}
int main(){
    char op;
    struct fraction frac1, frac2;
    while (1) {
        printf("input:\n");
        scanf("%d/%d%c%d/%d", &frac1.numer, &frac1.deno, &op, &frac2.numer, &frac2.deno);
        struct fraction result;
        switch (op) {
        case '+':
            result = ADD(frac1, frac2);
            break;
        default:
            break;

        }
        printf("%d/%d\n", result.numer, result.deno);
    }
    return 0;
}
