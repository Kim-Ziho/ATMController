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

atm 컨트롤러
카드 입력
핀 넘버 입력
계정 선택
잔액 입금 인출 확인

잔액은 정수
실재 은행 시스템에 통합되길 바람
코드 테스트 가능
하드웨어(카드 리더, 현금통) 구현x
banAPI는 PIN이 맞는지 알려줌

다른 분이 구현을 기반으로 인터페이스를 만들 수 있게
네트워크 구현x

리드미에 지침서 쓰기
클론, 빌드, 테스트런 방법
테스크 코드 작성
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
    int inputted_PIN;

    public:
    Controller();
    ~Controller();

    void GetCardInfo();
    void GetPINNumber();
    void CheckPINNumber();
    void SelectAccount();
    void SeeBalance();
    void SeeDeposit();
    void SeeWithdraw();
    void GoBack();
};

class MockBankAPI {
    public:
    bool ChecksPIN();
};

class MockHardware {
    public:
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
    : step(INSERT_CARD), status("waiting for card input") {
    Card card;
    inputted_PIN = -1;
}

void Controller::GetCardInfo() {

}

void Controller::GetPINNumber() {

}

void Controller::CheckPINNumber() {

}

void Controller::SelectAccount() {

}

void Controller::SeeBalance() {

}

void Controller::SeeDeposit() {

}

void Controller::SeeWithdraw() {

}

void Controller::GoBack() {

}



Card::Card(std::string owner, int number)
    : owner(owner), number(number), is_available(false), is_accessible(false) {}

bool Card::CheckingAvailable() {
    is_available = true;
}
}