#pragma once

// Ётот заголовочный файл содержит класс FunctionCalculator,
// который инкапсулирует логику вычислени€ значений функции.
// Ёто помогает отделить математические расчеты от кода пользовательского интерфейса.

namespace kursach {

    using namespace System;
    using namespace System::Collections::Generic;

    public ref class FunctionCalculator sealed
    {
    public:
        // —татический метод дл€ вычислени€ точек функции в заданном диапазоне.
        // ѕринимает начальное значение (xn), конечное значение (xk) и шаг (xh).
        // ¬озвращает список кортежей (Tuple), где каждый кортеж содержит пару (x, y).
        static List<Tuple<double, double>^>^ ComputePoints(double xn, double xk, double xh)
        {
            List<Tuple<double, double>^>^ points = gcnew List<Tuple<double, double>^>();
            double eps = 1e-9; // Ќебольшое значение дл€ корректного сравнени€ чисел с плавающей зап€той

            // ѕровер€ем направление итерировани€ (шаг может быть отрицательным)
            if (xh > 0) {
                for (double x = xn; x <= xk + eps; x += xh) {
                    points->Add(gcnew Tuple<double, double>(x, CalculateY(x)));
                }
            }
            else if (xh < 0) {
                for (double x = xn; x >= xk - eps; x += xh) {
                    points->Add(gcnew Tuple<double, double>(x, CalculateY(x)));
                }
            }
            return points;
        }

    private:
        // ¬спомогательный метод дл€ вычислени€ значени€ Y дл€ заданного X
        // согласно функции из технического задани€.
        static double CalculateY(double x) {
            double y = Double::NaN; // ¬озвращаем "не число", если y не может быть вычислен

            if (x <= 0) {
                // y = 3x^2 * ctg(x+1)
                double cot_arg = x + 1;
                // ѕровер€ем, чтобы аргумент тангенса не был близок к k*PI, где ctg не определен
                if (Math::Abs(Math::Sin(cot_arg)) > 1e-12) {
                    y = 3 * x * x * (1.0 / Math::Tan(cot_arg));
                }
            }
            else if (x <= 5) {
                // y = sqrt(4x - sin(x))
                double under_sqrt = 4 * x - Math::Sin(x);
                if (under_sqrt >= 0) {
                    y = Math::Sqrt(under_sqrt);
                }
            }
            else { // x > 5
                // y = 1 / sqrt(4x^2 + 2)
                // «начение под корнем всегда положительное
                y = 1.0 / Math::Sqrt(4 * x * x + 2);
            }
            return y;
        }
    };
}
