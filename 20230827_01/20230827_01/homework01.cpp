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
		cout << " �� ";
		break;
	case eCardShape::DIAMOND:
		cout << " �� ";
		break;
	case eCardShape::HEART:
		cout << " �� ";
		break;
	case eCardShape::CLOVER:
		cout << " �� ";
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





		// ����� �ʱ�ȭ
		system("cls");
		// ī�带 �������� 5�� �̴´�.
		for (int i = 0; i < 5; i++)
		{
			PrintCard(cardArr[i]);
			cout << "\t";
			// ������ ī��� ?? �� ǥ���Ѵ�.
			if (cardArr[i] == 4)
			{
				cout << "??" << endl;
			}
		}

		//�÷��� ���� ǥ��
		cout << "�÷��� ���� : " << _playRound << endl;

		//���� �ݾװ� ���� ����
		do
		{
			cout << "���� �� �ݾ� (10�� �̻�)�� �Է� ���ּ���." << endl;
			cin >> _Betting;
			if (_Betting < 10)
			{
				cout << " ���� �ݾ��� �ʹ� �����ϴ�." << endl;
			}
		} while (_Betting < 10);
		cout << "���� ������ �Է� ���ּ���. (0: ����, 1: �ο�, 2: ����) " << endl;
		cin >> _cardBet;

		// ������ ����� ǥ��
		cout << " ���� �ݾ� : " << _Betting << endl;
		cout << " �÷��̾��� ����" << endl;
		// 5��° ī�带 ǥ�� �ϰ� ���ÿ� ���� �¸� OR �й� ���.

		if (_cardBet == 0)
		{
			cout << " ���� " << endl;
			cout << " ī��� ";
			PrintCard(cardArr[4]);
			cout << endl;
			if (cardArr[4] > 7)
			{
				cout << " �÷��̾� �¸� " << endl;
				_playerGold = _playerGold + _Betting * 2;
			}
			else
			{
				cout << " �÷��̾� �й� " << endl;
				_playerGold = _playerGold - _Betting;
			}
		}

		else if (_cardBet == 1)
		{
			cout << " �ο� " << endl;
			cout << " ī��� ";
			PrintCard(cardArr[4]);
			cout << endl;
			if (cardArr[4] < 7)
			{
				cout << " �÷��̾� �¸� " << endl;
				_playerGold = _playerGold + _Betting * 2;
			}
			else
			{
				cout << " �÷��̾� �й� " << endl;
				_playerGold = _playerGold - _Betting;
			}
		}

		else if (_cardBet == 2)
		{
			cout << " ���� " << endl;
			cout << " ī��� ";
			PrintCard(cardArr[4]);
			cout << endl;
			if (cardArr[4] == 7)
			{
				cout << " �÷��̾� �¸� " << endl;
				_playerGold = _playerGold + _Betting * 7;
			}
			else
			{
				cout << " �÷��̾� �й� " << endl;
				_playerGold = _playerGold - _Betting;
			}
		}
		cout << " ���� �÷��̾� ��� : " << _playerGold << endl;
		_playRound++;

		if (_playerGold == 0)
		{
			cout << " �� �̻� ������ �� �ִ� �ݾ��� �����ϴ�. " << endl;
			_gameOver = true;
		}
		else if (_playRound == 10)
		{
			cout << " 10���� �޼�. �÷��� ����." << endl;
			_gameOver = true;
		}
		system("pause");
	}


}