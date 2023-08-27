#include <iostream>
#include <time.h>
using namespace std;

bool _gameOver = true;
int _playerGold = 1000;
int _playRound = 1;
int _Betting = 0;
int _cardBet = 0;

enum eCardShape
{
	SPADE,
	DIAMOND,
	HEART,
	CLOVER,
	END
};

void PrintCard(int card)
{
	int shape = card / 13;
	switch (shape)
	{
	case eCardShape::SPADE:
		cout << " ♤ ";
		break;
	case eCardShape::DIAMOND:
		cout << " ◆ ";
		break;
	case eCardShape::HEART:
		cout << " ♥ ";
		break;
	case eCardShape::CLOVER:
		cout << " ♧ ";
		break;
	default:
		break;
	}

	int num = card % 13 + 1;
	switch (num)
	{
	case 1:
		cout << "A";
		break;
	case 11:
		cout << "J";
		break;
	case 12:
		cout << "Q";
		break;
	case 13:
		cout << "K";
		break;
	default:
		cout << num;
		break;
	}
}

void main()
{
	srand(time(NULL));



	int cardArr[52] = {};

	for (int i = 0; i < 52; i++)
	{
		cardArr[i] = i;
	}

	while (true)
	{


		for (int i = 0; i < 100000; i++)
		{
			int num1 = rand() % 52;
			int num2 = rand() % 52;
			int temp = cardArr[num1];
			cardArr[num1] = cardArr[num2];
			cardArr[num2] = temp;
		}





		// 출력을 초기화
		system("cls");
		// 카드를 랜덤으로 5장 뽑는다.
		for (int i = 0; i < 5; i++)
		{
			PrintCard(cardArr[i]);
			cout << "\t";
			// 마지막 카드는 ?? 로 표시한다.
			if (cardArr[i] == 4)
			{
				cout << "??" << endl;
			}
		}

		//플레이 라운드 표시
		cout << "플레이 라운드 : " << _playRound << endl;

		//베팅 금액과 유형 선택
		do
		{
			cout << "베팅 할 금액 (10원 이상)을 입력 해주세요." << endl;
			cin >> _Betting;
			if (_Betting < 10)
			{
				cout << " 베팅 금액이 너무 적습니다." << endl;
			}
		} while (_Betting < 10);
		cout << "베팅 유형을 입력 해주세요. (0: 하이, 1: 로우, 2: 세븐) " << endl;
		cin >> _cardBet;

		// 선택한 결과를 표시
		cout << " 베팅 금액 : " << _Betting << endl;
		cout << " 플레이어의 선택" << endl;
		// 5번째 카드를 표시 하고 선택에 따라 승리 OR 패배 출력.

		if (_cardBet == 0)
		{
			cout << " 하이 " << endl;
			cout << " 카드는 ";
			PrintCard(cardArr[4]);
			cout << endl;
			if (cardArr[4] > 7)
			{
				cout << " 플레이어 승리 " << endl;
				_playerGold = _playerGold + _Betting * 2;
			}
			else
			{
				cout << " 플레이어 패배 " << endl;
				_playerGold = _playerGold - _Betting;
			}
		}

		else if (_cardBet == 1)
		{
			cout << " 로우 " << endl;
			cout << " 카드는 ";
			PrintCard(cardArr[4]);
			cout << endl;
			if (cardArr[4] < 7)
			{
				cout << " 플레이어 승리 " << endl;
				_playerGold = _playerGold + _Betting * 2;
			}
			else
			{
				cout << " 플레이어 패배 " << endl;
				_playerGold = _playerGold - _Betting;
			}
		}

		else if (_cardBet == 2)
		{
			cout << " 세븐 " << endl;
			cout << " 카드는 ";
			PrintCard(cardArr[4]);
			cout << endl;
			if (cardArr[4] == 7)
			{
				cout << " 플레이어 승리 " << endl;
				_playerGold = _playerGold + _Betting * 7;
			}
			else
			{
				cout << " 플레이어 패배 " << endl;
				_playerGold = _playerGold - _Betting;
			}
		}
		cout << " 현재 플레이어 골드 : " << _playerGold << endl;
		_playRound++;

		if (_playerGold == 0)
		{
			cout << " 더 이상 베팅할 수 있는 금액이 없습니다. " << endl;
			_gameOver = true;
		}
		else if (_playRound == 10)
		{
			cout << " 10라운드 달성. 플레이 종료." << endl;
			_gameOver = true;
		}
		system("pause");
	}


}