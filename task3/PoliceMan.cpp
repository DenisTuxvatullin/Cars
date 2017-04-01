#include "stdafx.h"
#include "PoliceMan.h"


CPoliceMan::CPoliceMan(std::string name, std::string departmentName)
	:CPersonImpl<IPoliceMan>(name), m_departmentName(departmentName)
{
}

std::string CPoliceMan::GetDepartmentName() const
{
	return m_departmentName;
}
