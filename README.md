Определить:
А)Количество дней, за которое бактерии заполнят все заданное поле в зависимости от N, K1, K2. 
Б)Определить количество погибших за этот срок бактерий.
В)Рассчитать количество этих дней и бактерий для любых P- , P+.
Условие:
Дано поле размером N на N. Значение N - до 100
За первые 7 дней на поле каждый день появляется случайное число бактерий от K1 до K2 в разных позициях.
После этих 7 дней в соседних от появления бактерии ячейках (их 8) с вероятностью P+=5% появляется по бактерии в каждой ячейке, 
если она незанята
Через 14 дней после появления бактерия перестает размножаться.
Каждый день с вероятностью P-=2% бактерия умирает,если живет дольше 7 дней, а занятое ей поле не освобождается.
Объявлены:
целочисленные переменные d,e,с,u, равные 0,0,0 и 8,
целочисленные переменные n,K1,K2,P1,P2 (вводится пользователем)
Решение:
Введен целочисленный динамический массив mas с размерностью поля k. Это общее число бактерий.
В цикл for, который будет считать дни, введен цикл с постусловием do…while,который отвечает за заполнение бактериями всего поля
(пока e не равно n). В этой части кода генерируется массив на случайные числа от K1 до K2 (начальный/конечный диапазон)
Переменные е и d заполняются значением массива i-ого элемента. 
Если элемент массива будет равен единице и количество заполненных клеток будет меньше нужного, то значения переменных e и d будет
увеличиваться на единицу, а переменная x1 будет отображать вероятность этого события с использованием переменных u и P1.Если это
условие невыполнимо, то выполняется другое условие if, по которому переменные d и e будут увеличиваться на значение массива i-ого 
элемента, с вероятностью x1 выполнения этого события. В)на экран выводится численное значение переменной d
С 8 до 14 дней  если элемент массива равен 1 и ячейки заполнились полностью, то количество погибших бактерий по истечении 7 дней 
с вероятностью x2 будет
увеличиваться на единицу. Если это выражение не выполняется, то вводится условный оператор, который увеличивает количество погибших 
бактерий по истечении 7 дней на значение массива i-ого элемента с вероятностью x2, если условие выполнится. Выводится количество 
погибших бактерий по истечении 7 дней.