# Desafio Super Trunfo - Países - Desenvolvendo a Lógica do Jogo - Atualizado: 09/04

Bem-vindo ao desafio de programação onde você construirá um jogo Super Trunfo em C! 

Imagine que você foi contratado pela TechNova, uma empresa inovadora de desenvolvimento de jogos, para aprimorar a versão digital do clássico Super Trunfo.
Seu objetivo é criar um jogo dinâmico e envolvente, utilizando estruturas de decisão para implementar a lógica de comparação entre as cartas e menus interativos para aprimorar a experiência do jogador.

O desafio está dividido em três níveis: Novato, Aventureiro e Mestre, com cada nível adicionando mais complexidade ao anterior.  **Você deve escolher qual desafio quer realizar.**

## 🛡️ Nível Mestre: Implementando Comparações Avançadas com Atributos Múltiplos em C

Prepare-se para o desafio final do Super Trunfo! Agora você integrará tudo o que aprendeu sobre estruturas de decisão em C para criar uma lógica de comparação ainda mais sofisticada. Você permitirá que o jogador escolha dois atributos para comparar as cartas de países, implementará menus dinâmicos com switch e usará o operador ternário para tornar seu código mais elegante. Este desafio é a culminação dos desafios anteriores, onde você cadastrou as cartas e implementou a comparação com um único atributo.

🆕 **Requisitos Funcionais:**


1. Escolha de Dois Atributos: O sistema deve permitir que o jogador escolha dois atributos numéricos diferentes para a comparação das cartas, através de menus interativos. Implemente a lógica necessária para garantir que o jogador não possa selecionar o mesmo atributo duas vezes.
 
2. Comparação com Múltiplos Atributos: Implemente a lógica para comparar as duas cartas com base nos dois atributos escolhidos. Para cada atributo, a regra geral é: vence a carta com o maior valor. A exceção continua sendo a Densidade Demográfica, onde vence a carta com o menor valor.
 
3. Soma dos Atributos: Após comparar os dois atributos individualmente, o sistema deve somar os valores dos atributos para cada carta. A carta com a maior soma vence a rodada.
 
4. Tratamento de Empates: Implemente a lógica para tratar empates. Se a soma dos atributos das duas cartas for igual, exiba a mensagem "Empate!".
 
5. Menus Dinâmicos: Crie menus interativos e dinâmicos usando switch. "Dinâmicos" significa que, por exemplo, após o jogador escolher o primeiro atributo, esse atributo não deve mais aparecer como opção para a escolha do segundo atributo.
 
6. Exibição Clara do Resultado: Mostre o resultado da comparação de forma clara e organizada, incluindo:
 
1. O nome dos dois países.
 
2. Os dois atributos usados na comparação.
 
3. Os valores de cada atributo para cada carta.
 
4. A soma dos atributos para cada carta.
 
5. Qual carta venceu (ou se houve empate).

⚙️ **Requisitos não funcionais:**

* Usabilidade: A interface do usuário deve ser intuitiva e fácil de navegar, com mensagens claras e instruções para cada etapa.
 
* Performance: O sistema deve executar as comparações e exibir os resultados rapidamente.
 
* Manutenibilidade: Escreva um código bem estruturado, organizado, com indentação consistente e comentários explicativos. Use nomes de variáveis descritivos.
 
* Confiabilidade: O sistema deve ser robusto e lidar com entradas inválidas do usuário de forma adequada, exibindo mensagens de erro apropriadas e evitando travamentos. Utilize o default no switch para tratar opções inválidas

**Simplificações para o Nível Avançado:**

* Você pode continuar usando as cartas pré-cadastradas dos desafios anteriores. Não precisa reimplementar o cadastro.
 
* Foque na integração de todos os elementos: menus dinâmicos com switch, comparações com if-else (e aninhamentos), operador ternário, cálculo da soma dos atributos e tratamento de empates.
 
* A comparação é feita entre apenas duas cartas

**Instruções para executar o jogo:**

# 🃏 Super Trunfo dos Estados - Comparação Dupla

Um jogo em C baseado no clássico Super Trunfo, onde você compara atributos entre dois estados brasileiros pré-cadastrados (São Paulo e Rio de Janeiro).  
Neste modo avançado, o jogador escolhe **dois atributos diferentes** para comparar as cartas, e a **soma desses atributos** define o vencedor.

---

## ✅ Funcionalidades

- Comparação entre duas cartas com base em **dois atributos distintos**
- Menu dinâmico para seleção de atributos
- Regra especial para **Densidade Demográfica** (menor valor vence)
- Tratamento de **empates**
- Interface de terminal simples e interativa

---

## 🛠️ Como compilar o programa

1. **Abra um terminal**
2. Compile o programa com `gcc`:

```bash
gcc super_trunfo.c -o super_trunfo
./super_trunfo

Ao executar o programa, o usuário verá

===== SUPER TRUNFO DOS ESTADOS =====
Escolha um atributo:
1. População
2. Área
3. PIB
4. Pontos Turísticos
5. Densidade Demográfica
Digite o número correspondente: 1

Depois, escolhe um segundo atributo (o primeiro será removido do menu):

Agora escolha um segundo atributo (diferente do primeiro):
Escolha um atributo:
2. Área
3. PIB
4. Pontos Turísticos
5. Densidade Demográfica
Digite o número correspondente: 5

O programa exibe o resultado completo:

===== RESULTADO DA COMPARAÇÃO =====
Estados comparados: São Paulo x Rio de Janeiro

Atributo 1: População
 - São Paulo: 12300000.00
 - Rio de Janeiro: 6748000.00

Atributo 2: Densidade Demográfica
 - São Paulo: 8085.98
 - Rio de Janeiro: 5619.78

Soma dos Atributos:
 - São Paulo: 12308085.98
 - Rio de Janeiro: 6753619.78

Resultado final: São Paulo venceu a rodada!



## 🏁 Conclusão

Ao concluir qualquer um dos níveis, você terá dado um passo importante no desenvolvimento do Super Trunfo - Países. Boa sorte e divirta-se programando!

Equipe de Ensino - MateCheck
content_copy
