#pragma once

class Enemy
{
public:
	Enemy();
	~Enemy();

	//�s��
	void Approach();
	void Shoot();
	void GetAway();

	//�X�V
	void Update();

	//�`��
	void Draw();

private:
	static void (Enemy::* pFuncTable[])();

	//�s���t�F�[�Y
	int phase_;

};