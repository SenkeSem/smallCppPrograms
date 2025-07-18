#include <iostream>
using namespace std;

class Enemy {
public:
	Enemy(int damage = 10);
	virtual ~Enemy();
	void virtual Attack() const;
protected:
	int* m_pDamage;
};

Enemy::Enemy(int damage)
{
	m_pDamage = new int(damage);
}

Enemy::~Enemy()
{
	cout << "In Enemy destructor, deleting m_pDamage.\n";
	delete m_pDamage;
	m_pDamage = 0;
}

void Enemy::Attack() const
{
	cout << "An enemy attacks and inflicts " << *m_pDamage << " damage points.";
}

class Boss : public Enemy {
public:
	Boss(int multiplier = 3);
	virtual ~Boss();
	void virtual Attack() const;
protected:
	int* m_Multiplier;
};

Boss::Boss(int multiplier)
{
	m_Multiplier = new int(multiplier);
}

Boss::~Boss()
{
	cout << "In Boss destructor, deleting m_Multiplier.\n";
	delete m_Multiplier;
	m_Multiplier = 0;
}

void Boss::Attack() const
{
	cout << "A boss attacks and inflicts " << (*m_pDamage) * (*m_Multiplier) << " damage points.";
}

int main()
{
	cout << "Calling Attack() on Boss object through pointer to Enemy:\n";
	
	Enemy* pBadGuy = new Boss();
	pBadGuy->Attack();
	
	cout << "\n\nDeleting pointer to Enemy:\n";
	delete pBadGuy;
	pBadGuy = 0;
	
	return 0;
}