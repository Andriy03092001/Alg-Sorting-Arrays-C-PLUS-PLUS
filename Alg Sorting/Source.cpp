#include <iostream>
using namespace std;

int main() {

    const int n = 10;
	int arr[n] = {1,10,2,11,8,12,6,13,4};


    //���������  (Buble)
    //for (int j = 0; j < n - 1; j++) {
    //    for (int i = 0; i < n - 1; i++) {
    //        if (arr[i] > arr[i + 1]) { // ��������, ���� ���, �� ����� ������
    //            int tmp = arr[i];         // �������� �
    //            arr[i] = arr[i + 1];  // � � ������� �+1
    //            arr[i + 1] = tmp;     // � �+1 ������� �
    //        }
    //    }
    //}


    //������� (Select)
    //for (int i = 0; i < n; i++)
    //{
    //    int temp = arr[0]; // ��������� ���������� ��� �������� �������� ������������
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


    //�������� (Insert)
    //int temp, // ��������� ���������� ��� �������� �������� �������� ������������ �������
    //    indexPrev; // ������ ����������� ��������
    //for (int i = 1; i < n; i++)
    //{
    //    temp = arr[i]; // �������������� ��������� ���������� ������� ��������� �������� �������
    //    indexPrev = i - 1; // ���������� ������ ����������� �������� �������
    //    while (indexPrev >= 0 && arr[indexPrev] > temp) // ���� ������ �� ����� 0 � ���������� ������� ������� ������ ��������
    //    {
    //        arr[indexPrev + 1] = arr[indexPrev]; // ������������ ��������� �������
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