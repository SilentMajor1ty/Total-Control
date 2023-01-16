#include "MyForm.h"
#include "Users.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[System::Runtime::InteropServices::DllImport("user32.dll")]
bool SetProcessDPIAware();

[STAThreadAttribute]
void main() {
    if (Environment::OSVersion->Version->Major >= 6)
        SetProcessDPIAware();

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(true);

    Totalcontrol::MyForm form;
    Application::Run(% form);
}

Users users;

Totalcontrol::MyForm::MyForm(void)
{
    InitializeComponent();
    LoadPlaces();

    dataGridViewUsers->TopLeftHeaderCell->Value = "№";
    dataGridViewUsers1->TopLeftHeaderCell->Value = "№";

    groupBoxUsers->Visible = true;
    groupBoxUsers->Location = Point(12, 31);
    groupBoxClusters->Visible = false;
}

System::Void Totalcontrol::MyForm::вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Продовжити вихід?", "Увага!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
        Application::Exit();
    }
}

void Totalcontrol::MyForm::LoadPlaces()
{
    ifstream load("..\\Resources\\PLACES.txt");

    if (!load) {
        MessageBox::Show("Помилка завантаження даних місць!","Увага!");
        return;
    }

    comboBoxIDPlaces->Items->Clear();
    comboBoxIDPlaces1->Items->Clear();

    string str;
    while (!load.eof())
    {
        load.ignore();
        getline(load, str);
        comboBoxIDPlaces->Items->Add(ConvertToString(str));
        comboBoxIDPlaces1->Items->Add(ConvertToString(str));
    }

    load.close();
}

System::Void Totalcontrol::MyForm::користувачіToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    groupBoxUsers->Visible = true;
    groupBoxUsers->Location = Point(12,31); 
    groupBoxClusters->Visible = false;
}

System::Void Totalcontrol::MyForm::завантажитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!users.Load()) {
        MessageBox::Show("Помилка завантаження даних!","Увага!");
    }
    else {
        PrintUsers();
    }
}

System::Void Totalcontrol::MyForm::зберегтиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    InputUsers();
    if (!users.Save()) {
        MessageBox::Show("Дані не збережені!", "Увага!");
    }
    else {
        MessageBox::Show("Дані збережені!", "Увага!");
    }
}


System::Void Totalcontrol::MyForm::buttonAddUser_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBoxDateDay->Text == "" || textBoxDateMonth->Text == "" || textBoxDateYear->Text == "" ||
        textBoxEndTimeH->Text == "" || textBoxEndTimeMin->Text == "" ||
        textBoxStartTimeH->Text == "" || textBoxStartTimeMin->Text == "" ||
        comboBoxIDPlaces->SelectedIndex == -1) {
        MessageBox::Show("Укажіть усі дані!","Увага!");
        return;
    }

    if (textBoxDateDay->Text->Length != 2 || textBoxDateMonth->Text->Length != 2 || textBoxDateYear->Text->Length != 4 ||
        textBoxEndTimeH->Text->Length != 2 || textBoxEndTimeMin->Text->Length != 2 ||
        textBoxStartTimeH->Text->Length != 2 || textBoxStartTimeMin->Text->Length != 2 ) {
        MessageBox::Show("Неправильний формат запису!", "Увага!");
        return;
    }
    int dateday = Convert::ToInt32(textBoxDateDay->Text);
    int datemonth = Convert::ToInt32(textBoxDateMonth->Text);
    int endtimeH = Convert::ToInt32(textBoxEndTimeH->Text);
    int endtimeM = Convert::ToInt32(textBoxEndTimeMin->Text);
    int starttimeH = Convert::ToInt32(textBoxStartTimeH->Text);
    int starttimeM = Convert::ToInt32(textBoxStartTimeMin->Text);

    if (dateday > 31 || dateday == 0 || datemonth > 12 || datemonth == 0
        || endtimeH >= 24 || endtimeM > 59 || starttimeH > 24 || starttimeM > 59)
    {
        MessageBox::Show("Введені недостовірні дані!", "Увага!");
        return;
    }
    if (textBoxDateDay->Text->Contains("-") || textBoxDateMonth->Text->Contains("-") || textBoxDateYear->Text->Contains("-") ||
        textBoxEndTimeH->Text->Contains("-") || textBoxEndTimeMin->Text->Contains("-") || textBoxStartTimeH->Text->Contains("-") ||
        textBoxStartTimeMin->Text->Contains("-")) 
    {
        MessageBox::Show("Введений лишній символ!!", "Увага!");
        return;
    };

    User buf;
    buf.id = Convert::ToInt32(numericUpDownIDUser->Value);

    if (users.IDBusy(buf.id)) {
        MessageBox::Show("Такий код користувача вже існує!", "Увага!");
        return;
    }

    buf.date.day[0] = textBoxDateDay->Text[0];
    buf.date.day[1] = textBoxDateDay->Text[1];
    buf.date.month[0] = Convert::ToChar(textBoxDateMonth->Text[0]);
    buf.date.month[1] = Convert::ToChar(textBoxDateMonth->Text[1]);
    buf.date.year[0] = Convert::ToChar(textBoxDateYear->Text[0]);
    buf.date.year[1] = Convert::ToChar(textBoxDateYear->Text[1]);
    buf.date.year[2] = Convert::ToChar(textBoxDateYear->Text[2]);
    buf.date.year[3] = Convert::ToChar(textBoxDateYear->Text[3]);

    buf.timeStart.hour[0] = Convert::ToChar(textBoxStartTimeH->Text[0]);
    buf.timeStart.hour[1] = Convert::ToChar(textBoxStartTimeH->Text[1]);
    buf.timeStart.minutes[0] = Convert::ToChar(textBoxStartTimeMin->Text[0]);
    buf.timeStart.minutes[1] = Convert::ToChar(textBoxStartTimeMin->Text[1]);

    buf.timeEnd.hour[0] = Convert::ToChar(textBoxEndTimeH->Text[0]);
    buf.timeEnd.hour[1] = Convert::ToChar(textBoxEndTimeH->Text[1]);
    buf.timeEnd.minutes[0] = Convert::ToChar(textBoxEndTimeMin->Text[0]);
    buf.timeEnd.minutes[1] = Convert::ToChar(textBoxEndTimeMin->Text[1]);

    buf.idPlace = comboBoxIDPlaces->SelectedIndex + 1;

    users.Add(buf);
    PrintUsers();
}

System::Void Totalcontrol::MyForm::buttonDeleteUser_Click(System::Object^ sender, System::EventArgs^ e)
{
    int id = Convert::ToInt32(numericUpDownIDUserForDel->Value);

    if (!users.IDBusy(id)) {
        MessageBox::Show("Код користувача не знайдений!","Увага!");
        return;
    }

    if (users.Del(id)) {
        PrintUsers();
    }
    else {
        MessageBox::Show("Помилка видалення даних!", "Увага!");
    }
}

void Totalcontrol::MyForm::PrintUsers()
{
    dataGridViewUsers->Rows->Clear();
    for (int i = 0; i < users.Count(); i++) {
        string s = "";
        s += users.Get(i).date.day[0];
        s += users.Get(i).date.day[1];

        string s1 = "";
        s1 += users.Get(i).date.month[0];
        s1 += users.Get(i).date.month[1];

        
        string s2 = "";
        s2 += users.Get(i).date.year[0];
        s2 += users.Get(i).date.year[1];
        s2 += users.Get(i).date.year[2];
        s2 += users.Get(i).date.year[3];

        string s3 = "";
        s3 += users.Get(i).timeStart.hour[0];
        s3 += users.Get(i).timeStart.hour[1];

        string s4 = "";
        s4 += users.Get(i).timeStart.minutes[0];
        s4 += users.Get(i).timeStart.minutes[1];

        string s5 = "";
        s5 += users.Get(i).timeEnd.hour[0];
        s5 += users.Get(i).timeEnd.hour[1];
        
        string s6 = "";
        s6 += users.Get(i).timeEnd.minutes[0];
        s6 += users.Get(i).timeEnd.minutes[1];

        dataGridViewUsers->Rows->Add(users.Get(i).id.ToString(),
            Convert::ToString(ConvertToString(s)) + "." +
            Convert::ToString(ConvertToString(s1)) + "." +
            Convert::ToString(ConvertToString(s2)),
            Convert::ToString(ConvertToString(s3)) + ":" +
            Convert::ToString(ConvertToString(s4)),
            Convert::ToString(ConvertToString(s5)) + ":" +
            Convert::ToString(ConvertToString(s6)),
            comboBoxIDPlaces->Items[users.Get(i).idPlace - 1]->ToString());

        dataGridViewUsers->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
    }
}

void Totalcontrol::MyForm::InputUsers()
{
    users.Clear();
    User buf;

    for (int i = 0; i < dataGridViewUsers->Rows->Count; i++) {
        buf.id = Convert::ToInt32(dataGridViewUsers->Rows[i]->Cells[0]->Value->ToString());

        buf.date.day[0] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[1]->Value->ToString()[0]);
        buf.date.day[1] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[1]->Value->ToString()[1]);

        buf.date.month[0] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[1]->Value->ToString()[3]);
        buf.date.month[1] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[1]->Value->ToString()[4]);

        buf.date.year[0] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[1]->Value->ToString()[6]);
        buf.date.year[1] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[1]->Value->ToString()[7]);
        buf.date.year[2] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[1]->Value->ToString()[8]);
        buf.date.year[3] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[1]->Value->ToString()[9]);

        buf.timeStart.hour[0] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[2]->Value->ToString()[0]);
        buf.timeStart.hour[1] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[2]->Value->ToString()[1]);

        buf.timeStart.minutes[0] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[2]->Value->ToString()[3]);
        buf.timeStart.minutes[1] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[2]->Value->ToString()[4]);

        buf.timeEnd.hour[0] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[3]->Value->ToString()[0]);
        buf.timeEnd.hour[1] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[3]->Value->ToString()[1]);

        buf.timeEnd.minutes[0] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[3]->Value->ToString()[3]);
        buf.timeEnd.minutes[1] = Convert::ToChar(dataGridViewUsers->Rows[i]->Cells[3]->Value->ToString()[4]);

        buf.idPlace = IDPlace(dataGridViewUsers->Rows[i]->Cells[4]->Value->ToString());

        users.Add(buf);
    }
}

int Totalcontrol::MyForm::IDPlace(String^ s)
{
    for (int i = 0; i < comboBoxIDPlaces->Items->Count; i++) {
        if (comboBoxIDPlaces->Items[i] == s) {
            return i + 1;
        }
    }
    return -1;
}

System::Void Totalcontrol::MyForm::скупченняToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    groupBoxClusters->Visible = true;
    groupBoxClusters->Location = Point(12, 31);
    groupBoxUsers->Visible = false;
}

System::Void Totalcontrol::MyForm::buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (users.IsEmpty()) {
        MessageBox::Show("Дані пусті!","Увага!");
        return;
    }

    if (textBoxDateDay1->Text == "" || textBoxDateMonth1->Text == "" || textBoxDateYaer1->Text == "" ||
        textBoxEndTimeH1->Text == "" || textBoxStartTimeH1->Text == "" ||
        textBoxMax->Text == "" || textBoxMin->Text == "" ||
        comboBoxIDPlaces1->SelectedIndex == -1) {
        MessageBox::Show("Укажіть усі дані!", "Увага!");
        return;
    }

    if (textBoxDateDay1->Text->Length != 2 || textBoxDateMonth1->Text->Length != 2 || textBoxDateYaer1->Text->Length != 4 ||
        textBoxEndTimeH1->Text->Length != 2 || textBoxStartTimeH1->Text->Length != 2) {
        MessageBox::Show("Неправильний формат запису!", "Увага!");
        return;
    }

    int dateday1 = Convert::ToInt32(textBoxDateDay1->Text);
    int datemonth1 = Convert::ToInt32(textBoxDateMonth1->Text);
    

    if (dateday1 > 31 || dateday1 == 0 || datemonth1 > 12 || datemonth1 == 0)
    {
        MessageBox::Show("Введені недостовірні дані!", "Увага!");
        return;
    }

    int idPlace = comboBoxIDPlaces1->SelectedIndex + 1;
    int max = Convert::ToInt32(textBoxMax->Text);
    int min = Convert::ToInt32(textBoxMin->Text);
    int count = 0;

    dataGridViewUsers1->Rows->Clear();
    int q = 0;
    for (int i = 0; i < users.Count(); i++) {        
            string s = "";
            s += users.Get(i).date.day[0];
            s += users.Get(i).date.day[1];

            string s1 = "";
            s1 += users.Get(i).date.month[0];
            s1 += users.Get(i).date.month[1];

            string s2 = "";
            s2 += users.Get(i).date.year[0];
            s2 += users.Get(i).date.year[1];
            s2 += users.Get(i).date.year[2];
            s2 += users.Get(i).date.year[3];

            string s3 = "";
            s3 += users.Get(i).timeStart.hour[0];
            s3 += users.Get(i).timeStart.hour[1];

            string s4 = "";
            s4 += users.Get(i).timeStart.minutes[0];
            s4 += users.Get(i).timeStart.minutes[1];

            string s5 = "";
            s5 += users.Get(i).timeEnd.hour[0];
            s5 += users.Get(i).timeEnd.hour[1];

            string s6 = "";
            s6 += users.Get(i).timeEnd.minutes[0];
            s6 += users.Get(i).timeEnd.minutes[1];

           if (Convert::ToString(ConvertToString(s)) == textBoxDateDay1->Text && Convert::ToString(ConvertToString(s1)) == textBoxDateMonth1->Text && Convert::ToString(ConvertToString(s2)) == textBoxDateYaer1->Text &&
               String::Compare(Convert::ToString(ConvertToString(s3)), textBoxEndTimeH1->Text) < 0 &&
               String::Compare(Convert::ToString(ConvertToString(s5)), textBoxStartTimeH1->Text) > 0 &&
               users.Get(i).idPlace == idPlace) {
                count++;

                dataGridViewUsers1->Rows->Add(users.Get(i).id.ToString(),
                    Convert::ToString(ConvertToString(s)) + "." +
                    Convert::ToString(ConvertToString(s1)) + "." +
                    Convert::ToString(ConvertToString(s2)),
                    Convert::ToString(ConvertToString(s3)) + ":" +
                    Convert::ToString(ConvertToString(s4)),
                    Convert::ToString(ConvertToString(s5)) + ":" +
                    Convert::ToString(ConvertToString(s6)),
                    comboBoxIDPlaces->Items[users.Get(i).idPlace - 1]->ToString());

                dataGridViewUsers1->Rows[q++]->HeaderCell->Value = Convert::ToString(i + 1);
        }        
    }
    
    textBox1->Text = count.ToString();

    if (count <= min || count >= max) {
        dataGridViewUsers1->Rows->Clear();
        MessageBox::Show("Не було набрано потрібної кількості людей!","Увага!");
    }
}
