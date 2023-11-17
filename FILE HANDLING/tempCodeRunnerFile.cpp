 ifstream fin;
   student s1;
   fin.open("rrp.txt",ios::in);
   fin.read((char*)&s1,sizeof(s1));
   s1.show();