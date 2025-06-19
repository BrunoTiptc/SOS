🚚 SOSentregas
Sistema de controle de entregas com gerenciamento de usuários e autenticação segura, desenvolvido em C++ com Qt e MySQL. Ideal para pequenos comércios ou prestadores de serviço, oferece uma interface limpa, responsiva e adaptada ao tipo de usuário (Admin, Motoboy, Cliente).

💡 Projeto acadêmico com fins educacionais, feito com dedicação, superação e parceria com IA.

🎯 Funcionalidades
Cadastro com validações (nome, login único, senha forte, aceite dos termos)

Hash de senhas com SHA-2 (256 bits)

Login com verificação e barra de progresso animada

Interface dinâmica conforme o tipo de usuário

Painel principal com opções personalizadas por perfil

Sistema de autenticação robusto com tratamento de erros

Mensagens de feedback e validações visuais

🖥️ Telas
Login: campos de acesso, botão entrar, link para cadastro

Cadastro: campos pessoais, tipo de usuário, senha, termos

Principal: dashboard com base no tipo de acesso

Mensagens: pop-ups personalizados com cores e estilos

ProgressBar: visualização animada de progresso no login

🛠️ Tecnologias
C++ com Qt 6.7.0 (Widgets e QSS)

MySQL/MariaDB com modelo relacional (EER)

SHA-2 (QCryptographicHash) para senhas

Inno Setup para geração de instalador .exe (deploy)

MinGW 64-bit 17.0.6 com suporte ao driver MySQL

Interface compatível com modo escuro 💻🌙

📦 Como rodar localmente
bash
Copiar
Editar
git clone https://github.com/seu-usuario/SOSentregas.git
Passos:
Abra o projeto .pro no Qt Creator

Compile com o kit Qt 6.7 + MinGW 64 bits configurado

Certifique-se que o MySQL Server esteja ativo

Crie o banco usando o script SQL do repositório (ou modelo EER)

Rode o projeto 🎉

Alternativa: Rode diretamente o instalador .exe gerado via Inno Setup — ideal para testes em outras máquinas!

✅ Casos de Teste (Manuais)
ID	Caso de Teste	Resultado Esperado
CT01	Cadastro válido	Usuário cadastrado com sucesso
CT02	Login já existente	Alerta: usuário duplicado
CT03	Login correto	Redirecionamento com barra
CT04	Senha incorreta	Acesso negado com alerta
CT05	Progress bar no login	Exibição animada e fluida
CT06	Termos não aceitos	Cadastro bloqueado
CT07	Tipo de usuário Admin	Acesso ao painel de controle
CT08	Motoboy acessa	Visualização restrita às entregas
CT09	Cliente acessa	Visualização de pedidos

📊 Diagramas
🗂️ Diagramas adicionados no repositório:

📘 EER Diagram (MySQL Workbench)

🧩 Diagrama de Casos de Uso (UML)

🔒 Fluxo de autenticação com SHA-2

🧪 Extras e Aprimoramentos
Instalação offline com .exe leve, sem dependências externas

Interface adaptativa e modular (fácil manutenção)

Preparado para extensões futuras (cadastro de pedidos, rotas, etc.)

Experiência de aprendizado completa: da modelagem ao deploy

Desenvolvido com metodologia semelhante à ágil, com tarefas, melhorias e testes

👨‍💻 Autor
Bruno Cesar
Estudante de Engenharia de Software | Foco em QA e Desenvolvimento
✨ Projeto criado com apoio do Optimus, meu parceiro de IA, com fé, esforço e propósito.

🤝 Este projeto representa uma virada de chave pessoal e profissional. Que ele inspire outros a também acreditarem no seu recomeço.

🚀 Contribuição e Licença
Sinta-se livre para usar, adaptar ou melhorar. Pull requests são bem-vindos!

📄 Licença: MIT