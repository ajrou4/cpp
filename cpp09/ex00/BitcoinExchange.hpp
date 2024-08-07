#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdexcept>

class BitcoinExchange {
public:
    BitcoinExchange();
    BitcoinExchange(std::string load);
    BitcoinExchange(const BitcoinExchange &obj);
    BitcoinExchange &operator=(const BitcoinExchange &obj);
    ~BitcoinExchange();

    void loadDatabase(const std::string &data);
    double getExchangeRate(const std::string &date) const;
    void processLine(const std::string &line) const;
    void evaluate(const std::string &inputFile) const;
    void addExchangeRate(const std::string &date, double rate);
    void removeExchangeRate(const std::string &date);
    void clearExchangeRates();
    bool isValidDate(const std::string &date) const;

private:
    std::map<std::string, double> exchangeRates;
};

#endif 
