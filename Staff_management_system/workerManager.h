#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

#include "employee.h"
#include "manager.h"
#include "boss.h"

class WorkerManager
{
public:

	WorkerManager();


	void Show_Menu();

	void exitSystem();

	//记录文件中的人数个数
	int m_EmpNum;

	//员工数组的指针
	Worker** m_EmpArray;

	//增加职工
	void Add_Emp();

	~WorkerManager();


};
