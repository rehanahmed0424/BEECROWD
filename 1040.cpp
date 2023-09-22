#include <bits/stdc++.h>

using namespace std;

int main() {
   float n1,n2,n3,n4,ave,score;
   cin >> n1 >> n2 >> n3 >> n4;

   ave = ((n1*2)+(n2*3)+(n3*4)+n4)/10;

   cout << setprecision(1);

   cout << "Media: " << fixed << (float)ave<< endl;

   if(ave>=7.0)
   {
       cout << "Aluno aprovado." << endl;
   }
   else if(ave<5.0)
   {
       cout << "Aluno reprovado." << endl;
   }
   else
   {
       cout << "Aluno em exame." << endl;
       cin >> score;
       cout << "Nota do exame: " << fixed <<(float)score << endl;
       ave = (ave + score)/2;

       if(ave>=5.0)
       {
       cout << "Aluno aprovado." << endl;
       }
       else
       {
       cout << "Aluno reprovado." << endl;
       }

       cout << "Media final: " << fixed << (float)ave << endl;
   }

    return 0;
}
