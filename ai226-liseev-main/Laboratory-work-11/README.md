## «Етапи компіляції С-програм та автоматизація побудови С-програм»
### Побудова програми з’єднання з СКБД PostgreSQL на основі монолітної С-програми

![mintty_CCtQBJ5VJJ](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/824d4654-77e9-489e-8227-e3f1041dbb6a)

Мал.1 - виконання програми db_connect.c

![mintty_jEN2jtzwvL](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/e1192bcf-f25e-47c6-8793-c180dc9940eb)

Мал.2 - виконання програми db_connect_param.c

### Побудова програми з’єднання з СКБД PostgreSQL за модульним принципом програмування

![mintty_tJjMXA25RC](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/ab2248e2-fc77-4986-8744-1d4318b73b56)

Мал.3 - виконання команди softdrink .

### Побудова програми з’єднання з СКБД PostgreSQL через команду make

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/a6496d57-1b09-4e72-97db-f690d0032432)

мал.4 - виконанн команди make.

### Побудова програми видалення рядку реляційної таблиці

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/5353b5e2-229d-4199-9a65-874c88a9f77a)

Мал.5 - вміст  файлу remove_softdrink.c

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/438cf2e9-bc24-42c4-af6b-df2d6aa648a7)

Мал.6 - виконання програми softdrink

### Побудова програми додавання рядку реляційної таблиці

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/ed8e9146-ef51-40ad-adb8-d3dae92219b3)
Мал.7 - вміст  файлу add_softdrink.c

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/438cf2e9-bc24-42c4-af6b-df2d6aa648a7)

Мал.8 - иконання програми softdrink

### Побудова програми перегляду рядків реляційної таблиці

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/82eadf8a-e34d-437d-a156-e8c8d08deee6)

Мал.9 - вміст  файлу get_softdrink.c

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/d6b8f48a-132c-4b47-a948-f3f68e9bfb8f)

Мал.10 - иконання програми softdrink

### Додаткове налаштування процесу керування файлами через команду make

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/ffd27254-ede7-414f-91a4-6c8a1ec0566a)

МАл.11- Вміст файлу makefile

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/576173a7-af31-498d-b848-5b7425a9c289)

Мал.12- виконання команди make з описом мети clean, можно побачити що було очищено всі object-файли та executable-файли.

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/cfa1b10d-3503-4b8a-bb0a-bfd2b554a536)

Мал.13 -Виконання команди make з описом мети install

###  Огляд етапів побудови С-програми GNU-компілятором GCC

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/69e59a6b-adbc-42bd-a106-4372550c2ecb)

Мал.14 - preprocessing та compilation

![mintty_PkDusemHMV](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/391288a7-117e-4943-8bb2-172bad822ad3)

Мал.15 - Оптимізований compilation-етап

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/09967f47-a5c3-47c8-8baf-d81822328ddd)

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/13e9d9cb-28f5-4d30-8037-1761424aafba)

Малю.16,17 - Вміст файлів softdrink_opt.s,sodftdrink.s, можна побачити що оптимізований файл менший на 10 строк коду( 47 та  57)

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/10b5efd7-7471-44ce-96f9-9032360d1ade)

Мал.18 Виконнання linking-етапу

![mintty_0xc6zD8Fxx](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/d672b860-dacf-4735-84a3-6ef52a146234)

Мал.19 - список файлів динамічних бібліотек, пов’язаних зі створеним executable-файлом.








