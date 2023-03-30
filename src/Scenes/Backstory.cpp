#include "iostream"
#include <string>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cenoura;
    string JOGADOR;
    int escolha;
    cout << ""
              << "\n\n\n\n\n\n Boas vindas ao mundo de: \n"
              << "  ______    ________   ____  _____     ___     _______           _       \n"
              << ".' ____ \\  |_   __  | |_   \\|_   _|  .'   `.  |_   __ \\         / \\      \n"
              << "| (___ \\_|   | |_ \\_|   |   \\ | |   /  .-.  \\   | |__) |       / _ \\     \n"
              << " _.____`.    |  _| _    | |\\ \\| |   | |   | |   |  __ /       / ___ \\    \n"
              << "| \\____) |  _| |__/ |  _| |_\\   |_  \\  `-'  /  _| |  \\ \\_   _/ /   \\ \\_  \n"
              << " \\______.' |________| |_____|\____|   `.___.'  |____| |___| |____| |____| \n"
              << ""
              << "-By Eduardo Ramos, Leonardo Cardoso, Yan Dagnoni e Lucas da Pieve \n\n\n\n\n\n";
    cout << "Insira seu nome, aventureiro(a): ";
    cin >> JOGADOR;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "Senora é um incrível mundo onde coelhos desenvolveram seu corpo e consciência, tal qual a ponto de ser comparada igual a dos humanos.\n\n";
    cout << "Os humanos e os coelhos coexistiram desde o princípio e poucas vezes entraram em conflitos, vezes em que políticos das duas espécies não tinham relações pessoais muito boas, mas nunca passando de um xingamento ali ou uma patada aqui. \n\n";
    cout << "Porém, o que ninguém esperava aconteceu, uma rebelião se instaurou no mundo de Senora um grupo radical, os Tooney Lunes, formado por humanos e coelhos, trabalharam juntos para dominar Senora sob o comando de Wallace Pascal, O Coelho.\n\n";
    cout << "Wallace Pascal é um coelho destemido e com princípios muito bem definidos desde sua infância, mais inteligente que os humanos medíocres e mais forte que os coelhos normais, Wallace nunca gostou de como a coexistência entre humanos e coelhos foi instaurada e durante toda sua vida visou em apenas um objetivo: ser o imperador de Senora.\n\n";
    cout << "Wallace estudou sua vida inteira por uma arma mágica que era muito citada em lendas e contos desde o início das eras, o Ovo Dourado, o mito diz que, quem obtiver o Ovo Dourado, terá poder suficiente para fazer tudo o que sempre quis.\n\n";
    cout << "Após anos e anos, ele finalmente encontrou o Ovo Dourado e vagou Senora inteira recrutando coelhos e humanos que compactuavam com seu objetivo para se juntarem a ordem Tooney Lunes, que posteriormente viria a dominar o mundo.\n\n";
    cout << "Você, " + JOGADOR + ", faz parte da resistência e tem o objetivo de encontrar e tomar o Ovo Dourado de Wallace Pascal, após meses rastreando e obtendo informações, a resistência finalmente conseguiu achar a localização do Ovo Dourado.\n\n";
    cout << "Somente você, " + JOGADOR + ", tem o que é necessário para concluir esse objetivo e restaurar a paz em Senora.\n\n";
    cout << "\"Esperamos pelo seu sucesso e glória nessa jornada\" - Resistência\n\n";
    cout << "Digite 1 para continuar...\n";
    cin >> escolha;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
}