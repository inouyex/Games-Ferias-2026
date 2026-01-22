Este projeto visa ser utilizado unica e exclusivamente como estudo na área de programação e suas tecnologias em específico: Git e Github, programação em C para jogos(estarei utilizando C, pois foi a linguagem que estou aprendendo na faculdade e é a que tive mais foco durante o curso, utilizando ela durante o ano de 2025)

Estava pesquisando como fazer um jogo e em linhas gerais utilizam-se: Game Engine ou então Frameworks e bibliotecas especificas de jogos (pygames, raylib e etc)

Após muitos dias de pesquisa consegui concluir algumas coisas:
1. no VS Code, é necessário utilizar compilador(GCC) e neste caso linkar o GCC com a lib, RayLib.
2. ambas devem ser compatíveis e a raylib.h e a libraylib.a devem ser compiladas ambas pelo gcc 
3. as extensões do arquivo(.h e .a) declaram o papel do arquivo. .h - Header -> lista quais funções tem numa lib.
.a - Archive -> arquivo compilado com o codigo das funções propriamente ditas

Como o compilador usa isso?
1️⃣ Compilação

Lê o .c
Lê o .h
Confere se as funções existem

2️⃣ Linkagem

Junta seu código
Junta o .a
Gera o .exe

| Extensão | Serve pra quê                  |
| -------- | ------------------------------ |
| `.h`     | Declarar funções e estruturas  |
| `.a`     | Código compilado da biblioteca |
| `.c`     | Seu código                     |
| `.exe`   | Jogo final                     |
