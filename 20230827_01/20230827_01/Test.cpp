#include <iostream>
#include <time.h>
using namespace std;

bool _gameOver = true;
int _playerGold = 1000;
int _playRound = 1;
int _Betting = 100;
int _cardBet = 0;

void main()
{
	cin >> _Betting;
	_playerGold = _playerGold + _Betting;
	cout << _playerGold << endl;
}