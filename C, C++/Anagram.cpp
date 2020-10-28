#include <bits/stdc++.h>
using namespace std;

int anagram(string s1,string s2){
	int array1[26]={0},array2[26]={0};
	//if string lengths are different
	if(s1.length()!=s2.length())
		return 0; //they are not anagrams
	//for string1
	for(int i=0;s1[i]!='\0';i++){
		//storing frequency for each letter in the string   
		array1[s1[i]-'a']++;     
	}

	//for string2
	for(int i=0;s2[i]!='\0';i++){
		//storing frequency for each letter in the string     
		array2[s2[i]-'a']++;   
	}
	//comparison step
	for(int i=0;i<26;i++){
		// if any letter has different no of occurence, 
		// then strings are not anagrams
		if(array1[i]!=array2[i]) 
			return 0;
	}

	return 1;// else they are anagrams
}
int main()
{
	int n;
	string s1,s2;

	//input the strings
	cout<<"enter string1\n";
	cin>>s1;
	cout<<"enter string2\n";
	cin>>s2;

	if(anagram(s1,s2))
		printf("strings are anagrams of each other\n");
	else
		printf("strings are not anagrams of each other\n");

	return 0;
}
