/* =====================================================
 * PIF - Aula 12 | Desafio 6: o modulo legado em C
 * Compilar e rodar:  cc pontocerto.c -o pontocerto && ./pontocerto
 * Sem compilador C: https://www.onlinegdb.com (escolha a linguagem C)
 * ===================================================== */
#include <stdio.h>

/* Pontos em dobro */
int pontosEmDobro(int pontos) {
    return pontos * 2;
}

/* Bonus fixo de 50 pontos */
int bonus50(int pontos) {
    return pontos + 50;
}

/* Aplica a regra ao valor e devolve o resultado */
int calculaPontos(int (*regra)(int), int valor) {
    return regra(valor);
}

/* Aplica regra1 e depois regra2 ao valor */
int acumula(int (*regra1)(int), int (*regra2)(int), int valor) {
    return regra2(regra1(valor));
}

int main(void) {
    printf("%d\n", calculaPontos(pontosEmDobro, 80));   /* 160 */
    printf("%d\n", calculaPontos(bonus50, 80));          /* 130 */
    printf("%d\n", acumula(pontosEmDobro, bonus50, 100)); /* 250 */
    printf("%d\n", acumula(bonus50, pontosEmDobro, 100)); /* 300 */
    return 0;
}
