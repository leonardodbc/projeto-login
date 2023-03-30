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

    // teste
    cout << "Para ter cenoura, digite 1\nPara não ter cenoura, digite 0 \n";
    cin >> cenoura;
    cout << "\n";
    cout << "Nome do jogador: \n";
    cin >> JOGADOR;
    cout << "\n";
    cout << "----------------------------------------------------\n";
    // teste

    cout << "*Vocês correm para a floresta, entrando afundo entre as árvores, fugindo dos soldados, depois de muito correrem, param um pouco para descansarem, não ouvem mais passos e vozes dos Tooney Lunes, vocês pararam na beira de um rio, o que você faz?\n";
    cout << "# 1- Atravessar o rio e continuar\n";
    cout << "# 2- Seguir o rio\n";
    cin >> escolha;
    cout << "\n";
    cout << "*Vocês continuam andando por um pouco mais de tempo, mas não sabem onde estão, precisam chegar até um local para se guiarem e irem até a base onde esá o Ovo Dourado, Pancho aponta para uma montanha e diz que vocês deveriam ir até um lugar mais alto para olhar a região.\n";
    cout << "*Vocês então decidem ir até a montanha, mas começam a ouvir os Tooney Lunes seguindo-os novamente e começam a correr, depois de uma hora correndo vocês chegam ao pé da montanha e decidem subi-la.\n";
    cout << "*Chegando em uma parte mais plana em cima da montanha, vocês se deparam com uma caverna e o horizonte, que mostrava uma bela vista, uma floresta cheia de árvores, o rio que vocês encontraram e uma cachoeira em outra montanha ao longe. Olhando mais a norte, vocês vêem o que parece ser o prédio em que estavam presos, ele está piscando em vermelho, ao olhar para sul, vocês encontram, a base do Ovo Dourado, depois de muitas mortes e agentes escondidos, a resistência finalmente conseguiu achar a localização do Ovo Dourado e ele estava a alguns quilômetros de você.\n";
    cout << "\"Ei, " << JOGADOR << ", isso não é cheiro de lenha queimada?\" - Pancho\n";
    cout << "*Pancho, com seu fucinho aguçado, sentiu o cheiro de lenha vindo de dentro da caverna, o que você faz?\n";
    cout << "# 1- Entrar na caverna\n";
    cout << "# 2- Perguntar se tem alguém na caverna\n";
    cin >> escolha;
    cout << "\n";

    // FINAL OK (Vai até o final)
    // Entrar na caverna
    if (escolha == 1)
    {
        cout << "*Pancho toma a dianteira e vocês se preparam para entrar na caverna, conforme vocês vão entrando percebem outras duas fogueiras apagadas, a caverna não parece ser muito grande, vocês conseguem ver uma fogueira acesa no final dela, vêem também uma barraca e uma mochila, mas ninguém por perto, o que você faz?\n";
        cout << "# 1 -> Vasculhar as coisas\n";
        cout << "# 2 -> Sair da caverna\n";
        cin >> escolha;
        cout << "\n";
    
        // Vasculhar as coisas
        if (escolha == 1)
        {
            cout << "*Vocês vão até os pertences no fundo da caverna e percebem que realmente não tem ninguém lá, olham a barraca e encontram um arco e várias flechas, dentro da mochila tem um diário, algumas roupas e uma cenoura que você pega, o que você faz?\n";
            cout << "# 1 -> Ler o diário\n";
            cout << "# 2 -> Sair da caverna\n";
            cin >> escolha;
            cout << "\n";

            // Ler o diário
            if (escolha == 1)
            {
                cout << "*Você decide pegar o diário e ler ele, a capa do diário é de couro e tem apenas duas letras, W.P. você abre o diário na página marcada e lê: \"Diário da missão, estou mais perto do objetivo, eles ainda não me encontraram, consegui uma caverna em um lugar bom para me esconder, hoje irei dar uma olhada no perímetro e checar se os Tooney Lunes estão ativos para que eu possa continuar\", dando uma folheada pelo diário, você percebe que esse indivíduo que está a procura de alguma coisa que envolve os Tooney Lunes, será o Ovo Dourado? Ou ele tem outro objetivo em mente? Qual será o seu objetivo? ~~~~~~~~~\n";
                cout << "*Seus pensamentos são interrompidos quando Pancho te puxa pela cintura e vocês caem no chão atrás de uma pedra, você vê uma flecha fincada na parede de pedra, onde você estava\n";
                cout << "\""+ JOGADOR +", tem um coelho segurando um arco na entrada da caverna, o que a gente faz?\" - Pancho\n";
                cout << "# 1- Lutar contra o coelho\n";
                cout << "# 2- Conversar com o coelho\n";
                cin >> escolha;
                cout << "\n";
                cout << "*Pancho levanta com seu escudo, e antes de fazer qualquer coisa, percebe que o coelho não está mais lá, vocês se encaram e ouvem um barulho acima, Pancho levanta o escudo em cima da cabeça e uma flecha acerta seu escudo, ele cai com a força da flechada e você agarra seu cajado, a fogueira então derrepente é apagada e tudo fica escuro, Pancho te protege com o escudo e vocês começam a correr para fora da caverna, mais duas flechas acertam o escudo de Pancho até vocês saírem da caverna.\n";
                cout << "*Vocês se protegem atrás de uma pedra e Pancho retira as flechas do escudo, você olha por cima da pedra e percebe o coelho saindo da caverna. Você avisa para Pancho e ele fica pronto para atacar o arqueiro, o que você faz?\n";
                cout << "# 1- Ir para cima\n";
                cout << "# 2- \"Nós não somos seu inimigo, estamos aqui pois os Tooney Lunes estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                cin >> escolha;
                cout << "\n";

                // Ir pra cima
                if (escolha == 1)
                {
                    cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                    cout << "# 1- Arremessar o cajado\n";
                    cout << "# 2- Atacar com o cajado\n";
                    cin >> escolha;
                    cout << "\n";

                    // Arremessar o cajado
                    if (escolha == 1)
                    {
                        cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                        cout << "\"Esse coelho não está para brincadeira "+ JOGADOR +", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                        cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                        
                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                        /*começa terceiro cenário*/

                    }

                    // Atacar com o cajado - GAME OVER
                    else if (escolha == 2)
                    {
                        cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // Falar a frase
                else if (escolha == 2)
                {
                    cout << "\"Nós não somos soldados dos Tooney Lunes, estamos aqui porque eles estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                    cout << "\"Exatamente o que um soldado dos Tooney Lunes diria... \" - Coelho Arqueiro\n";
                    cout << "*O coelho mira em você e atira uma flecha, você rapidamente se abaixa, a flecha voa montanha abaixo. Pancho diz que irá para cima dele. O que você faz?\n";
                    cout << "# 1- Ir para cima \n";
                    cout << "# 2- \"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                    cin >> escolha;
                    cout << "\n";

                    // Ir pra cima
                    if (escolha == 1)
                    {
                        cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                        cout << "# 1- Arremessar o cajado\n";
                        cout << "# 2- Atacar com o cajado\n";
                        cin >> escolha;
                        cout << "\n";

                        // Arremessar o cajado
                        if (escolha == 1)
                        {
                            cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                            cout << "\"Esse coelho não está para brincadeira "+ JOGADOR +", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                            cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                            cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                            cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                            cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                            cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                            cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                            cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                            
                            cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                            /*começa terceiro cenário*/

                        }/*termina terceiro cenário*/

                        // Atacar com o cajado - GAME OVER
                        else if (escolha == 2)
                        {
                            cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                        }

                        // GAME OVER
                        else
                        {
                            cout << "Escolha invalida - GAME OVER\n";
                            return 0;
                        }
                    }

                    // Falar a frase
                    else if (escolha == 2)
                    {
                        cout << "\"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                        cout << "\"Wallace Pascal, huh? Aquele merdinha...\" - Coelho Arqueiro\n";
                        cout << "*Você olha novamente por cima da pedra e percebe que o coelho abaixou o arco, você fala:\n";
                        cout << "# 1- \"Não precisamos nos atacar, vamos conversar\"\n";
                        cout << "# 2- \"Larga sua arma e vamos conversar\"\n";
                        cin >> escolha;
                        cout << "\n";
                        cout << "*O coelho te encara e quando ia começar a dizer algo, sobe as orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro olha para você e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                        
                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                        /*começa terceiro cenário*/

                    }/*termina terceiro cenário*/

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // GAME OVER
                else
                {
                    cout << "Escolha inválida - GAME OVER";
                    return 0;
                }
            }

            // Sair da caverna
            else if (escolha == 2)
            {
                cout << "*Você fala para sairem dali e Pancho concorda, quando estão saindo, um coelho aparece na entrada da caverna, ele esta segurando um arco e esta com uma aljava com flechas presa na cintura, ele encara vocês e rapidamente se prepara para atirar uma flecha, Pancho prontamente arma o escudo e começa a correr em direção a ele, você corre junto de Pancho, protegido pelo escudo, o coelho arqueiro acerta duas flechas no escudo de Pancho enquanto estão correndo e quando vão passar por cima dele, ele corre até a parede, pega impulso e pula para trás de vocês, no meio do ar, ele prepara mais uma flecha, Pancho te agarra pelo ombro e te joga para a saída, ele segura o escudo e a flecha acerta o escudo novamente, Pancho cai com a força da flechada e você puxa ele para fora da caverna.\n";
                cout << "*Vocês se protegem atrás de uma pedra e Pancho retira as flechas do escudo, você olha por cima da pedra e percebe o coelho saindo da caverna. Você avisa para Pancho e ele fica pronto para atacar o arqueiro, o que você faz?\n";
                cout << "# 1- Ir para cima\n";
                cout << "# 2- \"Nós não somos seu inimigo, estamos aqui pois os Tooney Lunes estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                cin >> escolha;
                cout << "\n";

                // Ir pra cima
                if (escolha == 1)
                {
                    cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                    cout << "# 1- Arremessar o cajado\n";
                    cout << "# 2- Atacar com o cajado\n";
                    cin >> escolha;
                    cout << "\n";

                    // Arremessar o cajado
                    if (escolha == 1)
                    {
                        cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                        cout << "\"Esse coelho não está para brincadeira "+ JOGADOR +", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                        cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                        
                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                        /*começa terceiro cenário*/

                    }/*termina terceiro cenário*/

                    // Atacar com o cajado - GAME OVER
                    else if (escolha == 2)
                    {
                        cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // Falar a frase
                else if (escolha == 2)
                {
                    cout << "\"Nós não somos soldados dos Tooney Lunes, estamos aqui porque eles estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                    cout << "\"Exatamente o que um soldado dos Tooney Lunes diria... \" - Coelho Arqueiro\n";
                    cout << "*O coelho mira em você e atira uma flecha, você rapidamente se abaixa, a flecha voa montanha abaixo. Pancho diz que irá para cima dele. O que você faz?\n";
                    cout << "# 1- Ir para cima \n";
                    cout << "# 2- \"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                    cin >> escolha;
                    cout << "\n";

                    // Ir pra cima
                    if (escolha == 1)
                    {
                        cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                        cout << "# 1- Arremessar o cajado\n";
                        cout << "# 2- Atacar com o cajado\n";
                        cin >> escolha;
                        cout << "\n";

                        // Arremessar o cajado
                        if (escolha == 1)
                        {
                            cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                            cout << "\"Esse coelho não está para brincadeira "+ JOGADOR +", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                            cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                            cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                            cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                            cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                            cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                            cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                            cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                            
                            cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                            /*começa terceiro cenário*/

                        }/*termina terceiro cenário*/

                        // Atacar com o cajado - GAME OVER
                        else if (escolha == 2)
                        {
                            cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                        }

                        // GAME OVER
                        else
                        {
                            cout << "Escolha invalida - GAME OVER\n";
                            return 0;
                        }
                    }

                    // Falar a frase
                    else if (escolha == 2)
                    {
                        cout << "\"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                        cout << "\"Wallace Pascal, huh? Aquele merdinha...\" - Coelho Arqueiro\n";
                        cout << "*Você olha novamente por cima da pedra e percebe que o coelho abaixou o arco, você fala:\n";
                        cout << "# 1- \"Não precisamos nos atacar, vamos conversar\"\n";
                        cout << "# 2- \"Larga sua arma e vamos conversar\"\n";
                        cin >> escolha;
                        cout << "\n";
                        cout << "*O coelho te encara e quando ia começar a dizer algo, sobe as orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro olha para você e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                        
                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                        /*começa terceiro cenário*/

                    }/*termina terceiro cenário*/

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // GAME OVER
                else
                {
                    cout << "Escolha inválida - GAME OVER\n";
                    return 0;
                }
            }

            // Game Over
            else
            {
                cout << "Escolha invalida - GAME OVER\n";
                return 0;
            }
        }

        // Sair da caverna
        else if (escolha == 2)
        {
            cout << "*Você fala para sairem dali e Pancho concorda, quando estão saindo, um coelho aparece na entrada da caverna, ele esta segurando um arco e esta com uma aljava com flechas presa na cintura, ele encara vocês e rapidamente se prepara para atirar uma flecha, Pancho prontamente arma o escudo e começa a correr em direção a ele, você corre junto de Pancho, protegido pelo escudo, o coelho arqueiro acerta duas flechas no escudo de Pancho enquanto estão correndo e quando vão passar por cima dele, ele corre até a parede, pega impulso e pula para trás de vocês, no meio do ar, ele prepara mais uma flecha, Pancho te agarra pelo ombro e te joga para a saída, ele segura o escudo e a flecha acerta o escudo novamente, Pancho cai com a força da flechada e você puxa ele para fora da caverna.\n";
            cout << "*Vocês se protegem atrás de uma pedra e Pancho retira as flechas do escudo, você olha por cima da pedra e percebe o coelho saindo da caverna. Você avisa para Pancho e ele fica pronto para atacar o arqueiro, o que você faz?\n";
            cout << "# 1- Ir para cima\n";
            cout << "# 2- \"Nós não somos seu inimigo, estamos aqui pois os Tooney Lunes estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
            cin >> escolha;
            cout << "\n";

            // Ir pra cima
            if (escolha == 1)
            {
                cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                cout << "# 1- Arremessar o cajado\n";
                cout << "# 2- Atacar com o cajado\n";
                cin >> escolha;
                cout << "\n";

                // Arremessar o cajado
                if (escolha == 1)
                {
                    cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                    cout << "\"Esse coelho não está para brincadeira "+ JOGADOR +", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                    cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                    cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                    cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                    cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                    cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                    cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                    cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                    
                    cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                    /*começa terceiro cenário*/

                }/*termina terceiro cenário*/

                // Atacar com o cajado - GAME OVER
                else if (escolha == 2)
                {
                    cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                }

                // GAME OVER
                else
                {
                    cout << "Escolha invalida - GAME OVER\n";
                    return 0;
                }
            }

            // Falar a frase
            else if (escolha == 2)
            {
                cout << "\"Nós não somos soldados dos Tooney Lunes, estamos aqui porque eles estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                cout << "\"Exatamente o que um soldado dos Tooney Lunes diria... \" - Coelho Arqueiro\n";
                cout << "*O coelho mira em você e atira uma flecha, você rapidamente se abaixa, a flecha voa montanha abaixo. Pancho diz que irá para cima dele. O que você faz?\n";
                cout << "# 1- Ir para cima \n";
                cout << "# 2- \"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                cin >> escolha;
                cout << "\n";

                // Ir pra cima
                if (escolha == 1)
                {
                    cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                    cout << "# 1- Arremessar o cajado\n";
                    cout << "# 2- Atacar com o cajado\n";
                    cin >> escolha;
                    cout << "\n";

                    // Arremessar o cajado
                    if (escolha == 1)
                    {
                        cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                        cout << "\"Esse coelho não está para brincadeira "+ JOGADOR +", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                        cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                        
                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                        /*começa terceiro cenário*/

                    }/*termina terceiro cenário*/

                    // Atacar com o cajado - GAME OVER
                    else if (escolha == 2)
                    {
                        cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // Falar a frase
                else if (escolha == 2)
                {
                    cout << "\"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                    cout << "\"Wallace Pascal, huh? Aquele merdinha...\" - Coelho Arqueiro\n";
                    cout << "*Você olha novamente por cima da pedra e percebe que o coelho abaixou o arco, você fala:\n";
                    cout << "# 1- \"Não precisamos nos atacar, vamos conversar\"\n";
                    cout << "# 2- \"Larga sua arma e vamos conversar\"\n";
                    cin >> escolha;
                    cout << "\n";
                    cout << "*O coelho te encara e quando ia começar a dizer algo, sobe as orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                    cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                    cout << "*O coelho arqueiro olha para você e diz:\n";
                    cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                    cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                    cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                    cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                    
                    cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                    /*começa terceiro cenário*/

                }/*termina terceiro cenário*/

                // GAME OVER
                else
                {
                    cout << "Escolha invalida - GAME OVER\n";
                    return 0;
                }
            }

            // GAME OVER
            else
            {
                cout << "Escolha inválida - GAME OVER\n";
                return 0;
            }
        }

        // Game Over
        else
        {
            cout << "Escolha invalida - GAME OVER\n";
            return 0;
        }
    }

    // FINAL OK (Vai até o final)
    // Perguntar
    else if (escolha == 2)
    {
        cout << "*Você chega até a entrada da caverna e grita perguntando se tem alguém lá dentro, apenas seu eco pode ser ouvido, sem resposta...\n";
        cout << "*Pancho chama sua atenção e aponta para um coelho segurando um arco e vestindo uma aljava com flechas vindo em direção a caverna, o coelho encara vocês, segura uma das flechas, ainda na aljava, e fica parado, o que você faz?\n";
        cout << "# 1- Lutar contra o coelho\n";
        cout << "# 2- \"Quem é você?\"\n";
        cin >> escolha;
        cout << "\n";

        // Lutar contra o coelho
        if (escolha == 1)
            {
                cout << "*Você segura o cajado e avisa Pancho para lhe dar cobertuda, Pancho ergue seu escudo e começa a ir pra cima do arqueiro, o arqueiro da uma flechada no escudo de Pancho e começa a correr num trajeto de meia lua para ir até a entrada da caverna, você tenta fechar ele pelo outro lado, da um golpe com o cajado em direção a ele\n";
                cout << "# 1- Ataque por cima\n";
                cout << "# 2- Ataque pela lateral\n";
                cin >> escolha;
                cout << "\n";
                cout << "O coelho desvia e pega impulso na parede, ele salta por cima de você e mira uma flecha em sua cabeça, Pancho te empurra e protege você com o escudo, o arqueiro volta a correr em direção a entrada da caverna e vocês correm em direção a uma pedra, o arqueiro da mais uma flechada no escudo e vocês conseguem se esconder, o coelho entra para dentro da caverna.\n";
                cout << "*Vocês se protegem atrás de uma pedra e Pancho retira as flechas do escudo, você olha por cima da pedra e percebe o coelho saindo da caverna. Você avisa para Pancho e ele fica pronto para atacar o arqueiro, o que você faz?\n";
                cout << "# 1- Ir para cima\n";
                cout << "# 2- \"Nós não somos seu inimigo, estamos aqui pois os Tooney Lunes estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                cin >> escolha;
                cout << "\n";

                // Ir pra cima
                if (escolha == 1)
                {
                    cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                    cout << "# 1- Arremessar o cajado\n";
                    cout << "# 2- Atacar com o cajado\n";
                    cin >> escolha;
                    cout << "\n";

                    // Arremessar o cajado
                    if (escolha == 1)
                    {
                        cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                        cout << "\"Esse coelho não está para brincadeira "+ JOGADOR +", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                        cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                        
                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                        /*começa terceiro cenário*/

                    }/*termina terceiro cenário*/

                    // Atacar com o cajado - GAME OVER
                    else if (escolha == 2)
                    {
                        cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // Falar a frase
                else if (escolha == 2)
                {
                    cout << "\"Nós não somos soldados dos Tooney Lunes, estamos aqui porque eles estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                    cout << "\"Exatamente o que um soldado dos Tooney Lunes diria... \" - Coelho Arqueiro\n";
                    cout << "*O coelho mira em você e atira uma flecha, você rapidamente se abaixa, a flecha voa montanha abaixo. Pancho diz que irá para cima dele. O que você faz?\n";
                    cout << "# 1- Ir para cima \n";
                    cout << "# 2- \"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                    cin >> escolha;
                    cout << "\n";

                    // Ir pra cima
                    if (escolha == 1)
                    {
                        cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                        cout << "# 1- Arremessar o cajado\n";
                        cout << "# 2- Atacar com o cajado\n";
                        cin >> escolha;
                        cout << "\n";

                        // Arremessar o cajado
                        if (escolha == 1)
                        {
                            cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                            cout << "\"Esse coelho não está para brincadeira "+ JOGADOR +", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                            cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                            cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                            cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                            cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                            cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                            cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                            cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                            
                            cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                            /*começa terceiro cenário*/

                        }/*termina terceiro cenário*/

                        // Atacar com o cajado - GAME OVER
                        else if (escolha == 2)
                        {
                            cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                        }

                        // GAME OVER
                        else
                        {
                            cout << "Escolha invalida - GAME OVER\n";
                            return 0;
                        }
                    }

                    // Falar a frase
                    else if (escolha == 2)
                    {
                        cout << "\"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                        cout << "\"Wallace Pascal, huh? Aquele merdinha...\" - Coelho Arqueiro\n";
                        cout << "*Você olha novamente por cima da pedra e percebe que o coelho abaixou o arco, você fala:\n";
                        cout << "# 1- \"Não precisamos nos atacar, vamos conversar\"\n";
                        cout << "# 2- \"Larga sua arma e vamos conversar\"\n";
                        cin >> escolha;
                        cout << "\n";
                        cout << "*O coelho te encara e quando ia começar a dizer algo, sobe as orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro olha para você e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                        
                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                        /*começa terceiro cenário*/

                    }/*termina terceiro cenário*/

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }
            
                // GAME OVER
                else
                {
                    cout << "Escolha inválida - GAME OVER";
                    return 0;
                }
          
            }

        // Falar frase
        else if (escolha == 2)
            {
                cout << "\"Quem é você?\"\n";
                cout << "\"Eu é quem pergunto,  o que estão fazendo perto da minha caverna? Vocês mexeram nas minhas coisas?\"\n";
                cout << "*O coelho começa a tirar a flecha da aljava, desconfiado, Pancho se prepara com seu escudo caso aconteça algo\n";
                cout << "# 1- Lutar contra o coelho\n";
                cout << "# 2- \"Nós estamos fugindo dos Tooney Lunes\"\n";
                cin >> escolha;
                cout << "\n";

                // Lutar contra o coelho
                if (escolha == 1)
                {
                    cout << "*Você segura o cajado e avisa Pancho para lhe dar cobertuda, Pancho ergue seu escudo e começa a ir pra cima do arqueiro, o arqueiro da uma flechada no escudo de Pancho e começa a correr num trajeto de meia lua para ir até a entrada da caverna, você tenta fechar ele pelo outro lado, da um golpe com o cajado em direção a ele\n";
                cout << "# 1- Ataque por cima\n";
                cout << "# 2- Ataque pela lateral\n";
                cout << "O coelho desvia e pega impulso na parede, ele salta por cima de você e mira uma flecha em sua cabeça, Pancho te empurra e protege você com o escudo, o arqueiro volta a correr em direção a entrada da caverna e vocês correm em direção a uma pedra, o arqueiro da mais uma flechada no escudo e vocês conseguem se esconder, o coelho entra para dentro da caverna.\n";
                cout << "*Vocês se protegem atrás de uma pedra e Pancho retira as flechas do escudo, você olha por cima da pedra e percebe o coelho saindo da caverna. Você avisa para Pancho e ele fica pronto para atacar o arqueiro, o que você faz?\n";
                cout << "# 1- Ir para cima\n";
                cout << "# 2- \"Nós não somos seu inimigo, estamos aqui pois os Tooney Lunes estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                cin >> escolha;
                cout << "\n";

                // Ir pra cima
                if (escolha == 1)
                {
                    cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                    cout << "# 1- Arremessar o cajado\n";
                    cout << "# 2- Atacar com o cajado\n";
                    cin >> escolha;
                    cout << "\n";

                    // Arremessar o cajado
                    if (escolha == 1)
                    {
                        cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                        cout << "\"Esse coelho não está para brincadeira "+ JOGADOR +", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                        cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                        
                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                        /*começa terceiro cenário*/

                    }/*termina terceiro cenário*/

                    // Atacar com o cajado - GAME OVER
                    else if (escolha == 2)
                    {
                        cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // Falar a frase
                else if (escolha == 2)
                {
                    cout << "\"Nós não somos soldados dos Tooney Lunes, estamos aqui porque eles estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                    cout << "\"Exatamente o que um soldado dos Tooney Lunes diria... \" - Coelho Arqueiro\n";
                    cout << "*O coelho mira em você e atira uma flecha, você rapidamente se abaixa, a flecha voa montanha abaixo. Pancho diz que irá para cima dele. O que você faz?\n";
                    cout << "# 1- Ir para cima \n";
                    cout << "# 2- \"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                    cin >> escolha;
                    cout << "\n";

                    // Ir pra cima
                    if (escolha == 1)
                    {
                        cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                        cout << "# 1- Arremessar o cajado\n";
                        cout << "# 2- Atacar com o cajado\n";
                        cin >> escolha;
                        cout << "\n";

                        // Arremessar o cajado
                        if (escolha == 1)
                        {
                            cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                            cout << "\"Esse coelho não está para brincadeira "+ JOGADOR +", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                            cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                            cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                            cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                            cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                            cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                            cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                            cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                            
                            cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                            /*começa terceiro cenário*/

                        }/*termina terceiro cenário*/

                        // Atacar com o cajado - GAME OVER
                        else if (escolha == 2)
                        {
                            cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                        }

                        // GAME OVER
                        else
                        {
                            cout << "Escolha invalida - GAME OVER\n";
                            return 0;
                        }
                    }

                    // Falar a frase
                    else if (escolha == 2)
                    {
                        cout << "\"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                        cout << "\"Wallace Pascal, huh? Aquele merdinha...\" - Coelho Arqueiro\n";
                        cout << "*Você olha novamente por cima da pedra e percebe que o coelho abaixou o arco, você fala:\n";
                        cout << "# 1- \"Não precisamos nos atacar, vamos conversar\"\n";
                        cout << "# 2- \"Larga sua arma e vamos conversar\"\n";
                        cin >> escolha;
                        cout << "\n";
                        cout << "*O coelho te encara e quando ia começar a dizer algo, sobe as orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro olha para você e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                        
                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                        /*começa terceiro cenário*/

                    }/*termina terceiro cenário*/

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }
            
                // GAME OVER
                else
                {
                    cout << "Escolha inválida - GAME OVER";
                    return 0;
                }
          
                }

                // Falar frase
                else if (escolha == 2)
                {
                    cout << "\"Nós estamos fugindo dos Tooney Lunes\"\n";
                    cout << "\"Os Tooney Lunes estão bem ativos por essa área hoje, mas...\"\n";
                    cout << "*O coelho põe a flecha no arco e a puxa, então pergunta:\n";
                    cout << "\"Como vou saber que vocês não fazem parte do Tooney Lunes?\"\n";
                    cout << "*Ele solta a flecha, Pancho já preparado ergue seu escudo e a flecha acerta o escudo, Pancho cai com a força da flechada, o arqueiro começa a correr fazendo um trajeto de meia lua para chegar a entrada da caverna, você levanta pancho e começam a correr até uma pedra, Pancho leva mais duas flechadas no escudo, o coelho entra na caverna.\n";
                    cout << "*Vocês se protegem atrás de uma pedra e Pancho retira as flechas do escudo, você olha por cima da pedra e percebe o coelho saindo da caverna. Você avisa para Pancho e ele fica pronto para atacar o arqueiro, o que você faz?\n";
                    cout << "# 1- Ir para cima\n";
                    cout << "# 2- \"Nós não somos seu inimigo, estamos aqui pois os Tooney Lunes estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                    cin >> escolha;
                    cout << "\n";

                    // Ir pra cima
                    if (escolha == 1)
                    {
                        cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                        cout << "# 1- Arremessar o cajado\n";
                        cout << "# 2- Atacar com o cajado\n";
                        cin >> escolha;
                        cout << "\n";

                        // Arremessar o cajado
                        if (escolha == 1)
                        {
                            cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                            cout << "\"Esse coelho não está para brincadeira "+ JOGADOR +", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                            cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                            cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                            cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                            cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                            cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                            cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                            cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                            
                            cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                            /*começa terceiro cenário*/

                        }/*termina terceiro cenário*/

                        // Atacar com o cajado - GAME OVER
                        else if (escolha == 2)
                        {
                            cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                        }

                        // GAME OVER
                        else
                        {
                            cout << "Escolha invalida - GAME OVER\n";
                            return 0;
                        }
                    }

                    // Falar a frase
                    else if (escolha == 2)
                    {
                        cout << "\"Nós não somos soldados dos Tooney Lunes, estamos aqui porque eles estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                        cout << "\"Exatamente o que um soldado dos Tooney Lunes diria... \" - Coelho Arqueiro\n";
                        cout << "*O coelho mira em você e atira uma flecha, você rapidamente se abaixa, a flecha voa montanha abaixo. Pancho diz que irá para cima dele. O que você faz?\n";
                        cout << "# 1- Ir para cima \n";
                        cout << "# 2- \"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                        cin >> escolha;
                        cout << "\n";

                        // Ir pra cima
                        if (escolha == 1)
                        {
                            cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                            cout << "# 1- Arremessar o cajado\n";
                            cout << "# 2- Atacar com o cajado\n";
                            cin >> escolha;
                            cout << "\n";

                            // Arremessar o cajado
                            if (escolha == 1)
                            {
                                cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                                cout << "\"Esse coelho não está para brincadeira "+ JOGADOR +", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                                cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                                cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                                cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                                cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                                cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                                cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                                cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";                               
                                cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                                /*começa terceiro cenário*/
                            }/*termina terceiro cenário*/

                            // Atacar com o cajado - GAME OVER
                            else if (escolha == 2)
                            {
                                cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                            }

                            // GAME OVER
                            else
                            {
                                cout << "Escolha invalida - GAME OVER\n";
                                return 0;
                            }
                        }

                        // Falar a frase
                        else if (escolha == 2)
                        {
                            cout << "\"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                            cout << "\"Wallace Pascal, huh? Aquele merdinha...\" - Coelho Arqueiro\n";
                            cout << "*Você olha novamente por cima da pedra e percebe que o coelho abaixou o arco, você fala:\n";
                            cout << "# 1- \"Não precisamos nos atacar, vamos conversar\"\n";
                            cout << "# 2- \"Larga sua arma e vamos conversar\"\n";
                            cin >> escolha;
                            cout << "\n";
                            cout << "*O coelho te encara e quando ia começar a dizer algo, sobe as orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                            cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                            cout << "*O coelho arqueiro olha para você e diz:\n";
                            cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                            cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                            cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                            cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                            
                            cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                            /*começa terceiro cenário*/

                        }/*termina terceiro cenário*/

                        // GAME OVER
                        else
                        {
                            cout << "Escolha invalida - GAME OVER\n";
                            return 0;
                        }
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha inválida - GAME OVER";
                        return 0;
                    }
                }
            }

        // GAME OVER
        else
            {
                cout << "Escolha invalida - GAME OVER";
                return 0;
            }   
    }

    // Game Over
    else
    {
        cout << "Escolha invalida - GAME OVER\n";
        return 0;
    }
}
