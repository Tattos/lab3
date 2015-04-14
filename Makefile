All: lab3_question_A.o
	g++ -o lab3 lab3_question_A.o
lab3_question_A.o:
	g++ -c lab3_question_A.cpp
clean:
	rm All *.o
	
