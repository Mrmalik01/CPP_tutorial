#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class FileHandler
{
private:
    string filePath;

public:
    FileHandler(string filePath = "")
    {
        this->filePath = filePath;
    }

    string getPath()
    {
        return this->filePath;
    }

    string readFile()
    {
        if (this->filePath != "")
        {
            cout << "Reading the file: " << this->filePath << endl;
            ifstream file(this->filePath);
            string content = "";
            string line = "";
            while (getline(file, line))
            {
                content.append(line + "\n");
            }
            file.close();
            cout << "Reading the file - Finished " << endl;
            return content;
        }
        return "File Not Found";
    }

    bool writeFile(string message)
    {
        if (this->filePath != "")
        {
            cout << "Writing to the file: " << this->filePath << endl;
            ofstream file(this->filePath);
            file << message;
            file.close();
            cout << "Writing to the file - Finished " << endl;
            return true;
        }
        return false;
    }

    bool appendFile(string message)
    {
        string content = this->readFile();
        content.append(message);
        return this->writeFile(content);
    }
};