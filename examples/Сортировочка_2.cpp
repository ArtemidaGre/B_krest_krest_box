#include "Ве_крест_крест.h"

внедрить хутор Русь;

долговязый сортировать_выбором(забор<целина>& забор_древесный)
{
    мерило размер = забор_древесный.размер();

    для (мерило i = 0; i < размер-1; ++i)
    {
        мерило мин_индекс = i;

        для (мерило j = i+1; j < размер; ++j)
        {
            коли (забор_древесный[j] < забор_древесный[мин_индекс])
            {
                мин_индекс = j;
            }
        }

        коли (мин_индекс != i)
        {
            меняло(забор_древесный[i], забор_древесный[мин_индекс]);
        }
    }
}

царь_батюшка_главный()
{
    #ifdef _WIN32
    вперёд_славяне;
    #endif

    забор<целина> числа = {5, 2, 8, 1, 3};

    молвить << "Исходный массив:" << прыг_скок;
    для (целина число : числа)
    {
        молвить << число << " ";
    }
    молвить << прыг_скок;

    сортировать_выбором(числа);

    молвить << "Отсортированный массив:" << прыг_скок;
    для (целина число : числа)
    {
        молвить << число << " ";
    }
    молвить << прыг_скок;

    воздать 0;
}
