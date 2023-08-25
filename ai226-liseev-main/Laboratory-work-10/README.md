## Керування процесами-транзакціями в базах данних

### 2.1 Теоритичине завданння зі створення істроії виконання транзакцій 

T1= W[M] W[K] C1
T2= R[M] R[K] W[M] C2
T3= W[B] R[K] W[M] C3

#### 2.1.1 Створити історію квазіпаралельного успішного виконання 
транзакції для протоколу 1-го ступення блокування.

H1(T1,T2)=X1[M] W1[M] R2[M] X3[B] W3[B] X1[K] W1[K] R2[K] R3[K] C1 U1 X2[M] W2[M] X3[M] - wait - C2 U2 X3[M] W3[M] C3 U3

#### 2.1.2

int wait [2][2]={{2,3},{3,2}};

#### 2.1.3

H1(T1,T2)=X1[M] W1[M] S2[M] -wait- A2 U2 S2[M] R2[M] X3[B] W3[B] X1[K] W1[K] S2[K] -wait - A2 U2 S2[K] R2[K] S3[K] R3[K] C1 U1 X2[M] W2[M] X3[M] - wait - C2 U2 X3[M] W3[M] C3 U3

char* lock_chart[] [3] = {
{ "M","X1","S2"},
{ "K","X1","S2"}};

#### 2.1.4

int wait [2][4]={{1,2},{2,1},{2,3},{3,2}};

### 2.2  Налаштування бази даних

![2 2 1](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/3361d696-9daf-4fba-bce8-005bf6c72d7f)

Мал.1 - Підключення до БД і СКБД та отримані ім’я корситувача СКБД та назва БД.

![2 2 3](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/57795e1c-6381-4d23-af72-83add498130c)

Мал.2 - Створення таблиці та введення нової строки згідно із варіантом(мій 25).

![2 2 5](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/09634d34-63ca-4ada-b15e-a7c141e9510a)

Мал.3 - Додавання ще одного рядка.

![2 2 6](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/0df1c414-1449-4d29-a5c0-d0ef7076a648)

Мал.4 - Виведення таблиці.

![mintty_THycuGe4bl](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/66748e0d-fa97-499b-a24e-cb88dac33a41)

Мал.5 - вміст файлу liseev_transaction_lock_1.sql .

![mintty_3Pkt0RwToh](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/450f5efc-47c8-4359-a214-86a4ba10e5d1)

Мал.6 - виконання 2 транзакцій при квазипаралельному режимі роботи.

![mintty_Wy2Z5jciiw](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/07b79cf1-50d5-444a-86f4-6a2a37c07526)

Мал.7 - вміст файлу liseev_transaction_lock_2.sql .

![mintty_j0YeohGwcq](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/92f3856d-1183-4f12-a602-a1c7579f06ba)

Мал.8 - Виконаня 2 транзакцій з 2-им ступенем блокування х додатковим параметром NOWAIT.

### Керування квазіпаралельним виконанням транзакцій при наявності Deadlock-станів.

![image](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/77920c65-f097-4fc6-a843-b65656ac8e29)

Мал.9 - вміст файлу liseev_deadlock.sql .

![mintty_25HhMm7dLl](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/6324a5d6-02cc-4246-a89e-ae267f71d072)
![mintty_IaFxvF4Ik8](https://github.com/oleksandrblazhko/ai226-liseev/assets/127152277/740ccf13-621c-456e-b2be-4ef8dce7933f)

Мал.10,11 - Виконання транзакцій у стані deadlock. Стан deadlock зьвився через зміну вже змінених данних.Процес 565947  був заблокований  процесом 565950, а  процес 565950 заблокований Процесом 565947, бо ці 2 процеси записували у однакові змінні, через що й блокували один одного(З’явився Deadlock стан)(привел)




