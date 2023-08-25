## «Основи операційного керування процесами в Unix-подібних ОС»
### «Перегляд таблиці процесів»

![2 1 1](https://user-images.githubusercontent.com/127152277/234222857-f28821e5-f0b7-46b4-936d-ce2d5fe4671b.png)

Мал.1 - Ієрархія процесів у вигляді дерева процесів(з уразуванням імені користувача та PID).

![image](https://user-images.githubusercontent.com/127152277/234278171-97e2ef62-343e-4a61-8bce-ecbb12c9931c.png)


Мал.2 - Назви запушени процесів ОС.

![image](https://user-images.githubusercontent.com/127152277/234282325-c9dfb051-d376-41af-a326-a1a36cde354a.png)

Мал.3 - Таблиця процесів, з умовами: процеси запущені від імені користувача,таблиця процесів має розширений набір стовпчиків, для першого рядка опису процесу визначено,значення Virtual memory size та 
Resident memory size.

![2 1 4](https://user-images.githubusercontent.com/127152277/234223997-4b94b3d0-ea18-4d89-9696-e8acd2c484c1.png)

Мал.4 - Таблиця процесів, з умовами: процес є запущенною bash-оболонкою та має стовпчики:  TTY, USER, PID, STIME, CMD.

![2 1 5](https://user-images.githubusercontent.com/127152277/234224164-272a2c8a-85b3-46e1-902b-01a8f0044cd2.png)

Мал.5 - Таблиця процесів, з умовами: процеси знаходяться у стані сну,процеси не мають псевдотерміналу,таблиця процесів містить лише стовпчики: PID, CMD.

![2 1 6](https://user-images.githubusercontent.com/127152277/234224596-b2f52eaa-4a7d-4fd1-a323-3a93332c806e.png)

Мал. 6 - Таблиця команди TOP , відсортована за % використання оперативної пам'яті.

## «Керування станами процесів»

![2 2 1](https://user-images.githubusercontent.com/127152277/234224915-e2b40aff-3ea0-47e0-876f-666bf6b4df0a.png)

Мал.7 - Виконання команди ping localhost у фоновому режимі.

![2 2 2(1)](https://user-images.githubusercontent.com/127152277/234225162-955e5e9d-adf5-4524-83cc-85db0a467416.png)

Мал. 8 - Таблиця процесів ping.

![2 2 2(2)](https://user-images.githubusercontent.com/127152277/234225240-5f0ab075-89bd-4011-8dd9-432c8749d685.png)

Мал.9 - Таблиця команди ping після зупинки.

![2 2 3 2 2 4](https://user-images.githubusercontent.com/127152277/234225430-88fa1864-be8b-4f26-a9fd-718ae6fcb371.png)

Мал.10 - Таблиця процесів команди ping запущеної у режимі «background without hanging up».

![2 2 4](https://user-images.githubusercontent.com/127152277/234225630-ba75ae0f-d778-45cb-a0c3-c98e89496065.png)

Мал.11 - Таблиця процеcів команди ping запущеної у режимі «background without hanging up» піля закриття псевдотерміналу.
### «Керування пріоритетами виконання процесів»

![2 3 1](https://user-images.githubusercontent.com/127152277/234226309-20f00c88-27b8-4327-a264-483ae575bf09.png)

Мал.12 - Код скрипт-файлу liseev.sh.

![2 3 2](https://user-images.githubusercontent.com/127152277/234226542-70f51384-bbce-4044-a0ca-d627ce663da8.png)

Мал.13 - Таблиця процесів для процесу liseev.sh. Цей процес займає невеликий відсоток часу CPU.

![2 3 3](https://user-images.githubusercontent.com/127152277/234226704-8ff0bc20-3152-4415-906e-7de6417ee967.png)

Мал.14 - Таблиця процесів для процесу liseev.sh після зупинки. Навантаження CPU почало плавно спадати після зупинки процесу.

![2 3 4](https://user-images.githubusercontent.com/127152277/234227318-60f4edef-e35f-4acc-af4f-60b65a15a41e.png)

Мал.15 - Таблиця процесів для процесу liseev.sh після зупинки через 1 хвилину. Можливо побачити що з проходженням 1 хвилини значення %CPU впало на 4.9 пункти.

![2 3 5](https://user-images.githubusercontent.com/127152277/234228311-609f8c9d-7450-4a24-879d-72e34af9a2aa.png)

Мал.16 - Таблиця процесів для процесу liseev.sh після відновлення роботи. Навантаження на CPU почало збільшуватись.

![2 3 7](https://user-images.githubusercontent.com/127152277/234228502-8426cff6-1bd9-493a-be93-52c6f0df22e1.png)

Мал.17 - Код скрипт фалу script.sh.

![2 3 8](https://user-images.githubusercontent.com/127152277/234228660-f035da30-8c85-44c3-a079-a98a1721f97c.png)

Мал.18 - Таблиця процесів для 3 процесів: liseev.sh, liseev2.sh, liseev3.sh.

![2,3,9](https://user-images.githubusercontent.com/127152277/234228980-d53f8a33-6b90-45e4-a9e8-77af7213eec3.png)

Мал.19 - Таблиця процесів для 3 процесів: liseev.sh, liseev2.sh, liseev3.sh, після змінення пріоритету у файлі script.sh з 10 на 9. Можемо побачити що після змінення значення *ni* значення %CPU збільшились.

![mintty_P1TDloy0e3](https://user-images.githubusercontent.com/127152277/234229405-a83d985c-8841-4f47-af56-c430fa5f0236.png)

Мал.20 - Таблиця процесів для 3 процесів: liseev.sh, liseev2.sh, liseev3.sh, через команду TOP. Значення %CPU за командами TOP та ps відрізняються лише у процесі liseev.sh. 
