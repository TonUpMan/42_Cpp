
#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

#include <string>

class   Contact{

    public:
        Contact(void);
        ~Contact(void);
        void            set_index(int index);
        void            set_first(std::string first);
        void            set_last(std::string last);
        void            set_nickname(std::string nick);
        void            set_number(std::string number);
        void            set_secret(std::string secret);
        int             get_index(void) const;
        std::string     get_first(void) const;
        std::string     get_last(void) const;
        std::string     get_nickname(void) const;
        std::string     get_number(void) const;
        std::string     get_secret(void) const;

    private:
        int             index;
        std::string     first_name;
        std::string     last_name;
        std::string     nickname;
        std::string     phone_number;
        std::string     darkest_secret;
};

#endif