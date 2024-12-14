#include <stdio.h>

void converterMassa(void);
void converterVelocidade(void);
void converterTemperatura(void);

int main(void) {
    int resposta;
    printf("-=-=- CONVERSOR DE UNIDADES -=-=-\n");
    printf("Digite:\n");
    printf("1 para converter MASSA.\n");
    printf("2 para converter VELOCIDADE.\n");
    printf("3 para converter TEMPERATURA.\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    scanf("%d", &resposta);
    switch (resposta) {
        case 1:
            converterMassa();
            break;
        case 2:
            converterVelocidade();
            break;
        case 3:
            converterTemperatura();
            break;
        default:
            printf("\nEscolha invalida. Por favor, execute o programa novamente e selecione uma opcao valida.\n");
    }

    return 0;
}

void converterMassa(void) { // Funcao para converter massa de quilograma para gramas
    float kg, gramas; // Declara as duas variaveis kg e garamas e identifica o tipo delas
    printf("\n Digite a massa em quilogramas (kg): "); //Pede ao usuario o valor da massa em kg
    scanf("%f", &kg);  // Le o valor digitado pelo usuario e armazenana na variavel kg
    gramas = kg * 1000; //Converte a massa em kg pra gramas
    printf("%.2f kg equivalem a %.2f gramas.\n", kg, gramas); // Mostra o resultado da conversao
}

void converterVelocidade(void) { // Funcao para converter velocidade de km/h para ms
    float kmh, ms; //Declara as duas variaveis kmh e ms e identifica o tipo delas
    printf("\n Digite a velocidade em km/h: "); // Pede ao usuario o valor da velocidade em km/h
    scanf("%f", &kmh);// Le o valor digitado pelo usuario e armazena na variavel kmh
    ms = kmh / 3.6; // Converte a massa em km/h para ms
    printf("%.2f km/h equivalem a %.2f m/s.\n", kmh, ms); // Mostra o resultado da conversao
}

void converterTemperatura(void) { // Funcao para converter temperatura de Celsius para kelvin
    float celsius, kelvin; // Declara as duas variaveis celsius e kelvin e identifica o tipo delas
    printf("\n Digite a temperatura em Celsius: ");// Pede ao usuario o valor da temperatura em Celsius
    scanf("%f", &celsius); // Le o valor digitado pelo usuario e armazena na variavel celsius
    kelvin = celsius + 273.15; // Converte a temperatura em Celsius para kelvin 
    printf("%.2f graus Celsius equivalem a %.2f Kelvin.\n", celsius, kelvin); // Mostra o resultado da conversao 
}
 
