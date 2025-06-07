
# 🚚 SOSentregas

Sistema de gerenciamento de usuários para serviços de entrega. Feito em **C++ com Qt e MySQL**, possui autenticação segura com **SHA-2**, barra de progresso para feedback e diferentes perfis de usuário (**Admin**, **Motoboy** e **Cliente**).

## 🎯 Funcionalidades

- Cadastro com validações (nome, login, senha, termos)
- Hash de senhas com SHA-2
- Login com verificação e barra de progresso
- Interface limpa, intuitiva e responsiva
- Controle de acesso por tipo de usuário

## 🧱 Telas

- **Login**: usuário/senha, botão entrar, link para cadastro
- **Cadastro**: dados pessoais, tipo, senha e termos
- **Principal**: interface adaptada ao tipo de usuário

## 🗂️ Tecnologias

- C++ com Qt Framework (Widgets e QSS)
- MySQL Workbench (EER Model)
- SHA-2 para segurança de senhas

## 📋 Requisitos

- Qt Creator instalado com Kit configurado
- MySQL Server ativo com banco configurado

## 🚀 Como rodar

```bash
git clone https://github.com/seu-usuario/SOSentregas.git
```

1. Abrir o projeto no Qt Creator
2. Compilar e conectar com o banco MySQL
3. Executar e testar funcionalidades

## ✅ Casos de Teste

| ID   | Caso                          | Resultado Esperado       |
|------|-------------------------------|--------------------------|
| CT01 | Cadastro válido               | Usuário salvo            |
| CT02 | Login duplicado               | Erro com alerta          |
| CT03 | Login correto                 | Acesso permitido         |
| CT04 | Login incorreto               | Acesso negado            |
| CT05 | Progress bar visível          | Feedback visual           |
| CT06 | Termos não aceitos            | Cadastro bloqueado       |

## 📊 Diagramas

> *Adicionar manualmente: EER (MySQL), Caso de Uso (UML)*

## 👤 Autor

**Bruno** – Estudante de Engenharia de Software  
Projeto desenvolvido com apoio de IA como parceiro de estudos 🤖

---

> Projeto acadêmico para fins educacionais. Sinta-se livre para contribuir ou adaptar! 🚀
