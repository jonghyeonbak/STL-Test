#include <iostream>
#include <functional> // stl less�� greater ���
#include <vector>
#include <list>
#include <algorithm>
#include <stack>
#include <map>
#include <string>

using namespace std;





int main(void)
{
		
		string t("Hello!"); // �ӽ� ���ڿ�
		const char* p1 = "Hello!";
		const char* p2 = p1 + 6;

		string s1;
		string s2("Hello!");
		string s3("Hello!", 2);
		string s4(5, 'H');
		string s5(t.begin(), t.end()); // �ݺ��� �ѽ�
		string s6(p1, p2);  // ������ �ѽ�

		// s - string ��ü, sz - '\0'���ڿ�, c-����, n-����, iter - �ݺ���, p-������
		cout << "s1(): " << s1 << endl;
		cout << "s2(sz): " << s2 << endl;
		cout << "s3(sz, n): " << s3 << endl;
		cout << "s4(n, c): " << s4 << endl;
		cout << "s5(iter1, iter2): " << s5 << endl;
		cout << "s6(p1, p2): " << s6 << endl;


		map<int, int > m;
		
		m.insert(pair<int, int>(5, 100));
		m.insert(pair<int, int>(3, 100));
		m.insert(pair<int, int>(8, 30));
		m.insert(pair<int, int>(4, 40));
		m.insert(pair<int, int>(1, 70));
		m.insert(pair<int, int>(7, 100));
		
		pair<int, int> pr(9, 50);
		m.insert(pr);

		map<int, int>::iterator iter;
		for (iter = m.begin(); iter != m.end(); ++iter)
				cout << "(" << (*iter).first << ',' << (*iter).second << ")" << " ";
		cout << endl;

		//map<int, int>::iterator iter2;
		for (iter = m.begin(); iter != m.end(); ++iter)
				cout << "(" << iter->first << ',' << iter->second << ")" << " ";
		cout << endl;
		return 0;
}