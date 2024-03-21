# Разработчик игр на Unreal Engine 4

## Урок 19. Классы и объекты в С++. Наследование
Что нужно сделать:
создать C++ проект в Visual Studio (консольное приложение):

1. Создать класс Animal с публичным методом Voice() который выводит в консоль строку с текстом.

2. Наследовать от Animal минимум три класса (к примеру Dog, Cat и т.д.) и в них перегрузить метод Voice() таким образом, чтобы для примера в классе Dog метод Voice() выводил в консоль ""Woof!"".

3. В функции main создать массив указателей типа Animal и заполнить этот массив объектами созданных классов.

4. Затем пройтись циклом по массиву, вызывая на каждом элементе массива метод Voice().

5. Протестировать его работу, должны выводиться сообщения из ваших классов наследников Animal.