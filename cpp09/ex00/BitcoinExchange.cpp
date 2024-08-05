#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string load) {
    loadDatabase(load);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj) {
    this->exchangeRates = obj.exchangeRates;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj) {
    if (this != &obj) {
        this->exchangeRates = obj.exchangeRates;
    }
    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadDatabase(const std::string &data) {
    std::ifstream file(data.c_str());
    if (!file) {
        throw std::runtime_error("Error: could not open data file.");
    }
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string date;
        double rate;
        if (std::getline(iss, date, ',') && (iss >> rate)) {
            exchangeRates[date] = rate;
        }
    }
}

double BitcoinExchange::getExchangeRate(const std::string &date) const {
    std::map<std::string, double>::const_iterator it;
    it = exchangeRates.lower_bound(date);
    if (it != exchangeRates.end() && it->first == date) {
        return it->second;
    } else if (it != exchangeRates.begin()) {
        --it;
        return it->second;
    }
    throw std::runtime_error("Error: no available exchange rate for the date.");
}

void BitcoinExchange::processLine(const std::string &line) const {
    std::istringstream iss(line);
    std::string date, valueStr;
    if (std::getline(iss, date, '|') && std::getline(iss, valueStr)) {
        date.erase(date.find_last_not_of(" \n\r\t") + 1);
        valueStr.erase(0, valueStr.find_first_not_of(" \n\r\t"));
        try {
            double value = std::stod(valueStr);
            if (value < 0 || value > 100000) {
                throw std::out_of_range("Error: value out of range.");
            }
            double rate = getExchangeRate(date);
            std::cout << date << " : " << value << " = " << value * rate << std::endl;
        } catch (const std::exception &e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    } 
    else {
        std::cerr << "Error: bad input :" << line << std::endl;
    }
}

void BitcoinExchange::evaluate(const std::string &inputFile) const {
    std::ifstream file(inputFile.c_str());
    if (!file) {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }
    std::string line;
    while (std::getline(file, line)) {
        processLine(line);
    }
}

void BitcoinExchange::addExchangeRate(const std::string &date, double rate) {
    exchangeRates[date] = rate;
}

void BitcoinExchange::removeExchangeRate(const std::string &date) {
    exchangeRates.erase(date);
}

void BitcoinExchange::clearExchangeRates() {
    exchangeRates.clear();
}
 