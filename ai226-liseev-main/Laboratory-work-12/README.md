## «Програмування міжпроцесної взаємодії з використанням каналів, черг повідомлень та програмування багатопоточної взаємодії»


### 2.1 Використання черг повідомлень для процесів, які взаємодіють з однією БД під керуванням серверу СКБД PostgreSQL


![2 1 (1)](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/5d0a4a92-e4c3-4eb6-bf60-5f900dae8472)

![2 1 (2)](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/efa1beb2-8280-45c4-8262-5c6c2770dfd9)

Мал.1,2 - обмін повідомленнями між ддвоама процесам-копіями серверівс СКБД.

### 2.2  Програмна реалізація неіменованих каналів


![mintty_bLvcg06Azl](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/2b95ab8c-dd00-4f01-94b9-87a8c39b9d9c)

Мал.3- Програма pipe_write виконалась без помилок та асинхронно.

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/6cd3d283-2261-4969-b39a-ed2ca58dbf98)

Мал.4- вміст файлу pipe_read.c

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/f133023a-fa32-434a-94cd-572239c9ca31)


Мал.5 - вміст файлу pipe_write.c

### 2.3 Робота з іменованими каналами через інтерпретатор командного рядку

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/fdbdd69f-14e9-4f79-9e15-b5cfe874f666)

Мал.6 - Створено каналу liseev

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/13191646-f10e-42ed-8230-35b9f9f27e82)

Мал.7 - Читання з стовреного каналу.


### 2.4 Програмна реалізація іменованих каналів

![mintty_0jlXCNtkIf](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/2209859f-3691-4057-b4f8-e860f9cd28a5)

Мал.8 - Виконання програми fifo, що реалізує іменований канал liseev.

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/ca67657c-a561-4895-b507-73f8a30a8b89)

мал.9 - вміт файлу fifo.c

### 2.5 Програмування черги повідомлень

![mintty_u2sKmMoBXv](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/e76c8dcc-b7f4-4bae-a68b-cbb316c937ab)

Мал.10 - Виконання команд msgsnd та msgrcv. Команди виполнились без помилок ,асинхронно.

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/43bd13c6-d283-473c-ba6c-08cf4e769c71)

Мал.11 - вміст файлу msgsnd.c

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/f2142322-3f06-4aa7-a7a2-d542fffc7a91)

мал.12 - вміст файлу msgrcv.c


### 2.6 Програмування потоків

![mintty_YDZ4Om7GJU](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/8631e0f2-407b-4475-bc8f-71c10b27d06a)

Мал.13 - Виконання програми potoki

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/ee3e1a41-735a-43ee-a4a9-33cd98dd4766)

Мал.14 - Вміст файлу potoki.c





