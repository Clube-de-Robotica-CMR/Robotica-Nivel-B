# 🐙 Guia: Git & GitHub

O Git é a nossa "máquina do tempo" para o código, e o GitHub é a nossa "nuvem" onde guardamos e compartilhamos nossos projetos de robótica.

---

## 📺 Vídeos Tutoriais
Assista a estes vídeos antes de começar a digitar os comandos:
* 🎬 [O que é e como instalar o Git?](https://youtu.be/pGIh3SJwlrM?si=GdHHJtlW3siWOE_P)
* 🎬 [Como criar conta e usar o GitHub?](https://youtu.be/cUG8OwuPlY4?si=xRNxYJBXR3wbMLwf)

---

## 📥 Guia de Instalação do Git
1. **Download:** Vá ao site git-scm.com e baixe a versão para Windows.
2. **Instalação:** Pode avançar as telas clicando em "Next". 
3. **Dica Importante:** Quando perguntado sobre o editor padrão, selecione o **Visual Studio Code**.

---

## ⚙️ Guia de Configuração do Git
Após instalar, abra o seu terminal (ou o Git Bash) e digite os comandos abaixo para se identificar. 
> **Atenção:** Use o **mesmo e-mail** que você vai usar para criar sua conta no GitHub!

``` bash
git config --global user.name "Seu Nome Completo"
```
``` bash
git config --global user.email "seu-email@exemplo.com"
```

### 💻 Bash como Terminal Padrão no VS Code
Para facilitar a nossa vida no laboratório, vamos usar o terminal do Git dentro do VS Code:
1. Abra o **VS Code**.
2. Pressione **Ctrl + Shift + P** e digite: **Terminal: Select Default Profile**.
3. Na lista que aparecer no topo, selecione **Git Bash**.
4. Agora, sempre que você abrir um novo terminal (**Ctrl + '**), ele será o Bash!

---

## ☁️ Guia de Conta e Conexão (GitHub)
1. **Criar Conta:** Acesse github.com e crie seu usuário. 
2. **Conexão:** Na primeira vez que você tentar dar um push pelo VS Code, uma janela do navegador vai abrir pedindo para você **Autorizar o GitHub**. Basta clicar em "Sign in" e confirmar.

---

## 🚀 Comandos Essenciais (O Básico do Dia a Dia)
Estes são os comandos que usaremos em quase todas as aulas. **Assista aos vídeos para entender a lógica por trás de cada um!**

| Comando | O que ele faz? |
| :--- | :--- |
| **git clone [url]** | Baixa um projeto do GitHub para o seu PC. |
| **git status** | Mostra o que você alterou no código. |
| **git add .** | Prepara todas as suas alterações para serem salvas. |
| **git commit -m "mensagem"** | Cria um "ponto de salvamento" com uma descrição. |
| **git push** | Envia suas alterações salvas para o GitHub. |
| **git pull** | Baixa as novidades do servidor para o seu PC. |

---

## 🛡️ Dicas de Segurança e Privacidade
Como Vice-Diretor, recomendo que você cuide da segurança da sua conta:

* **2FA (Autenticação em Duas Etapas):** Ative isso nas configurações do GitHub. Use um app como o **Authenticator** ou **2FAS** para gerar seus códigos.
* **E-mail Privado:** No GitHub, você pode configurar para "Keep my email addresses private". Isso evita que seu e-mail pessoal apareça publicamente nos commits.
* **Cuidado com o que sobe:** Nunca coloque senhas ou tokens dentro do seu código. O que vai para o GitHub, o mundo pode ver!

---
**✅ Checkpoint:** Digite `git --version` no seu terminal. Se aparecer algo como `git version 2.x.x`, você concluiu esta etapa com sucesso!
