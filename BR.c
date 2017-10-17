#include<stdio.h>
int main()
{
    double var0, var1, var2, var3, var4;
    var0 = 16;
    printf("welcome to number guessing segment of sodium.\nthat game is so simple: consider a number between 0 and 32. after, awnser questions;\nok, you have started the game.\n");
    var3 = 16;
    for (var1 = 1; var1 <= 500; var1++) {
        printf("is your number more than %lf? [no = 0, yes = 1, that's my number = 2  ]: ", var3);
        scanf("%lf", &var2);
        if (var2 == 0) {
                var3= var3 - (var0 / 2);
                var0 = var0 / 2;
        } else if (var2 == 1) {
                var3= var3 + (var0 / 2);
                var0 = var0 / 2;
        } else if ( var2 == 2) {
            goto win;
        }
    }
    win:
    printf("i found your number!!; it's %lf\n", var3);
}

 