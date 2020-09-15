#include "read_and_write.cpp"

int main()
{
    string fileName = "info.txt";
    FileHandler handler(fileName);
    string data = "New Data added";
    cout << "Appending - " << handler.appendFile(data) << endl;
    cout << "Updated file content --- \n\n"
         << handler.readFile();
}