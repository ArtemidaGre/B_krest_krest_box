#include "Ве_крест_крест.h"

внедрить хутор Русь;

свет_мой_зеркальце <скажи Т>
бестолочь пузырь(Т* полк, целина поголовье)
{
	для(мерило локоть = 0; локоть < поголовье; ++локоть)
		для(мерило аршин = локоть; аршин < поголовье; ++аршин)
			коли(полк[локоть] > полк[аршин])
				меняло(полк[локоть], полк[аршин]);
}

царь_батюшка_главный()
{
	#ifdef _WIN32
    вперёд_славяне;
    #endif
	молвить << "Начало работы" << прыг_скок;
	целина размер = 100000;
	// царь выделил место для заселения
	целина* деревня = новь целина[размер]; 
	// деревня заселилась
	для(целина пуд = размер - 1; пуд >= 0; --пуд)
 		деревня[пуд] = пуд + 1;
	// в деревне установлен порядок
	пузырь(деревня, размер);
	молвить << "Русов не опередите, змеи окоянные";
	// холопы выселены за содействие рептилиям
	казнь деревня;
	воздать ноль;
}