#include <iostream>
using namespace std;          //ibtasam hasan-24-57736-2

int main()
{
    int A[12];

    cout << "The array's size is 12. Input the elements: ";
        for (int i= 0; i< 12; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < 12; i++)
    {
        int count = 0;

        for (int j = 0; j < 12; j++)
        {
            if (A[i] == A[j])
            {
                count++;
            }
        }

        bool printedbefore = false;
        for (int k = 0; k < i; k++)
        {
            if (A[i] == A[k])
            {
                printedbefore= true;
            }
        }

        if (printedbefore==false)
        {
            cout << A[i] << " occurs = " << count << " times" << endl;
        }
    }

    return 0;
}
