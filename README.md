# 🚚 SOSentregas

Sistema de cadastro e gerenciamento de usuários para serviços de entrega, com suporte a diferentes perfis (admin, motoboy e cliente). Desenvolvido com **C++**, **Qt** e **MySQL**, com foco em segurança, usabilidade e arquitetura escalável.

---

## 📌 Funcionalidades

- Cadastro de usuários com validações completas
- Login com verificação segura de senha
- Diferenciação de perfil: `Admin`, `Motoboy`, `Cliente`
- Interface adaptável à função do usuário
- Hash seguro de senhas com algoritmo **SHA-2**
- Feedback visual com barra de progresso em operações
- Aceite obrigatório dos termos de uso no cadastro

---

## 🖥️ Telas do Sistema

- **Tela de Login:** usuário, senha, botão *Entrar*, link para cadastro e barra de progresso  
- **Tela de Cadastro:** nome, login, senha, confirmação, tipo de usuário, checkbox de termos, botões *Salvar* e *Voltar*  
- **Tela Principal:** recursos adaptados ao tipo de usuário logado

---

## ✅ Requisitos

### Funcionais

- RF01: Cadastro de novos usuários
- RF02: Validação de senhas e confirmação
- RF03: Verificação de nome/login duplicados
- RF04: Armazenamento de senha com hash SHA-2
- RF05: Exibição de barra de progresso em login/cadastro
- RF06: Diferenciação de permissões por tipo de usuário

### Não Funcionais

- RNF01: Interface intuitiva e responsiva
- RNF02: Armazenamento seguro de senhas
- RNF03: Feedback visual durante operações

---

## 🧪 Casos de Teste (Manuais)

| Código | Descrição                                    | Resultado Esperado              |
|--------|----------------------------------------------|---------------------------------|
| CT01   | Cadastro com dados válidos                   | Sucesso                         |
| CT02   | Cadastro com login já existente              | Falha com mensagem de erro     |
| CT03   | Login com credenciais válidas                | Sucesso e redirecionamento      |
| CT04   | Login com senha incorreta                    | Falha com alerta                |
| CT05   | Verificação da barra de progresso            | Exibir percentuais              |
| CT06   | Cadastro sem aceitar os termos               | Bloquear envio do formulário    |

---

## 🧰 Tecnologias Utilizadas

- **Linguagem:** C++
- **Framework:** Qt (Designer + Widgets)
- **Banco de Dados:** MySQL (modelado via MySQL Workbench)
- **Segurança:** Hash SHA-2 para senhas
- **Estilização:** QSS (Qt Style Sheets)

---

## ⚙️ Instalação e Execução

1. Clone o repositório:
   ```bash
   git clone https://github.com/seu-usuario/SOSentregas.git
