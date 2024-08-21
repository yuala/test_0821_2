// 2023 Takeru Yui All Rights Reserved.
#pragma once
#include <vector>

class WorldSprite;

/// <summary>
/// 2D�̔w�i�}�b�v
/// </summary>
class Map
{
public:
	Map();
	~Map();

	void Load();
	void Update();
	void Draw();

	// �}�b�v�`�b�v�̃T�C�Y
	static const float	ChipSize;
	static const int	ChipPixelSize;
	static const int	StageDataColNum = 16;		// �}�b�v�s
	static const int	StageDataRowNum = 20;		// �}�b�v��

private:
	// ���ɂ���Œ蒷�񎟌��z��̃}�b�v��ޔz�u�f�[�^
	static const int Stage1Data[StageDataColNum][StageDataRowNum];
	
	// �}�b�v�����ۂɕ\�����邽�߂�WorldSprite�N���X����
	//WorldSprite* sprites;			�}�b�v�`�b�v�P��
	//WorldSprite* sprites[10];		10�̔z��
	//WorldSprite* sprites[StageDataColNum][StageDataRowNum];�@StageDataColNum��StageDataRowNum�̓񎟌��z��
	std::vector<WorldSprite*> sprites;	// StageDataColNum��StageDataRowNum��vector�R���e�i�i���ꎟ���z��j
	
	// �}�b�v�`�b�v�̌��摜�n���h��
	int chipGraph;
};

