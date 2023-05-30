#include <locale>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
void SolveEquation(String^ selectedFunction, double A, double B, double C, String^% solution)
{
    if (selectedFunction == "0*x = 0")
    {
        solution = "Ответом является любое значение Х";
        return;
    }
    else if (selectedFunction == "A * x^2 = 0")
    {
        if (A == 0)
        {
            solution = "Ответом является любое значение Х";
            return;
        }
        else
        {
            double x = 0;
            solution = "x = " + x.ToString();
            return;
        }
    }
    else if (selectedFunction == "C = 0")
    {
        if (C == 0)
        {
            solution = "Корней нет";
            return;
        }
        else
        {
            solution = "Корней нет";
            return;
        }
    }
    else if (selectedFunction == "A * x^2 + C = 0")
    {
        if (A == 0 && C == 0)
        {
            solution = "Ответом является любое значение Х";
            return;
        }
        else if (A == 0)
        {
            solution = "Нет решений";
            return;
        }
        else if ((A > 0 && C < 0) || (A < 0 && C > 0))
        {
            double x = Math::Sqrt(-C / A);
            solution = "x = " + x.ToString() + " или x = " + (-x).ToString();
            return;
        }
        else
        {
            solution = "Нет решений";
            return;
        }

    }
    else if (selectedFunction == "B * x + C = 0")
    {
        if (B == 0 && C == 0)
        {
            solution = "Ответом является любое значение Х";
            return;
        }
        else if (B == 0)
        {
            solution = "Нет решений";
            return;
        }
        else
        {
            double x = -C / B;
            solution = "x = " + x.ToString();
            return;
        }
    }
    else if (selectedFunction == "A * x^2 + B * x + C = 0")
    {
        double D = Math::Pow(B, 2) - 4 * A * C;

        if (D > 0)
        {
            double x1 = (-B + Math::Sqrt(D)) / (2 * A);
            double x2 = (-B - Math::Sqrt(D)) / (2 * A);
            solution = "x1 = " + x1.ToString() + ", x2 = " + x2.ToString();
        }
        else if (A == 0 && B == 0 && C == 0)
        {
            solution = "Ответом является любое значение X";
        }
        else if (D == 0)
        {
            double x = -B / (2 * A);
            solution = "x = " + x.ToString();
        }
        else
        {
            solution = "Нет реальных корней";
        }

        return;
    }
    else if (selectedFunction == "B * x = 0")
    {
        if (B == 0)
        {
            solution = "Ответом является любое значение Х";
            return;
        }

        else
        {
            double x = 0;
            solution = "x = " + x.ToString();
            return;
        }
    }
    else if (selectedFunction == "A * x^2 + B * x = 0")
    {
        double D = Math::Pow(B, 2) - 4 * A * 0;

        if (D > 0)
        {
            double x1 = (-B + Math::Sqrt(D)) / (2 * A);
            double x2 = (-B - Math::Sqrt(D)) / (2 * A);
            solution = "x1 = " + x1.ToString() + ", x2 = " + x2.ToString();
        }
        else if (A == 0 && B == 0)
        {
            solution = "Ответом является любое значение X";
        }

        else if (D == 0)
        {
            double x = -B / (2 * A);
            solution = "x = " + x.ToString();
        }
        else
        {
            solution = "Нет реальных корней";
        }

        return;
    }
}


























[STAThread]
int main()
{
    setlocale(LC_ALL, "ru_RU.utf8");
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    MainForm form;

    form.FormBorderStyle = FormBorderStyle::None;

    Application::Run(% form);

    return 0;
}
