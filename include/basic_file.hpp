#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

namespace stdx {

class basic_file {

private:
    string filename;

public:
    
    basic_file() {
        filename = "file";
    }

    basic_file(const string &get_filename) {
        filename = get_filename;
    }

    ~basic_file() = default;

    void set(const string get_filename) {
        filename = get_filename;
    }

    void rewrite(const string &data) {
        ofstream file(filename); 
        file << data;
        file.close();
    }

    void write(const string &data) {
        ofstream file(filename, ios::app);

        if (!file.is_open()) {
            cerr << "Error open file -" << filename << endl;
        } else {
            file << data;
            file.close();
        }
    }

    void read() {
        ifstream file(filename);
        string line;

        if (!file.is_open()) {
            cerr << "Error open file - " << filename << endl;
        } else {
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        }
    }

    string get_read_line() {
        ifstream file(filename);
        string line;
        if (!file.is_open()) {
            cerr << "Error open file - " << filename << endl;
            return "";
        } else {
            getline(file, line);
            file.close();
            return line;
        }
    }

    string get_file_name() {
        return filename;
    }

    void clear_file() {
        ofstream file(filename);
        
        if (!file.is_open()) {
            cerr << "Error open file - " << filename << endl;
        } else {
            file.close();
        }
    }

    void rewrite_int(int data) {
        ofstream file(filename);

        if (!file.is_open()) {
            cerr << "Error open file - " << filename << endl;
        } else {
            file << data;
            file.close();
        }
    }

    void write_int(int data) {
        ofstream file(filename, ios::app);

        if (!file.is_open()) {
            cerr << "Error open file - " << filename << endl;
        } else {
            file << data;
            file.close();
        }
    }
};

} // namespace stdx
