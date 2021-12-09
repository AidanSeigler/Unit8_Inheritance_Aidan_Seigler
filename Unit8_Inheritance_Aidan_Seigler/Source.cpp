#include <iostream>
using namespace std;

class StudentType
{
private:
	int hoursTaken;
public:
	StudentType(int HOURS_TAKEN)
	{
		hoursTaken = HOURS_TAKEN;
	}
	StudentType()
	{
		hoursTaken = 0;
	}
	int getHoursTaken() { return hoursTaken; }
	void setHoursTaken(int HOURS_TAKEN) { hoursTaken = HOURS_TAKEN; }
};

class Semester
{
private:
	StudentType ft;
	StudentType pt;
	StudentType ht;
	double tuition;
	double bookCosts;
public:
	Semester()
	{
		ft.setHoursTaken(15);
		pt.setHoursTaken(9);
		ht.setHoursTaken(6);
		tuition = 0.0;
		bookCosts = 0.0;
	}
	StudentType getFT() { return ft; }
	StudentType getPT() { return pt; }
	StudentType getHT() { return ht; }
	double getTuition() { return tuition; }
	double getBookCosts() { return bookCosts; }
	void setFT(StudentType FT) { ft = FT; }
	void setPT(StudentType PT) { pt = PT; }
	void setHT(StudentType HT) { ht = HT; }
	void setTuition(double TUITION) { tuition = TUITION; }
	void setBookCosts(double BOOK_COSTS) { bookCosts = BOOK_COSTS; }

};

int main()
{
	
	return 0;
}