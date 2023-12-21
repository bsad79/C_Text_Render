#include <stdio.h>
#include "alphabet.h"

void limpa_tela() {
    #ifdef linux
    system("clear");
    #endif // linux

    #ifdef _WIN32
    system("cls");
    #endif // _WIN32

    #ifdef _WIN64
    system("cls");
    #endif // _WIN64
}

int main()
{
    int linha, a, b;

    for (a = 0; a < 1; a++) {
        for (linha = 0; linha < 10; linha++) {
            h(linha);
            espaco();
            e(linha);
            espaco();
            l(linha);
            espaco();
            l(linha);
            espaco();
            o(linha);
            espaco();
            espaco();
            w(linha);
            espaco();
            o(linha);
            espaco();
            r(linha);
            espaco();
            l(linha);
            espaco();
            d(linha);
            espaco();
            printf("\n");
        }
        printf("\n");

    }

    /*for (linha = 0; linha < 10; linha++) {
        a(linha);
        espaco();
        b(linha);
        espaco();
        c(linha);
        espaco();
        d(linha);
        espaco();
        e(linha);
        espaco();
        f(linha);
        espaco();
        g(linha);
        espaco();
        h(linha);
        espaco();
        i(linha);
        espaco();
        j(linha);
        espaco();
        k(linha);
        espaco();
        printf("\n");
    }
        printf("\n");
    for (linha = 0; linha < 10; linha++) {
        l(linha);
        espaco();
        m(linha);
        espaco();
        n(linha);
        espaco();
        o(linha);
        espaco();
        p(linha);
        espaco();
        q(linha);
        espaco();
        r(linha);
        espaco();
        s(linha);
        espaco();
        t(linha);
        espaco();
        u(linha);
        espaco();
        printf("\n");
    }
        printf("\n");
    for (linha = 0; linha < 10; linha++) {
        v(linha);
        espaco();
        w(linha);
        espaco();
        x(linha);
        espaco();
        y(linha);
        espaco();
        z(linha);
        printf("\n");
    }*/

    return 0;
}
