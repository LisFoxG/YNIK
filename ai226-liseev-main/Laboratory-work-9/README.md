###  «Основи програмного керування процесами в Unix-подібних ОС»
##  «Перегляд інформації про процес»

![image](https://user-images.githubusercontent.com/127152277/236899079-adc18b3c-22fa-4fd2-98ad-5a9d6e085fb4.png)

Мал.1- код liseev_process_info.c

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/24acd436-6061-4e69-bf8f-63ca186c476d)

![2 1 22()](https://user-images.githubusercontent.com/127152277/236899279-72992957-277a-4521-ac56-8496213fc507.png)

Мал.2,3 - Виконання програми liseev_process_info.c у паралельному та конвеерному режимі. 
Можно побачити шо під час паралельного виконання 2 процесів вони мають різні id группи, 
а під час конвеерного вони мають однакові gid.

##  «Створення child-процесу»

![2 2 2()](https://user-images.githubusercontent.com/127152277/236899836-77d44889-bfed-474b-9ecb-17ed6ac29897.png)

Мал.4 - код програми wc_liseev.c.

![mintty_60Yg7by7IK](https://user-images.githubusercontent.com/127152277/236900122-dbd08e28-6f6b-4bd8-8a17-65da09e950c4.png)

Мал.5 - виконання команди wc_liseev.c

##  «Обмін сигналами між процесами»

![image](https://user-images.githubusercontent.com/127152277/236900436-602b667c-4cd1-4d1f-91e7-af55b5cd08f7.png)

мал.6 - код програми liseev_get_signal.c

![image](https://user-images.githubusercontent.com/127152277/236900945-e69709a7-03e8-4c23-83ec-697166f0c0bc.png)

Мал.7- код програми liseev_set_signal.c

![2 34](https://user-images.githubusercontent.com/127152277/236900671-bb810a16-04f6-4b51-bae2-44bbf3921a14.png)
![2 3 3](https://user-images.githubusercontent.com/127152277/236900675-c341d803-6a42-40d3-8eb8-e3f5e67b6f4e.png)

Мал.8,9 - Виконання програм liseev_get_signal.c та liseev_set_signal.c

## «Створення процесу-сироти»

![2 4](https://user-images.githubusercontent.com/127152277/236901139-deb47a6d-cac2-454c-bf67-176a8af4e5fe.png)

Мал.10 - Код програми сироти liseev_orphan.c

![2 4 2](https://user-images.githubusercontent.com/127152277/236901231-02f82ca8-229d-4ed1-8e57-ee72a9001755.png)

мал.11 -виконання команди liseev_orphan.c

## «Створення zombie-процесу»

![image](https://user-images.githubusercontent.com/127152277/236901486-101b4edb-6bdd-4dc1-a52f-7dc07f2cbb6e.png)

мал.12 - код програми зомбі liseev_zombie.c

![2 5](https://user-images.githubusercontent.com/127152277/236901618-900d0f73-7c8d-462f-b134-da95c43990de.png)
Мал.13 - таблиця процесі під час виконання зомбі процесу.

## «Попередження створення zombie-процесу»

![image](https://user-images.githubusercontent.com/127152277/236902499-eced4e50-4291-4139-b078-0555240e81a3.png)
Мал.14 - код програми попередження створення зомбі процесу liseev_stop_zombie.c

![mintty_dR0Iselsf2](https://user-images.githubusercontent.com/127152277/236902130-95eb6a31-2895-4aa7-bbf5-01792fffacb6.png)
Мал.15 - виконання програми.
