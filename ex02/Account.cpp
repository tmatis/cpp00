/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmatis <tmatis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 12:02:20 by tmatis            #+#    #+#             */
/*   Updated: 2021/07/15 13:30:20 by tmatis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

/* ************************************************************************** */
/*                                     DATA INIT                              */
/* ************************************************************************** */

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/* ************************************************************************** */
/*                           CONSTRUCTOR - DESTRUCTOR                         */
/* ************************************************************************** */

Account::Account(int initial_deposit) :
									_accountIndex(_nbAccounts),
									_amount(initial_deposit),
									_nbDeposits(0),
									_nbWithdrawals(0)
{
	Account::_displayTimestamp();
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	std::cout
	<< "index:" << this->_accountIndex << ";"
	<< "amount:" << this->_amount << ";"
	<< "created"
	<< std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	this->_nbAccounts--;
	this->_totalAmount -= _amount;
	std::cout
	<< "index:" << this->_accountIndex << ";"
	<< "amount:" << this->_amount << ";"
	<< "closed"
	<< std::endl;
}

/* ************************************************************************** */
/*                                OUTTER FONCTIONS                            */
/* ************************************************************************** */

void	Account::_displayTimestamp(void)
{
	time_t	now = std::time(0);
	tm 		*gmtm = std::gmtime(&now);

	std::cout << "[" << gmtm->tm_year + 1900
	<< std::setw(2) << std::right << std::setfill('0')
	<< gmtm->tm_mon
	<< std::setw(2) << std::right << std::setfill('0')
	<< gmtm->tm_mday
	<< "_"
	<< std::setw(2) << std::right << std::setfill('0')
	<< gmtm->tm_hour
	<< std::setw(2) << std::right << std::setfill('0')
	<< gmtm->tm_min
	<< std::setw(2) << std::right << std::setfill('0')
	<< gmtm->tm_sec << "] ";
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout
	<< "accounts:" << getNbAccounts() << ";"
	<< "total:" << getTotalAmount() << ";"
	<< "deposits:" << getNbDeposits() << ";"
	<< "withdrawals:" << getNbWithdrawals()
	<< std::endl;
}

/* ************************************************************************** */
/*                                MEMBER FONCTIONS                            */
/* ************************************************************************** */

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex << ";"
	<< "amount:" << checkAmount() << ";"
	<< "deposits:" << this->_nbDeposits << ";"
	<< "withdrawals:" << this->_nbWithdrawals
	<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	const int	p_amount = this->_amount;

	Account::_displayTimestamp();
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout
	<< "index:" << this->_accountIndex << ";"
	<< "p_amount:" << p_amount << ";"
	<< "deposit:" << deposit << ";"
	<< "amount:" << checkAmount() << ";"
	<< "nb_deposits:" << this->_nbDeposits
	<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	const int	p_amount = this->_amount;

	Account::_displayTimestamp();
	if (p_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "p_amount:" << p_amount << ";"
		<< "withdrawal:" << withdrawal << ";"
		<< "amount:" << checkAmount() << ";"
		<< "nb_withdrawals:" << this->_nbDeposits
		<< std::endl;
		return (true);
	}
	else
	{
		std::cout
		<< "index:" << this->_accountIndex << ";"
		<< "p_amount:" << p_amount << ";"
		<< "withdrawal:" << "refused"
		<< std::endl;
		return (false);
	}
}
