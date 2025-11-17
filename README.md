# heap_binario
Trabalho em grupos de 2 ou 3 alunos (não serão aceitos trabalhos individuais em razão do curto prazo

para correção antes da divulgação das médias finais)
Fila de prioridade (implementada como heap binário)

Data da entrega: 19 de novembro

Elabore um relatório (.pdf) sobre filas de prioridade (implementadas como heaps binários). Faça um
relatório com a apresentação dos conceitos (definição de heap de mínimo e de máximo), propriedades de um
heap, armazenamento do heap em vetores, exemplos visuais (com imagens do heap a cada inserção e
remoção), e os possíveis algoritmos em pseudolinguagem (contemplando inserção e remoção). Cite as
referências bibliográficas utilizadas.
Faça pesquisa em livros, na internet, etc. Há bastante material sobre o assunto na internet, e inclusive
vocês encontram implementações prontas dos algoritmos em diversas linguagens. Podem usar estes
materiais, desde que bem entendido e que o relatório não seja cópia de algum livro e/ou site da internet.
Implemente em C os algoritmos de inserção, impressão (mostrando o valor do nó e seus filhos
diretos da esquerda e direita) e remoção. A implementação deve ser funcional para que o professor consiga
fazer diversos testes. Certifique-se de estar compilando e executando corretamente. Faça um menu de
opções que permita:
1 - inserir
2- remover
3 - imprimir heap
Ao imprimir o heap, certifiquem-se de mostrar quem é o pai e quem são seus filhos (e não mostrar
apenas o valor que está inserido naquele nó). Exemplo: após inserir os valores 1, 2 e 3 num heap de máximo,
a impressão deve mostrar:
Nó 3: filho esq: 1, filho dir: 2
Nó 1: filho esq: vazio, filho dir: vazio
Nó 2: filho esq: vazio, filho dir: vazio
Ao remover a primeira vez um elemento do heap (neste caso, o 3 será removido), o heap ficaria:
Nó 2: filho esq: 1, filho dir: vazio
Nó 1: filho esq: vazio, filho dir: vazio
Para testar, serão feitas várias inserções, remoções e impressões.
Entrega: por e-mail para deise@inf.ufsm.br os arquivos pertencentes ao projeto em questão
(incluindo os arquivos .c e os arquivos .h) e o arquivo do relatório (.pdf). Não inclua os arquivos .exe.
Vídeos introdutórios explicativos:
1) https://www.youtube.com/watch?v=QdRL3XLyiVc
2)
https://www.youtube.com/watch?v=o138_fb85zk&index=88&list=PL8iN9FQ7_jt6H5m4G
m0H89sybzR9yaaka
Outros materiais introdutórios sugeridos:
3) https://en.wikipedia.org/wiki/Binary_heap
4) http://www.facom.ufu.br/~abdala/DAS5102/TEO_HeapFilaDePrioridade.pdf (seções de
Heap binária e Operações básicas da heap binária, principalmente)
Observações para este trabalho:

 Cópias da internet e/ou colegas anulam a nota do trabalho.
 Trabalhos com erros
