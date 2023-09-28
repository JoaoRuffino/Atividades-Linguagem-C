

typedef struct Calculadora Calculadora;

Calculadora* criarCalculadora();
void destruirCalculadora(Calculadora *calc);
void criaValores(float *x, float *y, Calculadora *calc);
float somar(float x, float y, Calculadora *calc);
float subtrair(float x, float y, Calculadora *calc);
float multiplicar(float x, float y, Calculadora *calc);
float dividir(float x, float y, Calculadora *calc);
float obterResultado(Calculadora *calc);


