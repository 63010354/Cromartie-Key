#include <iostream>

using namespace std;

struct kk
{
    int x, y;
    char top[129], bottom[129], key[129];
};

template <typename T>

void _swap(T& x, T& y)
{
    T temp = x;
    x = y;
    y = temp;
}

int main()
{
    kk data;
    cin >> data.x >> data.y >> data.top >> data.bottom >> data.key;
    for (int i = 0; i < data.x; i++)
        if (data.top[i] > data.bottom[i])
            _swap(data.top[i], data.bottom[i]);

    for (int i = 0; i < data.y; i++)
    {
        for (int j = 0; j < data.x; j++)
        {
            if (data.key[i] > data.bottom[j])
                data.key[i] = data.bottom[j];

            else if (data.key[i] < data.top[j])
                data.key[i] = data.top[j];
        }
    }
    printf("%s", data.key);
}