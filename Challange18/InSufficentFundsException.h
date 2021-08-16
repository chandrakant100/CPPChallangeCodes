#ifndef __INSUFFICIENT_FUNDS_EXCEPTION_H__
#define __INSUFFICIENT_FUNDS_EXCEPTION_H__
#include <exception>
class InSufficentFundsException: public std::exception
{
public:
    InSufficentFundsException() noexcept  = default;
    ~InSufficentFundsException() = default;
    virtual const char* what() const noexcept{
        return "Balance is Insufficient";
    }
};

#endif //__INSUFFICIENT_FUNDS_EXCEPTION_H__
