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
    cout << "* Seu fiel coelho escudeiro, Pancho Sança, acorda você, vocês estão presos em um quarto com uma porta trancada.\n";
    cout << "\"" + JOGADOR +", acorda logo, vamos, a gente tem que dar um jeito de sair daqui\" - Pancho\n";
    cout << "# 1- O que aconteceu?\n";
    cout << "# 2- Onde estamos?\n";
    cout << "# 3- Fomos capturados?\n";
    cin >> escolha;
    cout << "\"Nós estamos presos em uma base inimiga próxima à localização do Ovo Dourado, fomos capturados por uma equipe de rastreamento, precisamos chegar logo antes de descobrirem que estamos atrás do Ovo Dourado\" - Pancho\n";
    cout << "# 1- Como vamos sair daqui?\n";
    cout << "# 2- Olhar em volta do cômodo\n";
    cin >> escolha;

    // Perguntar
    if (escolha == 1){
    cout << "1 - \"Eu estava olhando o cômodo e achei uma rachadura no teto, pelo som parece dar acesso a uma tubulação, precisamos quebrar para passar \"\n";
    }

    // Olhar em volta
    else if (escolha == 2){
        cout << "2 - * Você procura pelo cômodo uma forma de sair e encontra uma rachadura no teto, pelo som parece dar acesso a uma tubulação.\n";
    }

    cout << "# 1- Tentar quebrar o teto\n";
    cout << "# 2- Bater na porta\n";
    cin >> escolha;

    // Quebrar o teto
    if (escolha == 1){
        cout << "* Você ajuda Pancho a subir em seus ombros e ele começa a dar patadas no teto, vocês percebem um leve vazamento de ar pela rachadura. Pancho novamente da mais patadas na rachadura e abre um pequeno buraco no teto, suficiente para você passar.\n";
        cout << "* Você sobe pela tubulação e encontra um caminho pela direita e um pela esquerda, qual você segue?\n";
        cout << "# 1- Direita\n";
        cout << "# 2- Esquerda\n";
        cin >> escolha;
        cout << "* Você segue pela tubulação em uma linha reta até encontrar uma saída de ar que da acesso ao corredor, não há qualquer barulho abaixo, o que você faz?\n";
        cout << "# 1- Descer para o corredor\n";
        cout << "# 2- Continuar\n";
        cin >> escolha;

        // Continuar
        if (escolha == 2){
            cout << "*É um beco sem saída, mas você encontra uma cenoura\n";
            cenoura = 1;
        }
        
        cout << "* Você sai da tubulação\n";
        cout << "# 1- Voltar até a porta do quarto \n";
        cout << "# 2- Vasculhar outro quarto\n";
        cin >> escolha;

        // Voltar para o quarto
        if (escolha == 1){
            cout << "* Você volta até a porta do quarto onde está Pancho e tenta abrir a porta, mas ela está trancada por uma chave, ela só irá abrir se você encontrar a chave...\n";
            cout << "* Barulhos de passos podem ser ouvidos vindo da sua direita, e uma sombra começa a aparecer pela esquina do corredor\n";
            cout << "# 1- Entrar em outro quarto\n";
            cout << "# 2- Se esconder e esperar\n";
            cin >> escolha;

            // Entrar em outro quarto
            if (escolha == 1){
                cout << "* Você entra no quarto em frente de onde Pancho está, encontra uma mesa grande enconstada na parede, uma cama e um baú, em cima da mesa você encontra o seu cajado, o escudo de Pancho e uma túnica de lã, o que você faz?\n";
                cout << "# 1- Olhar o baú\n";
                cout << "# 2- Pegar o cajado\n";
                cin >> escolha;

                // Olhar o baú
                if (escolha == 1){
                    cout << "No baú você encontra uma cenoura\n";
                    cenoura = 1;
                    cout << "*Você pega o cajado e escuta um barulho vindo do lado de fora do quarto, você abre a porta e vê o quarto, onde Pancho está, com a porta aberta e um soldado segurando uma adaga indo em direção a ele, Pancho consegue ver você do outro lado do corredor, te encara e faz um sinal com a cabeça, então você corre até o soldado e ataca ele pelas costas, bate na cabeça dele com o seu cajado, com toda sua força e ele cai desmaiado no chão, vocês pegam a chave e trancam ele no quarto\n";
                    cout << "*Vocês escutam mais passos e murmúrios vindo de outro corredor, o que você faz?\n";
                    cout << "# 1- Voltar para o quarto \n";
                    cout << "# 2- Ir em direção ao barulho\n";
                    cin >> escolha;

                    // Voltar para o quarto
                    if (escolha == 1){
                        cout << "\n";
                    }

                    // Ir ao barulho - GAME OVER
                    else if (escolha == 2){
                        cout << "*Vocês vão em direção ao barulho e se deparam com uma equipe de cinco guardas, eles os veem e acionam um alarme, vocês tentam correr mas mais guardas começam a aparecer, até vocês ficarem encurralados, os guardas capturam vocês e te executam - GAME OVER\n";
                        return 0;
                    }

                    // GAME OVER
                    else {
                        cout << "Escolha invalida - GAME OVER";
                        return 0;
                    }
                
                }

                // Pegar o cajado
                else if (escolha == 2){
                    cout << "*Você pega o cajado e escuta um barulho vindo do lado de fora do quarto, você abre a porta e vê o quarto, onde Pancho está, com a porta aberta e um soldado segurando uma adaga indo em direção a ele, Pancho consegue ver você do outro lado do corredor, te encara e faz um sinal com a cabeça, então você corre até o soldado e ataca ele pelas costas, bate na cabeça dele com o seu cajado, com toda sua força e ele cai desmaiado no chão, vocês pegam a chave e trancam ele no quarto\n";
                    cout << "*Vocês escutam mais passos e murmúrios vindo de outro corredor, o que você faz?\n";
                    cout << "# 1- Voltar para o quarto \n";
                    cout << "# 2- Ir em direção ao barulho\n";
                    cin >> escolha;

                    // Voltar para o quarto
                    if (escolha == 1){
                        cout << "\n";
                    }

                    // Ir ao barulho - GAME OVER
                    if (escolha == 2){
                        cout << "*Vocês vão em direção ao barulho e se deparam com uma equipe de cinco guardas, eles os veem e acionam um alarme, vocês tentam correr mas mais guardas começam a aparecer, até vocês ficarem encurralados, os guardas capturam vocês e te executam - GAME OVER\n";
                        return 0;
                    }

                    // GAME OVER
                    else {
                        cout << "Escolha invalida - GAME OVER";
                        return 0;
                    }
                
                }

                // GAME OVER
                else {
                    cout << "Escolha invalida - GAME OVER";
                    return 0;
                }
                
            }

            // Se esconder
            else if (escolha == 2){
                cout << "\"James isso, James aquilo, aquele babaca não sabe nem como cuidar do perímetro direito e fica me mandando dar conta dos prisoneiros que ele deixou entrar\" - Soldado James\n";
                cout << "* Você se depara com um coelho usando uma túnica de couro e uma bainha na sua cintura,  ele está carregando uma chave e parece estar furioso\n";
                cout << "* Ele se aproxima do quarto onde Pancho está e abre a porta\n";
                cout << "* Pancho está no fundo do quarto encostado na parede e vê você escondido atrás do coelho\n";
                cout << "* O soldado olha pelo quarto e percebe o buraco no teto e o seu desaparecimento\n";
                cout << "* O soldado retira sua adaga da bainha e começa a ir para cima de Pancho, gritando e perguntando o que haviam feito\n";
                cout << "* Pancho encara você e faz um sinal com a cabeça, o que você faz?\n";
                cout << "# 1- Ir para cima do soldado e desarma-lo\n";
                cout << "# 2- Chamar a atenção do soldado\n";
                cin >> escolha;

                // Ir para cima
                if (escolha == 1){
                    cout << "* Você corre em direção ao soldado e o empurra com toda sua força em direção ao chão, ele caí e a adaga desliza para perto de Pancho, você tenta mobiliza-lo mas ele consegue se soltar, Pancho pega a adaga, você e o soldado entram em combate corporal, Pancho enfia a adaga na coxa do soldado e empurra ele com uma patada, vocês pegam a chave, saem do quarto e trancam o soldado lá dentro\n";
                    cout << "* Ofegantes, vocês escutam mais passos e murmúrios vindo de outro corredor, o que você faz?\n";
                    cout << "# 1- Entrar em outro quarto\n";
                    cout << "# 2- Ir em direção ao barulho\n";
                    cin >> escolha;

                    // Voltar para o quarto
                    if (escolha == 1){
                        cout << "\n";
                    }

                    // Ir ao barulho - GAME OVER
                    else if (escolha == 2){
                        cout << "*Vocês vão em direção ao barulho e se deparam com uma equipe de cinco guardas, eles os veem e acionam um alarme, vocês tentam correr mas mais guardas começam a aparecer, até vocês ficarem encurralados, os guardas capturam vocês e te executam - GAME OVER\n";
                        return 0;
                    }

                    // GAME OVER
                    else {
                        cout << "Escolha invalida - GAME OVER";
                        return 0;
                    }
                
                }

                // Chamar o soldado
                else if (escolha == 2){
                    cout << "*Você chama o soldado e ele se vira de costas para Pancho para olhar quem está chamando ele, então pancho aproveita a situação e da uma patada em seus joelhos, ele caí e a adaga escorrega até a porta, enquanto isso você corre em direção ao quarto e pega a adaga,  vai até ao soldado caído e tenta imobiliza-lo, ele se solta e vocês entram em uma luta corporal, ele te derruba no chão, Pancho aproveita o momento e consegue imobilizar um dos braços dele,  você acerta com a faca no tornozelo do soldado e ele cai, vocês pegam a chave e trancam o soldado la dentro\n";
                    cout << "* Vocês escutam mais passos e murmúrios vindo de outro corredor, o que você faz?\n";
                    cout << "# 1- Voltar para o quarto da frente\n";
                    cout << "# 2- Ir em direção ao barulho\n";

                    // Voltar para o quarto
                    if (escolha == 1){
                        cout << "\n";
                    }

                    // Ir ao barulho - GAME OVER
                    if (escolha == 2){
                        cout << "*Vocês vão em direção ao barulho e se deparam com uma equipe de cinco guardas, eles os veem e acionam um alarme, vocês tentam correr mas mais guardas começam a aparecer, até vocês ficarem encurralados, os guardas capturam vocês e te executam - GAME OVER\n";
                        return 0;
                    }

                    // GAME OVER
                    else {
                        cout << "Escolha invalida - GAME OVER";
                        return 0;
                    }
                }

                // GAME OVER
                else {
                    cout << "Escolha invalida - GAME OVER";
                    return 0;
                }
            }
        
            // GAME OVER
            else {
                cout << "Escolha invalida - GAME OVER";
                return 0;
            }    
        }

        // Vasculhar outro quarto
        else if (escolha == 2){
            cout << "* Você entra no quarto em frente de onde Pancho está, encontra uma mesa grande enconstada na parede, uma cama e um baú, em cima da mesa você encontra o seu cajado, o escudo de Pancho e uma túnica de lã, o que você faz?\n";
            cout << "# 1- Olhar o baú\n";
            cout << "# 2- Pegar o cajado\n";
            cin >> escolha;

            // Olhar o baú
            if (escolha == 1){
                cout << "No baú você encontra uma cenoura\n";
                cenoura = 1;
                cout << "*Você pega o cajado e escuta um barulho vindo do lado de fora do quarto, você abre a porta e vê o quarto, onde Pancho está, com a porta aberta e um soldado segurando uma adaga indo em direção a ele, Pancho consegue ver você do outro lado do corredor, te encara e faz um sinal com a cabeça, então você corre até o soldado e ataca ele pelas costas, bate na cabeça dele com o seu cajado, com toda sua força e ele cai desmaiado no chão, vocês pegam a chave e trancam ele no quarto\n";
                cout << "*Vocês escutam mais passos e murmúrios vindo de outro corredor, o que você faz?\n";
                cout << "# 1- Voltar para o quarto \n";
                cout << "# 2- Ir em direção ao barulho\n";

                // Voltar para o quarto
                if (escolha == 1){
                    cout << "\n";
                }

                // Ir ao barulho - GAME OVER
                else if (escolha == 2){
                    cout << "*Vocês vão em direção ao barulho e se deparam com uma equipe de cinco guardas, eles os veem e acionam um alarme, vocês tentam correr mas mais guardas começam a aparecer, até vocês ficarem encurralados, os guardas capturam vocês e te executam - GAME OVER\n";
                    return 0;
                }

                // GAME OVER
                else {
                    cout << "Escolha invalida - GAME OVER";
                    return 0;
                }
            
            }

            // Pegar o cajado
            else if (escolha == 2){
                cout << "*Você pega o cajado e escuta um barulho vindo do lado de fora do quarto, você abre a porta e vê o quarto, onde Pancho está, com a porta aberta e um soldado segurando uma adaga indo em direção a ele, Pancho consegue ver você do outro lado do corredor, te encara e faz um sinal com a cabeça, então você corre até o soldado e ataca ele pelas costas, bate na cabeça dele com o seu cajado, com toda sua força e ele cai desmaiado no chão, vocês pegam a chave e trancam ele no quarto\n";
                cout << "*Vocês escutam mais passos e murmúrios vindo de outro corredor, o que você faz?\n";
                cout << "# 1- Voltar para o quarto \n";
                cout << "# 2- Ir em direção ao barulho\n";

                // Voltar para o quarto
                if (escolha == 1){
                    cout << "\n";
                }

                // Ir ao barulho - GAME OVER
                else if (escolha == 2){
                    cout << "*Vocês vão em direção ao barulho e se deparam com uma equipe de cinco guardas, eles os veem e acionam um alarme, vocês tentam correr mas mais guardas começam a aparecer, até vocês ficarem encurralados, os guardas capturam vocês e te executam - GAME OVER\n";
                    return 0;
                }

                // GAME OVER
                else {
                    cout << "Escolha invalida - GAME OVER";
                    return 0;
                }
            
            }

            // GAME OVER
            else {
                cout << "Escolha invalida - GAME OVER";
                return 0;
            }
        }
        
        // GAME OVER
        else {
            cout << "Escolha invalida - GAME OVER";
            return 0;
        }
    }

    // Bater na porta
    else if (escolha == 2){
        cout << "* Você bate na porta e nada acontece, Pancho também bate na porta e nada acontece, vocês ficam se olhando e depois de alguns segundos começam a ouvir algo, parece ser alguém falando\n";
        cout << "# 1- Chamar por ajuda\n";
        cout << "# 2- Se preparar caso alguém entre\n";
        cin >> escolha;

        // Chamar por ajuda
        if (escolha == 1){
            cout << "* Você grita chamando por ajuda, o barulho de lado de fora para e vocês escutam uma voz bem próxima a porta - Vocês estão acordados? - fala o Soldado, você e Pancho concordam e então nada acontece, passam-se alguns minutos e a tranca da porta faz um barulho e a maçaneta começa a girar e a porta se abre, aparecem cinco soldados armados com lanças e um soldado com uma adaga, os soldados com lanças empurram você e Pancho para o fim do quarto, e vocês ficam contra a parede, o que você faz?\n";
            cout << "# 1- Perguntar onde estão\n";
            cout << "# 2- Lutar \n";
            cin >> escolha;

            // Perguntar - Game over
            if (escolha == 1){
                cout << "\"Calma ai coelho amigo, onde nós estamos?\" - " + JOGADOR + "\n";
                cout << "\"Você está de brincadeira comigo?  Vocês foram capturados dentro do território dos Tooney Lunes, levando em conta os equipamentos que vocês estavam usando quando foram capturados, não parece amadores, porque estão aqui?\" - Soldado\n";
                cout << "* O soldado com a adaga está furioso e os soldados com lança forçam vocês mais ainda contra a parede, o que você responde?\n";
                cout << "# 1- \"Estou procurando pelo Ovo Dourado\"\n";
                cout << "# 2- \"Viemos aqui para entrar para os Tooney Lunes\"\n";
                cin >> escolha;

                // Game over
                if (escolha == 1){
                    cout << "\"Estou procurando pelo Ovo Dourado\"\n";
                    cout << "* O soldado com a adaga faz um sinal e quatro dos cinco lançeiros atacam Pancho, ele vai a óbito no mesmo momento, então o outro soldado com lança põe a lança no seu pescoço\n";
                    cout << "Vocês nunca iram derrubar Wallace Pascal, o soldado te ataca - Game over\n";
                    return 0;
                }

                // Game over
                else if (escolha == 2){
                    cout << "\"Viemos aqui para entrar para o Tooney Lunes\"\n";
                    cout << "* O soldado com a adaga faz um sinal e quatro dos cinco lançeiros atacam Pancho, ele vai a óbito no mesmo momento, então o outro soldado com lança põe a lança no seu pescoço\n";
                    cout << "\"Nós vimos a mensagem da resistência em seus pertences, sabemos da sua identidade, " + JOGADOR + "\" - Game over\n";
                    return 0;
                }

                // Game over
                else {
                    cout << "Escolha invalida - Game over\n";
                    return 0;
                }
            }

            // Lutar - Game over
            else if (escolha == 2)
            {
                cout << "* Você e Pancho se encaram e vão para cima dos soldados, Pancho é empalado por quatro lanças e você é acertado com a lança no peito e derrubado no chão, o soldado, com a adaga, chega em você e termina o serviço -GAME OVER\n";
                return 0;
            }
            
            // Game over
            else {
                cout << "Escolha invalida - Game over";
                return 0;
            }
        }

        // Se preparar
        else if (escolha == 2){
            cout << "* Pancho vai para um dos cantos do quarto próximo a porta e você fica no fundo do quarto, para servir de isca, a tranca da porta faz um barulho e se abre, a maçaneta gira e a porta abre, um soldado coelho de túnica de couro e uma bainha com adaga aparece, ele entra no quarto e Pancho pega ele pelas costas, derrubando-o no chão, Pancho consegue imobilizar ele e você rouba a adaga e a chave do soldado, vocês prendem ele no quarto.\n";
            cout << "* Vocês escutam passos e murmúrios vindo de outro corredor, o que você faz?\n";
            cout << "# 1- Entrar no quarto da frente\n";
            cout << "# 2- Ir em direção ao barulho\n";
            cin >> escolha;

            // Quarto da frente
            if (escolha == 1){
                cout << "\n";
            }

            // Ir ao barulho - Game over
            else if (escolha == 2)
            {
                cout << "*Vocês vão em direção ao barulho e se deparam com uma equipe de cinco guardas, eles os veem e acionam um alarme, vocês tentam correr mas mais guardas começam a aparecer, até vocês ficarem encurralados, os guardas capturam vocês e te executam - Game over\n";
                return 0;
            }
            
            // Game over
            else {
                cout << "Escolha inválida - Game over\n";
                return 0;
            }

        }

        // Game over
        else {
            cout << "Escolha invalida - GAME OVER";
            return 0;
        }
    }

    // GAME OVER
    else{
        cout << "Escolha invalida - GAME OVER";
        return 0;
    }

    // Ir para o quarto da frente
    cout << "*Vocês vão para o quarto em frente ao que estavam e pegam seus equipamentos, Pancho com seu escudo e você com seu cajado e túnica\n";
    cout << "\"Obrigado por me salvar, " + JOGADOR + ", eu sei que esse é meu trabalho ja que sou seu escudeiro mas mesmo assim, não estamos machucados então vamos seguir em frente, darei tudo de mim para não sermos pegos novamente\" - Pancho\n";
    cout << "* Agora devidamente armados, você e Pancho saem pelos corredores evitando os sons e guardas do prédio até encontrarem uma janela no segundo andar que da acesso a saída, e uma escada que vai até o primeiro andar, por onde vocês vão?\n";
    cout << "# 1- Janela\n";
    cout << "# 2- Escada\n";
    cin >> escolha;

    // Segundo cenário
    // Janela
    if (escolha == 1){
        cout << "* Pancho abre a janela, olha, e fala para você que devem ter cerca de cinco metros até o chão, ele vai até a cortina da janela, rasga ela e vocês começam a fazer uma corda, ela ficou forte o suficiente para levar uma pessoa por vez e tem aproximadamente 2 metros de comprimento, você:\n";
        cout << "# 1- Se arrisca ser pego, mas fazer uma corda maior\n";
        cout << "# 2- Fugir com essa corda\n";
        cin >> escolha;

        // Segundo cenário
        // Se arriscar
        if (escolha == 1){
            cout << "* Você vai no próximo corredor e pega mais tecido para fazer corda, quando está voltando, se depara com dois soldados coelhos fazendo ronda vindo na direção do corredor em que você se encontra, o que você faz?\n";
            cout << "# 1- Esconder\n"; 
            cout << " # 2- Ir pra cima\n";
            cin >> escolha;

            // Segundo cenário
            // Esconder
            if (escolha == 1){
                cout << "1 #>*Você se esconde atrás de um pilar e espera os soldados passarem\n"; 
                cout << "\"Cara eu te disse que o Wallace ia dominar Senora não disse? Ele é o melhor imperador de todos, assim que Senora devia ser desde o começo\" - Soldado 1\n";
                cout << "\"Foi por isso que eu aceitei participar dos Tooney Lunes, não sou ingenuo que nem aquela ralé da resistência que acha normal os coelhos e humanos coexistirem\" - Soldado 2\n";
                cout << "*Eles passam conversando pelo corredor em que você se encontra e quando vão virar o corredor, um dos soldados para e volta\n";
                cout << "\"Ei, isso aqui está certo? Desde quando tiraram as cortinas das janelas? Isso está estranho... Chama o James para vir aqui agora\" - Soldado 1\n";
                cout << "*Enquanto o Soldado 2 vai procurar pelo James, o Soldado 1 começa a olhar em volta e procurar o que poderia ter acontecido, você:\n";
                cout << "# 1- Ataca \n";
                cout << "# 2- Continua escondido\n";
                cin >> escolha;
                
                // Segundo cenário
                // Atacar
                if (escolha == 1){
                    cout << "*Você se esgueira atrás do soldado que está olhando a janela e ataca ele na cabeça com o cajado, ele cambaleia para tras e desembainha a espada, ele ataca você com a espada e vocês trocam golpes\n";
                    cout << "\"Então é você, seu primata da resistência, James foi no quarto de vocês agora para ver se ainda estavam inconscientes, o que fizeram com ele?\" - Soldado 1\n";
                    cout << "*O soldado tenta fincar a espada no seu peito e você desvia para trás até que se depara estar contra a parede, o soldado te ameaça falando que tudo acabou por ali, ele da um golpe por cima e você defende com seu cajado, a força do soldado é tanta que se você fraquejar por um segundo sequer, a espada irá te acertar.\n";
                    cout << "\"Acabou aqui, humano, você irá para um lugar pior agora, sua carniça, saia da minha frente!\" - Soldado\n";
                    cout << "*O soldado chuta seu abdômen e te derruba no chão, então ele pisa no seu peito e afasta o cajado de perto, aponta a espada para seu pescoço e diz:\n";
                    cout << "\"Últimas palavras?\" - Soldado 1\n";
                    cout << "# 1- \"À RESISTÊNCIA!\"\n";
                    cout << "# 2- \"A resistência irá ganhar no fim, vocês Tooney Lunes NUNCA IRÃO DOMINAR O MUNDO!\"\n";
                    cout << "# 3- \"Vocês são a pior escória desse mundo, VOCÊ VAI PARA O INFERNO JUNTO COMIGO!\"\n";
                    cin >> escolha;

                    // Falas
                    if (escolha == 1){
                        cout << "\"À RESISTÊNCIA!\"\n";
                    }
                    else if (escolha == 2){
                        cout << "\"A resistência irá ganhar no fim, vocês Tooney Lunes NUNCA IRÃO DOMINAR O MUNDO!\"\n";
                    }
                    else if (escolha == 3){
                        cout << "\"Vocês são a pior escória desse mundo, VOCÊ VAI PARA O INFERNO JUNTO COMIGO!\"\n";
                    }

                    cout << "*Em seu suposto último suspiro, você ouve passos pesados e fortes em direção a você e o soldado, o soldado também percebe e vira-se para olhar, é Pancho, com seu escudo armado vindo em direção ao soldado, ele amassa o soldado contra a parede e este cai inconsciente no chão\n";
                    cout << "\"Eu disse que darei tudo de mim a partir de agora, vamos, levante-se\" - Pancho\n";
                    cout << "*Pancho estende a mão para você e te ajuda a levantar, enquanto isso o outro soldado retorna\n";
                    cout << "\"Mano, eu não achei o James, você encontrou algo ai?\" - Soldado 2\n";
                    cout << "*O outro soldado vira o corredor e observa vocês dois de pé e o soldado caido no chão e começa a correr na direção que tinha vindo, você e Pancho pegam o restante da corda e vão até a janela, agora a corda tem um comprimento bom e aguenta vocês dois, quando estão descendo pela janela, o alarme do prédio começa a tocar e vários guardas começam a se movimentar, vocês alcançam o chão e correm até a floresta\n";
                    // segundo cenário
                }

                // Continuar escondido - GAME OVER
                else if (escolha == 2){
                    cout << "*Você continua escondido, esperando, o outro soldado volta e diz que não encontrou James, ele vão até o quarto de vocês e acham ele preso no quarto, acionam o alarme e em momentos você e Pancho são encontrados e executados -> GAME OVER\n";
                    return 0;
                }
            
                // GAME OVER
                else {
                    cout << "Opção inválida - GAME OVER";
                    return 0; 
                }
        
            }

            // Ir pra cima - GAME OVER
            else if (escolha == 2){
                cout << "*Você vai para cima dos soldados com seu cajado, acerta um deles e ele cai no chão, o outro soldado segura seu braço e corta sua coxa com a espada, você cambaleia para trás e cai, o soldado caido se levanta e começa a te chutar, eles prendem você e te levam de volta para o quarto, veêm o outro soldado preso no quarto e acionam o alarme do prédio, eles capturam Pancho e vocês são executados -> GAME OVER\n";
                return 0;
            }

            // GAME OVER
            else {
                cout << "Opção inválida - GAME OVER";
                return 0; 
            }
        
        }

        // Fugir com essa corda - GAME OVER
        if (escolha == 2){
            cout << "*Você desce primeiro pela corda e vai se escorando na parede, quando chega no final da corda, ainda é bem alto e você pula em uma moita, machuca seu braço mas nada muito grave, você da um sinal para Pancho e começa a arrumar mais moitas para Pancho cair, enquanto Pancho está descendo, dois guardas aparecem na janela e veêm vocês fugindo, acionam o alarme do prédio e cortam a corda de Pancho, ele cai com tudo no chão, quebra uma perna e não consegue mais andar, você:\n";
            cout << "# 1- Carrega Pancho nas costas\n";
            cout << "# 2- Se entregam\n";
            cin >> escolha;
            if (escolha == 1){
                cout << "*Você fala para Pancho subir em suas costas e ele usa toda a força restante para se apoiar em você, vocês seguem para a floresta, porém depois de algumas horas de procura, os guardas conseguem encontrar vocês, vocês são pegos e executados em nome dos Tooney Lunes - GAME OVER\n";
                return 0;
            }

            else if (escolha == 2){
               cout << "*Você e Pancho se entregam para o Tooney Lunes, vocês são julgados e executados em nome do imperador Wallace Pascal - GAME OVER\n";
               return 0;
            }  
        }

        // GAME OVER
        else{
            cout << "Opção inválida - GAME OVER";
            return 0;
        }

    }

    // Segundo cenário
    // Escada
    else if (escolha == 2){
        cout << "*Pancho vai pela frente e vocês começam a descer a escada, chegando no andar a baixo, vocês se encontram no que parece ser uma recepção, tem uma fileira de cadeiras a direita e na esquerda, de costas para vocês tem um coelho bem vestido, sentado, escrevendo num papel em uma mesa. No final do cômodo tem uma porta e duas janelas do tamanho da porta, uma de cada lado, olhando pelas janelas vocês vêem que leva para o lado de fora, o que vocês fazem?\n";
        cout << "# 1- Atacar o coelho\n";
        cout << "# 2- Correr até a porta\n";
        cin >> escolha;

        // Atacar o coelho
        if (escolha == 1){
            cout << "*Você chega atrás do coelho, levanta seu cajado e acerta a cabeça dele com toda sua força, ele cai desfalecido no chão, em cima da mesa você encontra o papel em que ele estava escrevendo, uma chave e uma pequena bolsa, o que você faz?\n";
            cout << "# 1- Ler o papel\n";
            cout << "# 2- Pegar a chave\n";
            cout << "# 3- Olhar a bolsa\n";
            cin >> escolha;

            // Ler papel
            if (escolha == 1){
                cout << "*No papel está escrito: \"Excelentíssimo Imperador, é com a mais profunda reverência que lhe dirijo esta mensagem. Recentemente, nossos guardas identificaram a presença de dois indivíduos suspeitos que tentavam entrar em nosso império. Suspeitamos que eles sejam rebeldes, e por isso gostaríamos de informá-lo sobre este fato já que vosso imperador encontra-se presente. Acerca do Ovo Dourado, nós já conseg~~~~~~~~\" \n*Vocês ouvem passos vindo de cima e barulhos de conversa descendo a escada e então vocês pegam a chave, abrem a porta e resolvem fugir, saem pela porta da frente e  correm até a floresta, quando estão na metade do caminho para chegar até a floresta, um guarda avista vocês e aciona o alarme do prédio, vários soldados começam a se movimentar\n";
            }

            // Pegar a chave
            else if (escolha == 2){
                cout << "*Você pega a chave e ouve passos vindo de cima e barulhos de conversa descendo a escada e então abrem a porta e resolvem fugir, saem pela porta da frente e correm até a floresta, quando estão na metade do caminho para chegar até a floresta, um guarda avista vocês e aciona o alarme do prédio, vários soldados começam a se movimentar\n";
            }

            // Olhar a bolsa
            else if (escolha == 3){
                cout << "*Dentro da bolsa você achou uma cenoura. \n*Vocês ouvem passos vindo de cima e barulhos de conversa descendo a escada e então vocês pegam a chave, abrem a porta e resolvem fugir, saem pela porta da frente e correm até a floresta, quando estão na metade do caminho para chegar até a floresta, um guarda avista vocês e aciona o alarme do prédio, vários soldados começam a se movimentar\n";
                cenoura = 1;
            }

            // GAME OVER
            else{
                cout << "Escolha invalida - GAME OVER";
                return 0;
            }

        }

        // Correr para a porta
        if (escolha == 2){
            cout << "*Vocês correm até a porta para sair, chegando nela, Pancho gira a maçaneta e percebe que a porta está trancada, o coelho que estava escrevendo olha para vocês e grita \"GUARDAS!\", Pancho toma a frente e levanta seu escudo, guardas começam a descer pela escada, o que você faz?\n";
            cout << "# 1- Forçar a porta\n";
            cout << "# 2- Quebrar o vidro\n";
            cin >> escolha;

            // Forçar a porta - GAME OVER
            if (escolha == 1){
                cout << "*Você empurra a porta com toda a sua força, bate nela com o cajado, bate na maçaneta, porém ela não apresenta qualquer indício de que irá abrir, os guardas chegam em vocês, Pancho vai pra cima deles para dar tempo a você, os soldados capturam pancho e o executam, você tenta com sua última força abrir a porta, porém ela está intacta, os guardas pegar você e te executam. GAME OVER\n";
                return 0;
            }

            // Quebrar o vidro
            else if (escolha == 2){
                cout << "*Você segura seu cajado, e com toda sua força, bate no vidro, o vidro começa a rachar, os guardas começam a se aproximar, você bate novamente no vidro com o cajado, metade dele foi quebrado, Pancho está lutando contra dois soldados para você ganhar tempo, novamente você da mais uma cajadada no vidro e ele se quebra por completo, Pancho empurra você para fora e vocês começam a correr em direção a floresta, o alarme do prédio começa a soar e vários soldados começam a se movimentar.\n";
            }
        
            // GAME OVER
            else{
                cout << "Escolha invalida - GAME OVER";
                return 0;
            }

        }

        // GAME OVER
        else{
            cout << "Escolha invalida - GAME OVER";
            return 0;
        }

    }

    // GAME OVER
    else{
        cout << "Escolha invalida - GAME OVER";
        return 0;
    }

    // add segundo cenário
}