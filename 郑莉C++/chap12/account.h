//account.h
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include "date.h"
#include "accumulator.h"
#include <string>
#include <map>
#include <istream>
#include <stdexcept>

class AccountException:public std::runtime_error
{
private:
    const Account* account;
public:
    AccountException(const Account* account, const std::string &msg)
    :runtime_error(msg),account(account){}
    const Account* getAccount()const
    {
        return account;
    }
};

#endif // __ACCOUNT_H__
