class Member 
{
private:
    string name;
    string surname;
    Date birthday;
public:

    Member()
    {
        name = "";
        surname = "";
    }
    Member(string name, string surname, Date birthday)
    {
        this->name = name;
        this->surname = surname;
        this->birthday = birthday;
    }

    string getName() 
    {
        return this->name;
    }
    string getSurname() 
    {
        return this->surname;
    }

    void setName(string name) 
    {
        this->name = name;
    }
    void setSurname(string surname) 
    {
        this->surname = surname;
    }

    Date getBirthday()
    {
        return this->birthday; 
    }

    void setBirthday(Date &birthday)
    {
        this->birthday = birthday;
    }

    virtual ~Member(){}

};