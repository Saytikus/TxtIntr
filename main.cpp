#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
using namespace std;

int main(int argc, char* argv[]) {
    if(argc == 1) {
        string reference[9]{"\n\n\t\t\t\t\t\t\t\t\t\tДобро пожаловать!",
        "\t\t\tВас приветствует справочный материал по работе с мультипликативным калькулятором! Данный калькулятор поддерживает 2 функции: умножение и деление.",
        "\n\t\tДля использования функции умножения вызовите калькулятор с операцией '-o multiplication' и введите числовые значения (их количество не должно быть менее 2 и более 4).",
        "\tЗатем калькулятор перемножит введеные числа.",
        "\n\t\tДля использования функции деления вызовите калькулятор с операцией '-o division' и введите числовые значения (их количество не должно быть менее 2 и более 4).",
        "\tЗатем калькулятор разделит первое число на каждое последующее.",
        "\n\t\t\tЕсли Вам необходимо заново изучить справочный материал, снова вызовите калькулятор без передачи аргументов."};
        for(int j = 0; j < 9; j++) {
            cout << reference[j] <<  endl;
        }
        exit(0);
    }
    int argcMax = 7;
    int argcMin = 5;
    if(argc < argcMin || argc > argcMax) {
            cout << "Недопустимая операция или аргументы" << endl;
            exit(0);
    }
    int firstOperandNumber = 3;
    double result = 1.0;
    int opt;
    while((opt = getopt(argc, argv, "o:")) != -1) {
        int operationNumber = 0;
        for(int j = 0; j < int(strlen(optarg)); j++) {
            operationNumber += int(optarg[j]);
        }
        switch(operationNumber) {
            case 869:
            result = atoi(argv[firstOperandNumber]);
            for(int i = firstOperandNumber + 1; i < argc; i++)
                result /= atoi(argv[i]);
            break;
            case 1518:
            for(int i = firstOperandNumber; i < argc; i++)
                result *= atoi(argv[i]);
            break;
        }
    }
    cout << "Результат вычисления равен: " << result << endl;
    return 0;
}




//}
        /*string check = optarg;
        if(check == "multiplication" && argc <= argcMax && argc >=argcMin) {
            for(int i = firstOperandNumber; i < argc; i++)
                result *= atoi(argv[i]);
        }
        else if(check == "division" && argc <= argcMax && argc >=argcMin) {
            result = atoi(argv[firstOperandNumber]);
            for(int i = firstOperandNumber + 1; i < argc; i++)
                result /= atoi(argv[i]);
        }
        else {
            cerr << "Недопустимые аргументы" << endl;
            exit(0);
        }*/