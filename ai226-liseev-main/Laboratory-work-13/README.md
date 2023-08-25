##  Програмування безпечної міжпроцесної та міжпотокової взаємодії в Unix-подібних ОС
### Аналіз наявності змагань у міжпотоковій взаємодії на основі алгоритму «Змінні блокування»

![2 1 1](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/3402c7ed-9737-48f6-b8f0-aeae3936faa5)

Мал.1 - вміст файлу db_lockvars_liseev.c

![2 1 2](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/0f422e82-b670-4f93-992f-945b7a3a2bf7)

Мал.2 - виконання программи db_lockvars_liseev. Наявна ситуація змагання, процеси записують одночасно змінну.

### Аналіз наявності змагань у міжпотоковій взаємодії на основі алгоритму «Строге чергування»

![2 2 1](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/bc4690ab-2b7f-470e-8d45-adc899d12541)

Мал.3 - вміст файлу db_strictwatching_liseev.c

![2 2 2](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/a07e980c-8868-4cc7-bd00-94f5926105f1)

Мал.4 - виконання програми db_strictwatching_liseev. Відсутня ситуація змагання.

### Аналіз наявності змагань у міжпотоковій взаємодії на основі алгоритму Петерсона

![2 3 1](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/ba83469c-89f1-43db-b151-437638bc6602)

Мал.4 - вміст файлу db_peterson_liseev.c

![2 3 2](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/6fa7d592-81fd-4944-a261-0f91e675d6e1)

Мал.5 - виконання програми db_peterson_liseev.Відсутня ситуація змагання.

### Аналіз наявності змагань у міжпотоковій взаємодії на основі двійкового  семафору

![2 4 1](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/50318320-0cb6-425d-836e-6c353b3effba)

Мал.6- вміст файлу db_semaphore_liseev.c

![2 4 2](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/5442a8da-0670-41c1-9bbf-d9d6e491037f)

Мал.7 - виконання програми db_semaphore_liseev.Відсутня ситуація змагання.

### Аналіз наявності змагань у міжпотоковій взаємодії на основі м’ютексу

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/341ba3f5-3978-4771-a1fa-5d6cd7ba451d)

Мал.8 - вміст файлу db_mutex_liseev.c

![mintty_ppbXAPCXas](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/a9fb4d10-3a5d-4aa7-9452-4f50ad9bf8a6)

Мал.9 - виконання програми db_mutex_liseev. Відсутня ситуація змагання.














