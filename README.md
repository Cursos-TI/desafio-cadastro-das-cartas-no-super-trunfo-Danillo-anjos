# Desafio Super Trunfo - Países - Desenvolvendo a Lógica do Jogo - Atualizado: 08/04

Bem-vindo ao desafio de programação onde você construirá um jogo Super Trunfo em C! 

Imagine que você foi contratado pela TechNova, uma empresa inovadora de desenvolvimento de jogos, para aprimorar a versão digital do clássico Super Trunfo.
Seu objetivo é criar um jogo dinâmico e envolvente, utilizando estruturas de decisão para implementar a lógica de comparação entre as cartas e menus interativos para aprimorar a experiência do jogador.

O desafio está dividido em três níveis: Novato, Aventureiro e Mestre, com cada nível adicionando mais complexidade ao anterior.  **Você deve escolher qual desafio quer realizar.**

## 🛡️ Nível Aventureiro: Interatividade no Super Trunfo

Neste desafio, o Super Trunfo fica mais interessante! Você implementará um menu interativo usando switch para que o jogador possa escolher o atributo de comparação entre duas cartas de países. Além disso, você usará estruturas de decisão aninhadas (If-else dentro de if-else) para criar uma lógica de comparação mais complexa, considerando regras específicas para cada atributo. Este desafio é uma continuação do desafio anterior, onde você implementou o cadastro das cartas.

🆕 **Requisitos Funcionais:**


    *   Menu Interativo: Criar um menu interativo no terminal usando a estrutura switch que permita ao jogador escolher qual atributo será usado para comparar as cartas. 
        O menu deve ser claro e fácil de usar. 
    *   Comparação de Atributo: Implementar a lógica de comparação entre duas cartas com base no atributo selecionado pelo jogador. Os atributos disponíveis são:
 
            Nome do país (string - usado apenas para exibir informações, não para comparação direta)
            
            População (int)
            
            Área (float)
            
            PIB (float)
            
            Número de pontos turísticos (int)
            
            Densidade demográfica (float - já calculada no desafio anterior).

    *   Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com   
        o menor valor.

    *   Exibição do Resultado: Mostrar na tela, de forma clara, o resultado da comparação, incluindo:
 
        O nome dos dois países.
        O atributo usado na comparação.
        Os valores do atributo para cada carta.
        Qual carta venceu.
        Em caso de empate, exibir a mensagem "Empate!".

⚙️ **Requisitos não funcionais:**

*   Usabilidade: O menu e as mensagens exibidas no terminal devem ser intuitivos e fáceis de entender.
*   Performance: O sistema deve responder rapidamente às ações do usuário.
*   Manutenibilidade: Escreva um código limpo, organizado e bem comentado.
*   Segurança: (Embora menos crítico neste nível, comece a pensar em como seu código poderia lidar com entradas inválidas do usuário, como a escolha de uma opção inexistente no 
    menu. Um default no switch pode ajudar).

**Simplificações para o Nível Intermediário:**

*   Você pode usar as cartas que já foram cadastradas no desafio anterior. Não é necessário implementar o cadastro novamente neste nível.
*   Foque na criação do menu com switch e na lógica de comparação com if-else (incluindo comparações aninhadas onde fizer sentido).
*   Implemente a comparação para apenas duas cartas.


## 🏁 Conclusão

Ao concluir qualquer um dos níveis, você terá dado um passo importante no desenvolvimento do Super Trunfo - Países. Boa sorte e divirta-se programando!

Equipe de Ensino - MateCheck
content_copy
