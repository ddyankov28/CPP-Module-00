/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:30:39 by ddyankov          #+#    #+#             */
/*   Updated: 2023/10/18 10:33:27 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <ctime>
# include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// definition (initialization) is needed for static member variables (which are
// shared between the different instances of the class) in 
// exactly one source file to avoid undefined reference linker err

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount = _totalAmount + _amount;
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";closed" << std::endl;
}

void Account::_displayTimestamp()
{
    time_t      rawtime;
    struct tm*  timeinfo;
    char        buffer[20];

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, 19, "[%Y%m%d_%H%M%S]", timeinfo);
    //strftime(buffer, 19, "[19920104_091532]", timeinfo);
    std::cout << buffer;
}

int  Account::getNbAccounts()
{ return _nbAccounts; }

int Account::getTotalAmount()
{ return _totalAmount; }

int Account::getNbDeposits()
{ return _totalNbDeposits; }

int Account::getNbWithdrawals()
{ return _totalNbWithdrawals; }

void    Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals << std::endl; 
}

void    Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts(); 
    std::cout << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl; 
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:" << deposit;
    _amount += deposit;
    std::cout << ";amount:" << _amount;
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";withdrawal:";
    if (_amount - withdrawal > 0)
    {
        std::cout << withdrawal;
        _amount -= withdrawal;
        std::cout << ";amount:" << _amount;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
    std::cout << "refused" << std::endl;
    return false;
}
