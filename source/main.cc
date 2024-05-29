#include <string>
#include <ctime>
#include <chrono>
#include <vector>

/*
Requirements
Insert Card : 카드를 읽는다.
PIN number : 입력을 받고, bank API에 요청하여 맞는지 확인한다.
Select Account : 계좌 선택
계좌 번호, 계좌명, 잔액
See Balance/Deposit/Withdraw : 잔액/입금/출금 확인
거래시간, 거래금액, 거래 후 잔액, 거래대상, 
*/

namespace ATMController {
    class Controller {
        enum Step {
            INSERT_CARD = 1,
            PIN_NUMBER,
            SELECT_ACCOUNT,
            SEE_BALANCE_DEPOSIT_WITHDRAW
        };
        int step;
        std::string status;
        Card card;

        public:
        Controller();
        void
    };

    class MockBankAPI {
        public:
        bool ChecksPIN();
    };

    class MockHardware {
        public:
        std::string 
    };

    class Card {
        std::string owner;
        int number;
        bool is_available;
        bool is_accessible;
        Account* acount;
        int num_acounts;
        int capacity;

        public:
        Card(std::string owner, int number);
        bool CheckingAvailable();
        bool CheckingAccessible();
        void make_account(Account a);
        Account operator[](int index);
        int size();

        ~Card();
    };

    class Account {
        int index;
        std::string name;
        int balance;
        Transaction* transaction;

        public:
        Account(int index, std::string name);
        
    };

    class Transaction {
        std::string target;
        int amount;
        std::chrono::system_clock::time_point day;
    };

Controller::Controller() 
    : step(INSERT_CARD), status("waiting for card input") {};



Card::Card(std::string owner, int number)
    : owner(owner), number(number), is_available(false), is_accessible(false) {}

bool Card::CheckingAvailable() {
    is_available = true;
}
}