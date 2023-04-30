#include <iostream>
#include <string>
#include <map>
#include <vector>

struct Applicant {
    int school_number;
    int year;
    std::string surname;
};

int main() {
    std::map<int, int> year_to_school_number;
    std::vector<Applicant> applicants = {
        {1, 2021, "Ivanov"},
        {2, 2020, "Petrov"},
        {1, 2021, "Sidorov"},
        {3, 2021, "Smirnov"},
        {2, 2020, "Kuznetsov"}
    };

    
    for (const auto& applicant : applicants) {
        if (applicant.year > 0) { 
            if (year_to_school_number.find(applicant.year) == year_to_school_number.end()) {
                year_to_school_number[applicant.year] = applicant.school_number;
            }
            else {
                year_to_school_number[applicant.year] = std::max(year_to_school_number[applicant.year], applicant.school_number);
            }
        }
    }

    
    for (const auto& year_school_pair : year_to_school_number) {
        std::cout << "Year: " << year_school_pair.first << ", max school number: " << year_school_pair.second << std::endl;
    }

    return 0;
}