#pragma once

namespace kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Matriks
	/// </summary>
	public ref class Matriks : public System::Windows::Forms::Form
	{
	public:
		// Измененный конструктор, который принимает родительскую форму
		Matriks(System::Windows::Forms::Form^ parent)
		{
			InitializeComponent();
			parentForm = parent; // Сохраняем ссылку на родительскую форму
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Matriks()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Form^ parentForm; // Ссылка на родительскую форму (MyForm)

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Matriks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 429);
			this->Name = L"Matriks";
			this->Text = L"Matriks";
			// Добавляем обработчик события закрытия формы
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Matriks::Matriks_FormClosed);
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		// Событие, которое срабатывает после закрытия формы
		System::Void Matriks_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
			parentForm->Show(); // Показываем родительскую форму (главное меню)
		}
	};
}