# Super Trunfo - Comparações Avançadas com Atributos Múltiplos

Este projeto implementa o desafio final do Super Trunfo em C. O programa permite cadastrar duas cartas de países, calcula atributos importantes (como densidade demográfica e PIB per capita) e realiza comparações avançadas utilizando dois atributos escolhidos pelo jogador.

## Funcionalidades

- **Cadastro das Cartas:**  
  - Leitura dos dados de duas cartas, incluindo:
    - Estado (ex.: "BR", "US")
    - Código da Carta (ex.: "A01", "B02")
    - Nome do País
    - População (int)
    - Área (float)
    - PIB (em bilhões de reais, float)
    - Número de Pontos Turísticos (int)
  - Cálculo da densidade demográfica (População / Área).

- **Menu Interativo para Comparação:**  
  - O jogador escolhe **dois atributos** para comparar as cartas.
  - A primeira escolha é feita entre as seguintes opções:
    1. População  
    2. Área  
    3. PIB  
    4. Número de Pontos Turísticos  
    5. Densidade Demográfica  
  - O menu para a segunda escolha é dinâmico, omitindo o atributo já selecionado.

- **Comparação dos Atributos:**  
  - Para todos os atributos, exceto Densidade Demográfica, a carta com o **maior valor** vence.
  - Para Densidade Demográfica, a carta com o **menor valor** vence.
  - Após comparações individuais, os valores dos atributos escolhidos são somados (com ajuste para densidade) para determinar a carta vencedora da rodada.

- **Tratamento de Empates:**  
  - Em caso de empate individual ou na soma dos atributos, o programa informa "Empate!".

## Como Compilar e Executar

### Pré-requisitos

- Um compilador de C (como `gcc`).

### Compilação

No terminal, execute:

```bash
gcc -o super_trunfo main.c


Exemplo de Uso

=== Cadastro da Carta 1 ===
Estado (ex: BR): BR
Codigo da Carta (ex: A01): A01
Nome do Pais: Brasil
Populacao: 210000000
Area (em km²): 8515767
PIB (em bilhoes de reais): 7000
Numero de Pontos Turisticos: 150

=== Cadastro da Carta 2 ===
Estado (ex: US): US
Codigo da Carta (ex: B02): B02
Nome do Pais: Estados Unidos
Populacao: 330000000
Area (em km²): 9833520
PIB (em bilhoes de reais): 21000
Numero de Pontos Turisticos: 200


=== Escolha do Primeiro Atributo para Comparacao ===
1 - Populacao
2 - Area
3 - PIB
4 - Numero de Pontos Turisticos
5 - Densidade Demografica
Opcao: 3

=== Escolha do Segundo Atributo para Comparacao ===
Escolha uma opcao:
1 - Populacao
2 - Area
4 - Numero de Pontos Turisticos
5 - Densidade Demografica
Opcao: 5
