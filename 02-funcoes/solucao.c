// TODO implemente uma funcao chamada solucao aqui
// registradores
// %edi int a
// %rsi long b





int solucao(int a, long b, long *c){
    a = a + a;
    int res = b + 2*b;
    res += a;
    *c = res;
    res = b + 4*b;
    res += a;
    return res;
}