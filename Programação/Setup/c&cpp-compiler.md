# 🛠️ Guia: Compilador GCC/G++ (C/C++)

O compilador GCC é o "tradutor" que transforma o código C que você escreve em um programa executável. Ele é a ferramenta padrão usada em grandes projetos de software e na robótica competitiva.

## 📺 Vídeo Tutorial
Assista ao vídeo abaixo para acompanhar a instalação no seu Sistema Operacional:
* 👉 [Assista aqui: Instalando o GCC no Windows](https://youtu.be/1Uw9EV4Te8M?si=GfDKjIo9_6CzxQoX)
* 👉 [Assista aqui: Instalando o GCC no Linux](https://youtu.be/gJFvFDRV6wU?si=xsHSAOCKCNcWHBsK)
* 👉 [Assista aqui: Instalando o GCC no MacOS](https://youtu.be/Kvqod1XoZ-g?si=FQz66EKxBmS4T_cM)

---

## 📥 Guia de Instalação por Sistema

### 🪟 Windows (via MSYS2)
1. **Download:** Acesse **msys2.org** e baixe o instalador .exe.
2. **Instalação:** Siga o assistente e, ao final, abra o terminal do MSYS2.
3. **Comando:** No terminal que abriu, digite o comando a seguir:
``` bash
 pacman -S mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-gdb mingw-w64-ucrt-x86_64-make
 ```
4. **Variáveis de Ambiente:** Adicione o caminho **C:\msys64\ucrt64\bin** ao Path do seu Windows (conforme o passo a passo de Variáveis do Sistema).

#### ⚙️ Variáveis do Sistema 
Para que o seu computador reconheça o comando gcc em qualquer lugar, precisamos avisar ao Windows onde ele está:

1. **Copiar Caminho:** Abra a pasta `C:\msys64\ucrt64\bin` no seu computador e copie o endereço da barra de tarefas.

2. **Editar Variáveis:** No menu iniciar, digite "Variáveis de ambiente" e escolha "Editar as variáveis de ambiente do sistema".

3. **Path:** Clique em "Variáveis de Ambiente", procure por Path na lista de "Variáveis do sistema" e clique em Editar.

4. **Novo:** Clique em Novo, cole o caminho que você copiou e dê OK em todas as janelas.

### 🐧 Linux (Ubuntu/Debian)
A maioria das distribuições Linux já facilita muito esse processo.
1. Abra o seu terminal e digite esse comando:
``` bash
 sudo apt update && sudo apt install build-essential
```
2. Digite sua senha e confirme com **S** ou **Y**.

### 🍎 macOS
No Mac, o GCC vem junto com as ferramentas de desenvolvedor da Apple.
1. Abra o terminal (Command + Espaço, digite Terminal) e digite esse comando:
``` bash
   xcode-select --install
```
2. Clique em **Instalar** na janela que aparecer e aceite os termos.

---

## 🧪 Testando a Instalação
Para garantir que o compilador está pronto para uso, abra um terminal e faça o teste:
``` bash
  gcc --version
```
Se aparecer algo como "gcc (Rev2, Built by MSYS2 project)..." ou "Apple clang version...", parabéns! O compilador está pronto.

---

## 📸 Integração com VS Code
No VS Code, a extensão de C/C++ que instalamos anteriormente vai procurar automaticamente pelo GCC que você acabou de instalar.
