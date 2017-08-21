#include "Student.h"
class GradeCalculator
{
public:
	GradeCalculator(Student student);
	void CalculateQuizPercent();
private:
	Student _student;
};

