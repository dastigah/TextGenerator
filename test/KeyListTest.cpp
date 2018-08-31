#include "KeyListTest.H"
#include "KeyList.H"

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION( KeyListTest );

void KeyListTest::setUp(void){
	//TODO
	testSingleFn = "testFiles/testSingle.txt";
	testMultipleFn = "testFiles/testMultiple.txt";
	testComboFn = "testFiles/testCombo.txt";
	testInvalidSeparatorFn = "testFiles/testInavlidSeparator.txt";		

	testSingleMap = {	{"cat","dog"},
						{"chicken","pig"},
						{"expeditition","voyage"},
						{"fire","water"}
					}; 
				
						
	

}

void KeyListTest::tearDown(void){
	//TODO
}

void KeyListTest::testSingleWords(void){
	KeyList actual = KeyList(testSingleFn);
	CPPUNIT_ASSERT( mapComparator(testSingleMap,actual.getMap()) );
}

bool KeyListTest::mapComparator(map<string,string> & t1, map<string,string> & t2){
	for (auto it : t1){
		if(t2[it.first] != it.second) return false;	
	}
	for (auto it : t2){
		if (t1[it.first] != it.second) return false;
	}

	return true;
}
