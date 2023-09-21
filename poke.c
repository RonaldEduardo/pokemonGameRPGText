#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Definição de estruturas
struct Ataque
{
    int tipoAtk;
    char nomeAtk[50];
    int danoAtk;
};

struct Pokemon
{
    int tipo;
    char nome[50];
    int ataque;
    int defesa;
    int vida;
    struct Ataque ataques[4];
};

// Variáveis globais
struct Pokemon charmander;
struct Pokemon bulbassaur;
struct Pokemon squirtle;
struct Pokemon pidgey;
struct Pokemon ratata;
struct Pokemon pikachu;
struct Pokemon spearow;
struct Pokemon geodude;
struct Pokemon onix;

struct Ataque vazio;
struct Ataque flamethrower;
struct Ataque ember;
struct Ataque fireSpin;
struct Ataque vineWhip;
struct Ataque seedBomb;
struct Ataque razorLeaf;
struct Ataque bubble;
struct Ataque waterGun;
struct Ataque hydroPump;
struct Ataque tackle;
struct Ataque scratch;
struct Ataque quickAtk;
struct Ataque bodySlam;
struct Ataque pound;
struct Ataque thunderShock;
struct Ataque spark;
struct Ataque chargeBeam;
struct Ataque peck;
struct Ataque gust;
struct Ataque wingAttack;
struct Ataque rockThrow;
struct Ataque rockSlide;
struct Ataque stoneEdge;
struct Ataque growl;
struct Ataque leer;
struct Ataque tailWhip;
struct Ataque sandAttack;
struct Ataque smokeScreen;

// Inicializações de variáveis
void inicializarVariaveis()
{
    // Inicialização de Pokémon
    charmander.tipo = 1; // Fogo
    strcpy(charmander.nome, "Charmander");
    charmander.ataque = 50;
    charmander.defesa = 30;
    charmander.vida = 100;

    bulbassaur.tipo = 2; // Planta
    strcpy(bulbassaur.nome, "Bulbassaur");
    bulbassaur.ataque = 50;
    bulbassaur.defesa = 30;
    bulbassaur.vida = 100;

    squirtle.tipo = 3; // Água
    strcpy(squirtle.nome, "Squirtle");
    squirtle.ataque = 50;
    squirtle.defesa = 30;
    squirtle.vida = 100;

    pidgey.tipo = 6; // Voador
    strcpy(pidgey.nome, "Pidgey");
    pidgey.ataque = 30;
    pidgey.defesa = 20;
    pidgey.vida = 100;

    ratata.tipo = 4; // Normal
    strcpy(ratata.nome, "Ratata");
    ratata.ataque = 30;
    ratata.defesa = 30;
    ratata.vida = 100;

    pikachu.tipo = 5; // Elétrico
    strcpy(pikachu.nome, "Pikachu");
    pikachu.ataque = 30;
    pikachu.defesa = 30;
    pikachu.vida = 100;

    spearow.tipo = 6; // Voador
    strcpy(spearow.nome, "Spearow");
    spearow.ataque = 45;
    spearow.defesa = 35;
    spearow.vida = 100;

    geodude.tipo = 7; // Pedra
    strcpy(geodude.nome, "Geodude");
    geodude.ataque = 60;
    geodude.defesa = 70;
    geodude.vida = 100;

    onix.tipo = 7; // Pedra
    strcpy(onix.nome, "Onix");
    onix.ataque = 45;
    onix.defesa = 160;
    onix.vida = 35;

    // Inicialização de ataques
    vazio.tipoAtk = 99;
    strcpy(vazio.nomeAtk, " ");
    vazio.danoAtk = 0;

    flamethrower.tipoAtk = 1;
    strcpy(flamethrower.nomeAtk, "Flamethrower");
    flamethrower.danoAtk = 90;

    ember.tipoAtk = 1;
    strcpy(ember.nomeAtk, "Ember");
    ember.danoAtk = 40;

    fireSpin.tipoAtk = 1;
    strcpy(fireSpin.nomeAtk, "Fire Spin");
    fireSpin.danoAtk = 45;

    vineWhip.tipoAtk = 2;
    strcpy(vineWhip.nomeAtk, "Vine Whip");
    vineWhip.danoAtk = 45;

    seedBomb.tipoAtk = 2;
    strcpy(seedBomb.nomeAtk, "Seed Bomb");
    seedBomb.danoAtk = 80;

    razorLeaf.tipoAtk = 2;
    strcpy(razorLeaf.nomeAtk, "Razor Leaf");
    razorLeaf.danoAtk = 25;

    bubble.tipoAtk = 3;
    strcpy(bubble.nomeAtk, "Bubble");
    bubble.danoAtk = 45;

    waterGun.tipoAtk = 3;
    strcpy(waterGun.nomeAtk, "Water Gun");
    waterGun.danoAtk = 80;

    hydroPump.tipoAtk = 3;
    strcpy(hydroPump.nomeAtk, "Hydro Pump");
    hydroPump.danoAtk = 25;

    tackle.tipoAtk = 4;
    strcpy(tackle.nomeAtk, "Tackle");
    tackle.danoAtk = 40;

    scratch.tipoAtk = 4;
    strcpy(scratch.nomeAtk, "Scratch");
    scratch.danoAtk = 40;

    quickAtk.tipoAtk = 4;
    strcpy(quickAtk.nomeAtk, "Quick Attack");
    quickAtk.danoAtk = 42;

    bodySlam.tipoAtk = 4;
    strcpy(bodySlam.nomeAtk, "Body Slam");
    bodySlam.danoAtk = 85;

    pound.tipoAtk = 4;
    strcpy(pound.nomeAtk, "Pound");
    pound.danoAtk = 40;

    thunderShock.tipoAtk = 5;
    strcpy(thunderShock.nomeAtk, "Thunder Shock");
    thunderShock.danoAtk = 40;

    spark.tipoAtk = 5;
    strcpy(spark.nomeAtk, "Spark");
    spark.danoAtk = 65;

    chargeBeam.tipoAtk = 6;
    strcpy(chargeBeam.nomeAtk, "Charge Beam");
    chargeBeam.danoAtk = 50;

    peck.tipoAtk = 6;
    strcpy(peck.nomeAtk, "Peck");
    peck.danoAtk = 35;

    gust.tipoAtk = 6;
    strcpy(gust.nomeAtk, "Gust");
    gust.danoAtk = 40;

    wingAttack.tipoAtk = 6;
    strcpy(wingAttack.nomeAtk, "Wing Attack");
    wingAttack.danoAtk = 60;

    rockThrow.tipoAtk = 7;
    strcpy(rockThrow.nomeAtk, "Rock Throw");
    rockThrow.danoAtk = 50;

    rockSlide.tipoAtk = 7;
    strcpy(rockSlide.nomeAtk, "Rock Slide");
    rockSlide.danoAtk = 75;

    stoneEdge.tipoAtk = 7;
    strcpy(stoneEdge.nomeAtk, "Stone Edge");
    stoneEdge.danoAtk = 100;

    growl.tipoAtk = 9;
    strcpy(growl.nomeAtk, "Growl");
    growl.danoAtk = 0;

    leer.tipoAtk = 8;
    strcpy(leer.nomeAtk, "Leer");
    leer.danoAtk = 0;

    tailWhip.tipoAtk = 8;
    strcpy(tailWhip.nomeAtk, "Tail Whip");
    tailWhip.danoAtk = 0;

    sandAttack.tipoAtk = 9;
    strcpy(sandAttack.nomeAtk, "Sand Attack");
    sandAttack.danoAtk = 0;

    smokeScreen.tipoAtk = 8;
    strcpy(smokeScreen.nomeAtk, "Smoke Screen");
    smokeScreen.danoAtk = 0;
}

int ataqueEfeito(struct Pokemon *atacante, struct Pokemon *defensor, int numAtaque)
{
    int tipoAtaque = atacante->ataques[numAtaque - 1].tipoAtk;

    if (tipoAtaque == 8) // Se o tipo do ataque for 8 para diminuir a defesa
    {
        if (defensor->defesa > 15)
        {
            int reducao = rand() % 11 + 10;
            defensor->defesa -= reducao;
            printf("%s usou um ataque do tipo efeito contra %s!\n", atacante->nome, defensor->nome);
            printf("A defesa de %s foi reduzida em %d para %d\n", defensor->nome, reducao, defensor->defesa);
        }
        else
        {
            printf("%s usou um ataque do tipo efeito contra %s!\n", atacante->nome, defensor->nome);
            printf("A defesa de %s já está no mínimo!\n", defensor->nome);
        }
        return 1; // Indica que o efeito do ataque foi aplicado com sucesso
    }

    if (tipoAtaque == 9) // Se o tipo do ataque for 9 para diminuir o ataque
    {
        if (defensor->ataque > 20)
        {
            int reducao = rand() % 11 + 10;
            defensor->ataque -= reducao;
            printf("%s usou um ataque do tipo efeito contra %s!\n", atacante->nome, defensor->nome);
            printf("O ataque de %s foi reduzido em %d para %d\n", defensor->nome, reducao, defensor->ataque);
        }
        else
        {
            printf("%s usou um ataque do tipo efeito contra %s!\n", atacante->nome, defensor->nome);
            printf("O ataque de %s já está no mínimo!\n", defensor->nome);
        }
        return 1; // Indica que o efeito do ataque foi aplicado com sucesso
    }

    return -1; // Indica que nenhum efeito do ataque foi aplicado
}

// Função para realizar um ataque
int realizarAtaque(struct Pokemon *atacante, struct Pokemon *defensor, int numAtaque)
{
    printf("%s usa %s!\n", atacante->nome, atacante->ataques[numAtaque - 1].nomeAtk);
    fflush(stdout); // Limpa o buffer de saída

    //
    usleep(1000000);

    int dano;

    // Aplica modificadores de tipo
    int tipoAtaque = atacante->ataques[numAtaque - 1].tipoAtk;
    int tipoDefensor = defensor->tipo;
    if (tipoAtaque == 99 || tipoAtaque == 9 || tipoAtaque == 8)
    {
        dano = 0;
    }
    else
    {
        dano = (atacante->ataques[numAtaque - 1].danoAtk + atacante->ataque) / 3;
    }

    if (tipoAtaque == 8 || tipoAtaque == 9)
    {
        ataqueEfeito(atacante, defensor, numAtaque);
    }

    if (tipoAtaque == 1 && tipoDefensor == 2)
    {
        // Ataque de fogo é super efetivo contra planta
        printf("É super efetivo!\n");
        fflush(stdout);  // Limpa o buffer de saída
        usleep(1000000); //
        dano *= 2;       // Duplica o dano
    }
    else if (tipoAtaque == 2 && tipoDefensor == 3)
    {
        // Ataque de planta é super efetivo contra água
        printf("É super efetivo!\n");
        fflush(stdout);  // Limpa o buffer de saída
        usleep(1000000); //
        dano *= 2;       // Duplica o dano
    }
    else if (tipoAtaque == 3 && tipoDefensor == 1)
    {
        // Ataque de água é super efetivo contra fogo
        printf("É super efetivo!\n");
        fflush(stdout);  // Limpa o buffer de saída
        usleep(1000000); //
        dano *= 2;       // Duplica o dano
    }
    else if (tipoAtaque == 1 && tipoDefensor == 3)
    {
        // Ataque de fogo não é tão eficaz contra água
        printf("Não é muito efetivo...\n");
        fflush(stdout);  // Limpa o buffer de saída
        usleep(1000000); //
        dano /= 2;       // Reduz o dano pela metade
    }
    else if (tipoAtaque == 2 && tipoDefensor == 1)
    {
        // Ataque de planta não é tão eficaz contra fogo
        printf("Não é muito efetivo...\n");
        fflush(stdout);  // Limpa o buffer de saída
        usleep(1000000); //
        dano /= 2;       // Reduz o dano pela metade
    }
    else if (tipoAtaque == 3 && tipoDefensor == 2)
    {
        // Ataque de água não é tão eficaz contra planta
        printf("Não é muito efetivo...\n");
        fflush(stdout);  // Limpa o buffer de saída
        usleep(1000000); //
        dano /= 2;       // Reduz o dano pela metade
    }

    // Reduz o dano com base na defesa do defensor
    dano -= (defensor->defesa / 10);

    // Garante que o dano não seja negativo
    if (dano < 0)
    {
        dano = 0;
    }

    // Aplica o dano ao defensor
    defensor->vida -= dano;

    printf("%s causa %d de dano em %s!\n", atacante->nome, dano, defensor->nome);
    fflush(stdout); // Limpa o buffer de saída

    // Verifica se o defensor foi derrotado
    if (defensor->vida <= 0)
    {
        printf("%s foi derrotado!\n", defensor->nome);
        fflush(stdout); // Limpa o buffer de saída
    }

    //
    usleep(1000000);

    return dano;
}

// ... (outras funções) ...

// Função para realizar a batalha entre dois Pokémon
void batalhar(struct Pokemon *treinador, struct Pokemon *rival)
{
    srand(time(NULL));

    printf("Batalha entre %s e %s!\n", treinador->nome, rival->nome);
    fflush(stdout); // Limpa o buffer de saída

    //
    usleep(1000000);

    // Loop de batalha
    while (treinador->vida > 0 && rival->vida > 0)
    {
        int ataqueTreinador;
        int ataqueRival = rand() % 4 + 1; // O rival escolhe um ataque aleatório

        if (rival->ataques[ataqueRival].tipoAtk == 99)
        {
            ataqueRival = 3;
        }

        // Exibe os ataques disponíveis para o treinador
        printf("%s, escolha um ataque:\n", treinador->nome);
        fflush(stdout);  // Limpa o buffer de saída
        usleep(1000000); //

        for (int i = 0; i < 4; i++)
        {
            printf("%d) %s\n", i + 1, treinador->ataques[i].nomeAtk);
            fflush(stdout); // Limpa o buffer de saída
        }

        // Solicita a escolha do treinador
        printf("Escolha um número de 1 a 4: ");
        fflush(stdout); // Limpa o buffer de saída
        scanf("%d", &ataqueTreinador);

        if (ataqueTreinador < 1 || ataqueTreinador > 4)
        {
            printf("Escolha inválida. Escolha um número de 1 a 4.\n");
            fflush(stdout); // Limpa o buffer de saída
            continue;
        }

        // Realiza os ataques e exibe a vida atual dos Pokémon
        int danoTreinador = realizarAtaque(treinador, rival, ataqueTreinador);
        printf("%s tem %d de vida.\n", rival->nome, rival->vida);
        fflush(stdout);  // Limpa o buffer de saída
        usleep(1000000); //

        if (rival->vida <= 0)
        {
            break; // Sai do loop se o rival for derrotado
        }

        int danoRival = realizarAtaque(rival, treinador, ataqueRival);
        printf("%s tem %d de vida.\n", treinador->nome, treinador->vida);
        fflush(stdout);  // Limpa o buffer de saída
        usleep(1000000); //
    }

    // Determina o vencedor
    if (treinador->vida > 0)
    {
        printf("%s vence a batalha!\n", treinador->nome);
        fflush(stdout); // Limpa o buffer de saída
    }
    else if (rival->vida > 0)
    {
        printf("%s vence a batalha!\n", rival->nome);
        fflush(stdout); // Limpa o buffer de saída
    }
    else
    {
        printf("A batalha termina em empate!\n");
        fflush(stdout); // Limpa o buffer de saída
    }
}

int main()
{
    char treinador[30], rival[30];
    int genero, pokemonT, pokemonR, vidaT = 100, vidaR = 100;
    inicializarVariaveis();
    srand(time(NULL));

    printf("Bem-vindo ao mundo dos Pokémon!\n\n");
    usleep(1500000);

    printf("Meu nome é Carvalho. As pessoas me chamam de Professor Pokémon.\n\n");
    usleep(1500000);

    printf("Este é um mundo habitado por criaturas chamadas Pokémon!\n\n");
    usleep(1500000);

    printf("Para algumas pessoas, os Pokémon são animais de estimação. Outros os usam em batalhas.\n\n");
    usleep(1500000);

    printf("Eu mesmo... sou um pesquisador de Pokémon.\n\n");
    usleep(1500000);

    printf("Primeiro, qual é o seu nome?\n");
    scanf("%s", treinador);

    if (strcmp(treinador, "r") != 0)
    {
        printf("Ótimo, você se chama %s, mas e agora você é um (0)menino ou (1)menina?\n", treinador);
        scanf("%d", &genero);

        if (genero == 0)
        {
            printf("Tudo certo! Você é um menino que está prestes a embarcar em uma jornada incrível no mundo dos Pokémon.\n\n");
            usleep(1500000);
        }
        else
        {
            printf("Tudo certo! Você é uma menina que está prestes a embarcar em uma jornada incrível no mundo dos Pokémon.\n\n");
            usleep(1500000);
        }

        printf("Agora, qual o nome do seu rival?\n");
        scanf("%s", rival);
        usleep(1500000);

        printf("%s, é isso? Bom, %s é seu rival na sua aventura.\n\n", rival, rival);
        usleep(1500000);

        printf("Vamos! Sua jornada te espera...\n\n");
        usleep(1500000);

        printf("[Você acorda em seu quarto.]\n\n");
        usleep(1500000);

        printf("[Descendo as escadas, encontra sua mãe.]\n\n");
        usleep(1500000);

        printf("Mãe: Bom dia, %s, tudo bem? Professor Carvalho está esperando.\n\n", treinador);
        usleep(1500000);

        printf("Mãe: Quase me esqueci! Parabéns, hoje você completa 10 anos...\n\n");
        usleep(1500000);

        printf("Mãe: Agora vá, o Professor está esperando. Boa sorte!\n\n");
        usleep(1500000);

        printf("[Você sobe ao seu quarto, se veste e sai de casa...]\n\n");
        usleep(1500000);

        printf("[O laboratório é perto, você vai rápido pois está atrasado.]\n\n");
        usleep(1500000);

        printf("[Chegando lá, encontra o Professor Carvalho e seu Neto(%s)*Seu Rival*]\n\n", rival);
        usleep(1500000);

        printf("Professor Carvalho: Olá, %s! Fico feliz que tenha chegado. Como está se sentindo hoje?\n\n", treinador);
        usleep(1500000);

        printf("%s: Estou muito empolgado, Professor Carvalho!\n\n", treinador);
        usleep(1500000);

        printf("Professor Carvalho: Ótimo! Hoje é um dia muito importante para você e %s.\n\n", rival);
        usleep(1500000);

        printf("%s: Estou pronto para começar minha jornada como Treinador Pokémon!\n\n", treinador);
        usleep(1500000);

        printf("Rival(%s): Você e seu Pokémon ainda têm muito o que aprender, %s!\n\n", rival, treinador);
        usleep(1500000);

        printf("Professor Carvalho: %s, escolha com cuidado o seu primeiro Pokémon.\n\n", treinador);
        usleep(1500000);

        printf("[Na mesa, estão as três Pokébolas com os Pokémon iniciais Bulbasaur, Charmander e Squirtle.]\n\n");
        usleep(1500000);
    }
    printf("Professor Carvalho: Temos o (1)%s, do tipo Planta e Veneno. O (2)%s, do tipo Fogo. E o (3)%s, do tipo Água. Qual deles você escolherá?\n", bulbassaur.nome, charmander.nome, squirtle.nome);
    scanf("%d", &pokemonT);
    usleep(1500000);

    switch (pokemonT)
    {
    case 1:
        printf("Seu Pokémon é Bulbasaur, do tipo Planta e Veneno. Parabéns!\n\n");
        pokemonR = 2;
        printf("Seu rival escolhe Charmander, do tipo Fogo.\n\n");
        // Pokemon Treinador
        bulbassaur.ataques[0] = razorLeaf;
        bulbassaur.ataques[1] = tackle;
        bulbassaur.ataques[2] = growl;
        bulbassaur.ataques[3] = vazio;
        // Pokemon Rival
        charmander.ataques[0] = ember;
        charmander.ataques[1] = scratch;
        charmander.ataques[2] = growl;
        charmander.ataques[3] = vazio;
        break;
    case 2:
        printf("Seu Pokémon é Charmander, do tipo Fogo. Parabéns!\n\n");
        pokemonR = 3;
        printf("Seu rival escolhe Squirtle, do tipo Água.\n\n");
        // Pokemon Treinador
        charmander.ataques[0] = ember;
        charmander.ataques[1] = scratch;
        charmander.ataques[2] = growl;
        charmander.ataques[3] = vazio;
        // Pokemon Rival
        squirtle.ataques[0] = bubble;
        squirtle.ataques[1] = tackle;
        squirtle.ataques[2] = tailWhip;
        squirtle.ataques[3] = vazio;

        break;
    case 3:
        printf("Seu Pokémon é Squirtle, do tipo Água. Parabéns!\n\n");
        pokemonR = 1;
        printf("Seu rival escolhe Bulbasaur, do tipo Planta e Veneno.\n\n");
        // Pokemon Treinador
        squirtle.ataques[0] = bubble;
        squirtle.ataques[1] = tackle;
        squirtle.ataques[2] = tailWhip;
        squirtle.ataques[3] = vazio;
        // Pokemon Rival
        bulbassaur.ataques[0] = razorLeaf;
        bulbassaur.ataques[1] = tackle;
        bulbassaur.ataques[2] = growl;
        bulbassaur.ataques[3] = vazio;

        break;
    }

    printf("Rival(%s): Agora que temos nossos Pokémon, que tal uma batalha para começar?\n\n", rival);
    usleep(1500000);

    printf("%s: Estou pronto para isso!\n\n", treinador);
    usleep(1500000);

    printf("[Você e seu rival se preparam para a primeira batalha de Pokémon...]\n\n");
    usleep(1500000);

    printf("%s %d%% VS %s %d%%\n\n", treinador, vidaT, rival, vidaR);
    usleep(1500000);

    printf("Seu ataques são: \n");
    if (pokemonT == 1)
    {
        printf("1)%s\n", bulbassaur.ataques[0].nomeAtk);
        printf("2)%s\n", bulbassaur.ataques[1].nomeAtk);
        printf("3)%s\n", bulbassaur.ataques[2].nomeAtk);
        printf("4)%s\n", bulbassaur.ataques[3].nomeAtk);
    }
    else if (pokemonT == 2)
    {
        printf("1)%s\n", charmander.ataques[0].nomeAtk);
        printf("2)%s\n", charmander.ataques[1].nomeAtk);
        printf("3)%s\n", charmander.ataques[2].nomeAtk);
        printf("4)%s\n", charmander.ataques[3].nomeAtk);
    }
    else if (pokemonT == 3)
    {
        printf("1)%s\n", squirtle.ataques[0].nomeAtk);
        printf("2)%s\n", squirtle.ataques[1].nomeAtk);
        printf("3)%s\n", squirtle.ataques[2].nomeAtk);
        printf("4)%s\n", squirtle.ataques[3].nomeAtk);
    }

    int danoT = 0, danoR = 0, ataqueR;

    switch (pokemonT)
    {
    case 1:
        batalhar(&bulbassaur, &charmander);
        break;
    case 2:
        batalhar(&charmander, &squirtle);
        break;
    case 3:
        batalhar(&squirtle, &bulbassaur);
        break;

    default:
        break;
    }

    return 0;
}
