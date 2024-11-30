#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcd", str2[] = "aBcd", str3[] = "abcd";
    int resultado;

    resultado = strcmp(str1, str2); // compara as strings alfabeticamente.
    printf("str1 e str2 = %d\n", resultado); // 1 = diferente

    resultado = strcmp(str1, str3);
    printf("str1 e str3 = %d\n", resultado); // 0 = igual

    char frase[100]; // *Ao todo (reutilizável)
    int nomeTamanho; // *Uma parte (não reutilizável)

    printf("Insira o seu nome: ");
    scanf("%d", &nomeTamanho);
    gets(frase); // gets = scanf

    nomeTamanho = strlen(frase);

    printf("O seu nome possui %d caracteres\n", nomeTamanho);

    char copia_Morada[100];
    char nome[100];

    printf("Insira o seu apelido: ");
    gets(nome);
    printf("Insira a sua morada: ");
    gets(copia_Morada);

    strcpy(copia_Morada, nome); // O que está em nome vai para cópia

    puts(nome); // Vai aparecer o nome

    char mensagem[100] = "Sr(a). ";
    char alcunha[100];

    printf("Insira a sua alcunha: ");
    gets(alcunha); // = scanf("%c", alcunha);

    strcat(mensagem, alcunha);
    strcat(mensagem, ". Bem vindo");
    puts(mensagem);

    return 0;
}
