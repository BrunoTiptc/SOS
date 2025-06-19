BEGIN TRANSACTION;
CREATE TABLE IF NOT EXISTS corridas (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  preco REAL DEFAULT NULL,
  origem TEXT DEFAULT NULL,
  datahora TEXT DEFAULT (datetime('now')),
  cliente_id TEXT DEFAULT NULL,
  motoboy_id INTEGER NOT NULL,
  destino TEXT DEFAULT NULL
);
CREATE TABLE IF NOT EXISTS empresas (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  cliente TEXT NOT NULL,
  endereco TEXT NOT NULL,
  telefone TEXT NOT NULL
);
CREATE TABLE IF NOT EXISTS motoboy (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  nome TEXT NOT NULL,
  telefone TEXT NOT NULL,
  placa TEXT NOT NULL
);
CREATE TABLE IF NOT EXISTS usuarios (
  idusuarios INTEGER PRIMARY KEY AUTOINCREMENT,
  nome TEXT NOT NULL UNIQUE,
  login TEXT NOT NULL UNIQUE,
  senha TEXT NOT NULL,
  confirmaSenha TEXT NOT NULL,
  role TEXT NOT NULL,
  email TEXT
);
INSERT INTO "usuarios" ("idusuarios","nome","login","senha","confirmaSenha","role","email") VALUES (1,'teste','teste1','','1234','',''),
 (34,'igor','igorptc','@Estudo1','@Estudo1','admin',''),
 (35,'Bruno','brunimptc','@Estudo1','@Estudo1','admin','');
COMMIT;
