# Manipulação de Arrays Dinâmicos em C 📚

Este repositório contém exemplos de manipulação de arrays dinâmicos em C. Abaixo estão descritas as funcionalidades implementadas em cada exemplo:

## 1. Busca Linear 🔍

Este exemplo demonstra como realizar uma busca linear em um array alocado dinamicamente. A função `buscaLinear` procura por um valor específico no array e retorna o índice do elemento se encontrado, ou `-1` se o valor não estiver presente.

## 2. Inserção no Final ➕

Neste exemplo, a função `inserirFinal` é utilizada para adicionar um novo valor ao final de um array. O array é redimensionado dinamicamente usando `realloc`, e o novo valor é inserido na última posição do array.

## 3. Inserção em Posição Específica ✏️

Aqui, a função `inserirPosicao` permite inserir um valor em uma posição específica dentro do array. Os elementos após a posição especificada são deslocados para a direita para criar espaço para o novo valor. O array é então redimensionado para refletir o novo tamanho.

## 4. Remoção de Elemento 🗑️

Este exemplo mostra como remover um elemento de uma posição específica em um array. A função `removerPosicao` desloca os elementos após a posição para a esquerda para preencher o espaço do elemento removido e ajusta o tamanho do array usando `realloc`.

---

Para mais detalhes, consulte o código-fonte correspondente a cada funcionalidade.

Se você tiver alguma dúvida ou sugestão, sinta-se à vontade para abrir uma issue ou contribuir com melhorias!

🔧 **Autor**: [Larissa]
