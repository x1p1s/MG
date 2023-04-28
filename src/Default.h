#pragma once

struct County
{
	int count = 0;
	int concidences = 0;
	int start = 0;
	int end = 0;
	int timer = 0;
};


void Menu();
void Card_4x2(char a, char a1, char b, char b1, char c, char c1, char d, char d1, char f, char f1, char f2, char f3, char f4, char f5, char f6, char f7);
void Examination_4x2(char a, char a1, char b, char b1, char c, char c1, char d, char d1, char f, char f1, char f2, char f3, char f4, char f5, char f6, char f7, County doc);
void StartGame_4x2(County doc);
void StartGameNext_4x2(char a, char a1, char b, char b1, char c, char c1, char d, char d1, char f, char f1, char f2, char f3, char f4, char f5, char f6, char f7, County doc);

void Card_4x3(char a, char a1, char b, char b1, char c, char c1, char d, char d1, char e1, char g1, char h1, char k1, char f, char f1, char f2, char f3, char f4, char f5, char f6, char f7, char f8, char f9, char f10, char f11);
void StartGame_4x3(County doc);
void Examination_4x3(char a, char a1, char b, char b1, char c, char c1, char d, char d1, char e1, char g1, char h1, char k1, char f, char f1, char f2, char f3, char f4, char f5, char f6, char f7, char f8, char f9, char f10, char f11, County doc);
void StartGameNext_4x3(char a, char a1, char b, char b1, char c, char c1, char d, char d1, char e1, char g1, char h1, char k1, char f, char f1, char f2, char f3, char f4, char f5, char f6, char f7, char f8, char f9, char f10, char f11, County doc);

