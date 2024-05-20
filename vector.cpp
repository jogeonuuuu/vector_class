//2번(1) - 2차원 벡터
/*#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	vector<vector<int>> score;

	//입력
	for (int i = 0; i < 3; i++) {
		vector<int> s;
		int x;
		cout << i + 1 << "번째 학생의 국어,영어,수학 성적을 입력: ";
		for (int j = 0; j < 3; j++) {
			cin >> x;
			s.push_back(x);
		}
		score.push_back(s);
	}
	//평균
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
	cout << "최우수 학생은 " << max_num << "번째 학생이고 평균점수는 " << max_value << "점이다." << endl;
	return 0;
}*/


//2번(2) - student class
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

	//입력
	for (int i = 0; i < 3; i++) {
		studentInfo info;
		int k, e, m;
		cout << i + 1 << "번째 학생의 국어,영어,수학 성적을 입력: ";
		cin >> k >> e >> m;
		info.setData(k, e, m); //i번째 학생의 데이터 삽입

		score.push_back(info); //i번째 학생의 데이터 score_vector에 저장
	}
	//평균
	vector<double> avg;
	for (int i = 0; i < score.size(); i++) {
		int total = 0;
		double a;

		total += score[i].getTotalScore(); //i번째 학생의 총합 데이터 추출
		a = (double)total / score[i].getSize(); //i번째 학생의 평균값
		avg.push_back(a); //i번째 학생의 평균값 데이터 avg_vector에 저장
	}
	//avg_vector에 저장된 학생들의 평균값 비교(최대값 구하기)
	double max_value = avg[0];
	int max_num = 1;
	for (int i = 1; i < avg.size(); i++) {
		if (avg[i] > max_value) {
			max_value = avg[i];
			max_num = i + 1;
		}
	}
	cout << "최우수 학생은 " << max_num << "번째 학생이고 평균점수는 " << max_value << "점이다." << endl;
	return 0;
}