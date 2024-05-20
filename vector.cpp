//2��(1) - 2���� ����
/*#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	vector<vector<int>> score;

	//�Է�
	for (int i = 0; i < 3; i++) {
		vector<int> s;
		int x;
		cout << i + 1 << "��° �л��� ����,����,���� ������ �Է�: ";
		for (int j = 0; j < 3; j++) {
			cin >> x;
			s.push_back(x);
		}
		score.push_back(s);
	}
	//���
	vector<double> avg;
	for (int i = 0; i < score.size(); i++) {
		int total = 0;
		double a;
		for (int j = 0; j < score[i].size(); j++)
			total += score[i][j];
		a = (double)total / score[i].size();
		avg.push_back(a);
	}

	double max_value = avg[0];
	int max_num = 1;
	for (int i = 1; i < avg.size(); i++) {
		if (avg[i] > max_value) {
			max_value = avg[i];
			max_num = i + 1;
		}
	}
	cout << "�ֿ�� �л��� " << max_num << "��° �л��̰� ��������� " << max_value << "���̴�." << endl;
	return 0;
}*/


//2��(2) - student class
#include <iostream>
#include <vector>
using namespace std;

class studentInfo {
private:
	int korean;
	int english;
	int math;
	int size = 3;
public:
	studentInfo(int k = 0, int e = 0, int m = 0) {
		this->korean = k; //korean = k;
		this->english = e;
		this->math = m;
	}
	void setData(int k, int e, int m) {
		this->korean = k; //korean = k;
		this->english = e;
		this->math = m;
	}
	int getSize() {
		return size;
	}
	int getTotalScore() {
		return korean + english + math;
	}
};

int main(void) {
	vector<studentInfo> score;

	//�Է�
	for (int i = 0; i < 3; i++) {
		studentInfo info;
		int k, e, m;
		cout << i + 1 << "��° �л��� ����,����,���� ������ �Է�: ";
		cin >> k >> e >> m;
		info.setData(k, e, m); //i��° �л��� ������ ����

		score.push_back(info); //i��° �л��� ������ score_vector�� ����
	}
	//���
	vector<double> avg;
	for (int i = 0; i < score.size(); i++) {
		int total = 0;
		double a;

		total += score[i].getTotalScore(); //i��° �л��� ���� ������ ����
		a = (double)total / score[i].getSize(); //i��° �л��� ��հ�
		avg.push_back(a); //i��° �л��� ��հ� ������ avg_vector�� ����
	}
	//avg_vector�� ����� �л����� ��հ� ��(�ִ밪 ���ϱ�)
	double max_value = avg[0];
	int max_num = 1;
	for (int i = 1; i < avg.size(); i++) {
		if (avg[i] > max_value) {
			max_value = avg[i];
			max_num = i + 1;
		}
	}
	cout << "�ֿ�� �л��� " << max_num << "��° �л��̰� ��������� " << max_value << "���̴�." << endl;
	return 0;
}