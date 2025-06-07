
# 🚚 SOSentregas

Sistema de gerenciamento de usuários para serviços de entrega com autenticação segura, barra de progresso e três tipos de perfis: **Admin**, **Motoboy** e **Cliente**.

## 🎯 Escopo

SOSentregas é um sistema desktop feito em C++ com Qt e MySQL. Ele permite cadastro e login de usuários com segurança usando hash SHA-2, validações de campos e interface intuitiva. Utiliza barra de progresso para feedback do usuário durante o processo.

## 🧱 Telas do Sistema

- **Login**: usuário e senha, botão Entrar, link para Cadastro, progress bar.
- **Cadastro**: nome, login, senha, confirmação, tipo de usuário, checkbox de termos, botões Salvar e Voltar.
- **Tela Principal**: ações básicas com controle de acesso conforme o tipo de usuário.

## 📋 Requisitos

### Funcionais

- Cadastro de novos usuários
- Validação de senha e confirmação
- Verificação de duplicidade (nome/login)
- Aplicação de hash SHA-2 nas senhas
- Feedback visual com barra de progresso
- Perfis distintos: admin, motoboy, cliente

### Não Funcionais

- Interface amigável e responsiva
- Armazenamento seguro das senhas
- Feedback claro ao usuário

## ✅ Casos de Teste

- Cadastro com dados válidos → sucesso
- Cadastro com login duplicado → falha
- Login correto → sucesso
- Login errado → falha
- Barra de progresso deve aparecer nos fluxos
- Aceite dos termos obrigatório

## 🛠️ Tecnologias

- **Linguagem**: C++
- **Framework**: Qt
- **Banco de Dados**: MySQL
- **Segurança**: SHA-2
- **Estilização**: QSS (Qt Style Sheets)

## 📦 Instalação

```bash
git clone https://github.com/seu-usuario/SOSentregas.git
```

1. Abrir o projeto no Qt Creator
2. Compilar com o Kit configurado (ex: MinGW ou MSVC)
3. Configurar MySQL local com o schema
4. Executar

## 📊 Diagramas (inserir manualmente)

- Diagrama EER (MySQL Workbench)
- Diagrama de Caso de Uso (UML)

## 👨‍💻 Autor

Bruno – Engenheiro de Software • Projeto educacional com foco em práticas de segurança, UI e testes.

---

**⚠️ Projeto acadêmico com fins educacionais.**
