#include <iostream>
using namespace std;

int main() {

    const int n = 10;
	int arr[n] = {1,10,2,11,8,12,6,13,4};


    //Бульбашка  (Buble)
    //for (int j = 0; j < n - 1; j++) {
    //    for (int i = 0; i < n - 1; i++) {
    //        if (arr[i] > arr[i + 1]) { // перевірка, якщо так, то міняти місцями
    //            int tmp = arr[i];         // зберігаємо і
    //            arr[i] = arr[i + 1];  // в і кладемо і+1
    //            arr[i + 1] = tmp;     // в і+1 кладемо і
    //        }
    //    }
    //}


    //Вибіркою (Select)
    //for (int i = 0; i < n; i++)
    //{
    //    int temp = arr[0]; // временная переменная для хранения значения перестановки
    //    for (int j = i + 1; j < n; j++)
    //    {
    //        if (arr[i] > arr[j])
    //        {
    //            temp = arr[i];
    //            arr[i] = arr[j];
    //            arr[j] = temp;
    //        }
    //    }
    //}


    //Вставкою (Insert)
    //int temp, // временная переменная для хранения значения элемента сортируемого массива
    //    indexPrev; // индекс предыдущего элемента
    //for (int i = 1; i < n; i++)
    //{
    //    temp = arr[i]; // инициализируем временную переменную текущим значением элемента массива
    //    indexPrev = i - 1; // запоминаем индекс предыдущего элемента массива
    //    while (indexPrev >= 0 && arr[indexPrev] > temp) // пока индекс не равен 0 и предыдущий элемент массива больше текущего
    //    {
    //        arr[indexPrev + 1] = arr[indexPrev]; // перестановка элементов массива
    //        arr[indexPrev] = temp;
    //        indexPrev--;
    //    }
    //}

    //


    //Show finish array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

	return 0;
}