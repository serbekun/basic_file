#pragma once

#include <iostream>
#include <fstream>
#include <string>

namespace stdx {

class basic_file {

private:
    std::string filename;

public:
    
    basic_file() {
        filename = "file";
    }

    basic_file(const std::string &get_filename) {
        filename = get_filename;
    }

    ~basic_file() = default;

    void set(const std::string get_filename) {
        filename = get_filename;
    }

    void rewrite(const std::string &data) {
        std::ofstream file(filename); 
        file << data;
        file.close();
    }

    void write(const std::string &data) {
        std::ofstream file(filename, std::ios::app);

        if (!file.is_open()) {
            std::cerr << "Error open file -" << filename << std::endl;
        } else {
            file << data;
            file.close();
        }
    }

    void read() {
        std::ifstream file(filename);
        std::string line;

        if (!file.is_open()) {
            std::cerr << "Error open file - " << filename << std::endl;
        } else {
            while (std::getline(file, line)) {
                std::cout << line << std::endl;
            }
            file.close();
        }
    }

    std::string get_read_line() {
        std::ifstream file(filename);
        std::string line;
        if (!file.is_open()) {
            std::cerr << "Error open file - " << filename << std::endl;
            return "";
        } else {
            std::getline(file, line);
            file.close();
            return line;
        }
    }

    std::string get_file_name() {
        return filename;
    }

    void clear_file() {
        std::ofstream file(filename);
        
        if (!file.is_open()) {
            std::cerr << "Error open file - " << filename << std::endl;
        } else {
            file.close();
        }
    }
};

} // namespace stdx
