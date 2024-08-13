#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	(void) initial_deposit;
	
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<
	";amount:" << _amount << ";created" << std::endl;
	_nbAccounts += 1;
}

Account::~Account () {}

void Account::displayAccountsInfos( void )
{
	
}

void Account::_displayTimestamp( void )
{
	time_t timestamp = std::time(NULL);
	struct tm time = *std::localtime(&timestamp);

	std::cout << "[" << time.tm_year + 1900 <<
	std::setfill('0') << std::setw(2) << time.tm_mon + 1 <<
	std::setfill('0') << std::setw(2) << time.tm_mday << "_" <<
	std::setfill('0') << std::setw(2) << time.tm_hour <<
	std::setfill('0') << std::setw(2) << time.tm_min <<
	std::setfill('0') << std::setw(2) << time.tm_sec << "] ";
}

void	Account::makeDeposit( int deposit )
{
	(void) deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void) withdrawal;
	return true ;
}

int		Account::checkAmount( void ) const
{
	return 0;
}
void	Account::displayStatus( void ) const
{

}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}