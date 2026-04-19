/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memillet <memillet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 17:36:57 by memillet          #+#    #+#             */
/*   Updated: 2026/04/19 20:20:28 by memillet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"

# include <iostream>
# include <ctime>
# include <iomanip>

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts += 1;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
    _nbAccounts -= 1;
    _totalAmount -= _amount;
}

void    Account::_displayTimestamp()
{
    time_t  now = time(NULL);
    struct tm *t = localtime(&now);

    std::cout << "[";
    std::cout << t->tm_year + 1900;
    std::cout  << std::setfill('0') << std::setw(2) << t->tm_mon + 1;
    std::cout  << std::setfill('0') << std::setw(2) << t->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << t->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << t->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << t->tm_sec;
    std::cout << "]";
}

void    Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    int p_amount = _amount;
    _totalNbDeposits += 1;
    _nbDeposits += 1;
    _amount += deposit;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount" << p_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits" << _nbDeposits << std::endl;
}

int    Account::checkAmount() const
{
    return (_amount);
}