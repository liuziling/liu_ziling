#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
#include <iostream>
class Package
{
    public:
        Package(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double=0.0,double=0.0);

        void setSender(const std::string &);
        std::string getSender() const;

        void setAddressee(const std::string &);
        std::string getAddressee() const;

        void setAddress(const std::string &);
        std::string getAddress() const;

        void setCity(const std::string &);
        std::string getCity() const;

        void setState(const std::string &);
        std::string getState() const;

        void setCode(const std::string &);
        std::string getCode() const;

        void setStorage(double);
        double getStorage() const;

        void setCost(double);
        double getCost() const;

        double calculateCost() const;

    protected:

    private:
        std::string sender;
        std::string addressee;
        std::string address;
        std::string city;
        std::string state;
        std::string code;
        double storage;
        double cost;
};

#endif // PACKAGE_H
