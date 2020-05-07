void Account::error(const string &msg)const
{
    throw AccountException(this,msg);
}
