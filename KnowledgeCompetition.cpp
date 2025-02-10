#include <iostream>
using namespace std;

int main() {
char s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15;  
char eh;
cout << " \t - Welcome to Game of 'Who wants to 500 million dollars?' - \n\n ";
cout << " \t - Question 1 : When was the battle of Manzikert?  - \n\n\t\t A) 1071 \t\t B) 1453 \n\t\t C) 1915 \t\t D) 1923 \n\n";
cout << " \t - Answer : ";
cin >> s1;
if(s1 == 'A' || s1 == 'a'){
    cout << " \t - Correct!You gained 50 dollar - \n\n";
}  
else if(s1 == 'B' || s1 == 'b' || s1 == 'C' || s1 == 'c' || s1 == 'D' || s1 == 'd'){
    cout << " \t - Wrong!You lost!You didn't gain any money. - \n\n";
    exit(0);
}
else {
    cout << " \t - Invalid!!Wrong!You lost!You didn't gain any money. - \n\n";
    exit(0);
}
cout << " \t - Question 2 : Where is the capital of Turkey?  - \n\n\t\t A) Istanbul \t\t B) Ankara \n\t\t C) Izmir \t\t D) Bursa \n\n";
cout << " \t - Answer : ";
cin >> s2;
if(s2 == 'B' || s2 == 'b'){
    cout << " \t - Correct!You gained 100 dollar - \n\n";
} else if(s2 == 'A' || s2 == 'a' || s2 == 'C' || s2 == 'c' || s2 == 'D' || s2 == 'd'){
    cout << " \t - Wrong!You lost!You didn't gain any money. - \n\n";
    exit(0);
}
else {
    cout << " \t - Invalid!!Wrong!You lost!You didn't gain any money. - \n\n";
    exit(0);
}   
cout << "  \t - Question 3 : How many region does Turkey have?  - \n\n\t\t A) 4 \t\t B) 5 \n\t\t C) 6 \t\t D) 7 \n\n";
cout << " \t - Answer : ";
cin >> s3;
if(s3 == 'D' || s3 == 'd') { 
    cout << " \t - Correct!You gained 200 dollar - \n\n";
} else if(s3 == 'A' || s3 == 'a' || s3 == 'B' || s3 == 'b' || s3 == 'C' || s3 == 'c'){
    cout << " \t - Wrong!You lost!You didn't gain any money. - \n\n";
    exit(0);
}
else {  
    cout << " \t - Invalid!!Wrong!You lost!You didn't gain any money. - \n\n";
    exit(0);
}
cout << "  \t - Question 4: Who is the famous singer has nickname 'Megastar'?  - \n\n\t\t A) Ajda Pekkan \t\t B) Sezen Aksu \n\t\t C) Tarkan \t\t D) Sertab Erener \n\n";
cout << " \t - Answer : ";
cin >> s4;
if(s4 == 'C' || s4 == 'c') {
    cout << " \t - Correct!You gained 300 dollar - \n\n";
} else if(s4 == 'A' || s4 == 'a' || s4 == 'B' || s4 == 'b' || s4 == 'D' || s4 == 'd'){
    cout << " \t - Wrong!You lost!You didn't gain any money. - \n\n";
    exit(0);
}
else {
    cout << " \t - Invalid!!Wrong!You lost!You didn't gain any money. - \n\n";
    exit(0);
}
cout << "  \t - Question 5 : Who won the final of Galatasaray UEFA Cup ? - \n\n\t\t A) Arsenal \t\t B) Chelsea \n\t\t C) Liverpool \t\t D) Inter Milan \n\n";
cout << " \t - Answer : ";
cin >> s5;
if(s5 == 'A' || s5 == 'a') {
    cout << " \t - Correct!You gained 500 dollar - \n\n";
} else if(s5 == 'B' || s5 == 'b' || s5 == 'C' || s5 == 'c' || s5 == 'D' || s5 == 'd'){
    cout << " \t - Wrong!You lost!You didn't gain any money. - \n\n";
    exit(0);
}
else {
    cout << " \t - Invalid!!Wrong!You lost!You didn't gain any money. - \n\n";
    exit(0);
}
cout << "  \t - Question 6 : Who is the 4th president of Turkey ? \n\n\t\t A) Kenan Evren \t\t B) Turgut Ozal \n\t\t C) Suleyman Demirel \t\t D) Cemal Gursel \n\n";
cout << " Do you want to finished the game? (Y/N) : ";
cin >> eh;
if(eh == 'Y' || eh == 'y') {
    cout << " \t - You gained 500 dollar! - \n\n";
    exit(0);
} else if(eh == 'N' || eh == 'n') {
    cout << " \t - Answer : ";
    cin >> s6;
    if(s6 == 'D' || s6 == 'd') {
        cout << " \t - Correct!You gained 1000 dollar - \n\n";
    } else if(s6 == 'A' || s6 == 'a' || s6 == 'B' || s6 == 'b' || s6 == 'C' || s6 == 'c'){
        cout << " \t - Wrong!You lost!You gained 500 dollar. - \n\n";
        exit(0);
    }
    else {
        cout << " \t - Invalid!!Wrong!You lost!You gained 500 dollar. - \n\n";
        exit(0);
    }
}
cout << "  \t - Question 7 : Which one is spent last years of his life as a deaf ?  - \n\n\t\t A) Beethoven \t\t B) Mozart \n\t\t C) Michael Jackson \t\t D) Rauf Denktas \n\n";
cout << " \t\t - Answer : ";
cin >> s7;
if(s7 == 'A' || s7 == 'a') {
    cout << " \t - Correct!You gained 2000 dollar - \n\n";
} else if(s7 == 'B' || s7 == 'b' || s7 == 'C' || s7 == 'c' || s7 == 'D' || s7 == 'd'){
    cout << " \t - Wrong!You lost!You gained 500 dollar. - \n\n";
    exit(0);
}
else {
    cout << " \t - Invalid!!Wrong!You lost!You gained 500 dollar. - \n\n";
    exit(0);
}
cout << "  \t - Question 8 : Who is the author of 'Crime and Punishment' ?  - \n\n\t\t A) Fyodor Dostoyevsky \t\t B) Leo Tolstoy \n\t\t C) Anton Chekhov \t\t D) Nikolai Gogol \n\n";
cout << " \t - Answer : ";
cin >> s8;
if(s8 == 'A' || s8 == 'a') {
    cout << " \t - Correct!You gained 4000 dollar - \n\n";
} else if(s8 == 'B' || s8 == 'b' || s8 == 'C' || s8 == 'c' || s8 == 'D' || s8 == 'd'){
    cout << " \t - Wrong!You lost!You gained 500 dollar. - \n\n";
    exit(0);
}
else {
    cout << " \t - Invalid!!Wrong!You lost!You gained 500 dollar. - \n\n";
    exit(0);
}
cout << "  \t - Question 9 : Where is the Etna Volcano ?  - \n\n\t\t A) Italy \t\t B) Sicily \n\t\t C) Greece \t\t D) France \n\n";
cout << " \t - Answer : ";
cin >> s9;
if(s9 == 'B' || s9 == 'b') {
    cout << " \t - Correct!You gained 8000 dollar - \n\n";
} else if(s9 == 'A' || s9 == 'a' || s9 == 'C' || s9 == 'c' || s9 == 'D' || s9 == 'd'){
    cout << " \t - Wrong!You lost!You gained 500 dollar. - \n\n";
    exit(0);
}
else {
    cout << " \t - Invalid!!Wrong!You lost!You gained 500 dollar. - \n\n";
    exit(0);
}
cout << "  \t - Question 10 : What percentage of the world is covered by land? - \n\n\t\t A) 78% \t\t B) 65% \n\t\t C) 45% \t\t D) 29% \n\n";
cout << " \t - Answer : ";
cin >> s10;
if(s10 == 'D' || s10 == 'd') {
    cout << " \t - Correct!You gained 16000 dollar.Congratulations, you have passed the milestone!- \n\n"; 
} else if(s10 == 'A' || s10 == 'a' || s10 == 'B' || s10 == 'b' || s10 == 'C' || s10 == 'c'){
    cout << " \t - Wrong!You lost!You gained 500 dollar. - \n\n";
    exit(0);
}
else {
    cout << " \t - Invalid!!Wrong!You lost!You gained 500 dollar. - \n\n";
    exit(0);
}
cout << "  \t - Question 11 : Who is the artist that represented our country in the 2007 Eurovision Song Contest with the song 'Shake It Up Şekerim'? - \n\n\t\t A) Hadise \t\t B) Sertab Erener \n\t\t C) Kenan Dogulu \t\t D) Ajda Pekkan \n\n";
cout << " \t - Answer : ";
cin >> s11;
if(s11 == 'C' || s11 == 'c') {
    cout << " \t - Correct!You gained 32000 dollar - \n\n";
} else if(s11 == 'A' || s11 == 'a' || s11 == 'B' || s11 == 'b' || s11 == 'D' || s11 == 'd'){
    cout << " \t - Wrong!You lost!You gained 16000 dollar. - \n\n";
    exit(0);
}
else {
    cout << " \t - Invalid!!Wrong!You lost!You gained 16000 dollar. - \n\n";
    exit(0);
}
cout << "  \t - Question 12 : Which vision disorder occurs when the lens inside the eye loses its transparency? - \n\n\t\t A) Cataract \t\t B) Hypermetropia \n\t\t C) Astigmatism \t\t D) Myopia \n\n";
cout << " \t - Answer : ";
cin >> s12;
if(s12 == 'A' || s12 == 'a') {
    cout << " \t - Correct!You gained 64000 dollar - \n\n"; 
} else if(s12 == 'B' || s12 == 'b' || s12 == 'C' || s12 == 'c' || s12 == 'D' || s12 == 'd'){
    cout << " \t - Wrong!You lost!You gained 16000 dollar. - \n\n";
    exit(0);
}
else {
    cout << " \t - Invalid!!Wrong!You lost!You gained 16000 dollar. - \n\n";
    exit(0);
}
cout << "  \t - Question 13 : The Battle of Marj Dabiq, which took place in 1516, was fought between the Ottoman Empire and which state? - \n\n\t\t A) Mamluks \t\t B) Safavids \n\t\t C) Memluks  \t\t D) Mughals \n\n";
cout << " \t - Answer : ";
cin >> s13;
if(s13 == 'C' || s13 == 'c') {
    cout << " \t - Correct!You gained 125000 dollar - \n\n";
} else if(s13 == 'A' || s13 == 'a' || s13 == 'B' || s13 == 'b' || s13 == 'D' || s13 == 'd'){
    cout << " \t - Wrong!You lost!You gained 16000 dollar. - \n\n";
    exit(0);
}
else {
    cout << " \t - Invalid!!Wrong!You lost!You gained 16000 dollar. - \n\n";
    exit(0);
}
cout << "  \t - Question 14 : Which form of government is characterized by political authority being generally inherited and concentrated in one person? - \n\n\t\t A) Democracy \t\t B) Republic \n\t\t C) Monarchy \t\t D) Oligarchy \n\n";
cout << " \t - Answer : ";
cin >> s14;
if(s14 == 'C' || s14 == 'c') {
    cout << " \t - Correct!You gained 250000 dollar - \n\n";
} else if(s14 == 'A' || s14 == 'a' || s14 == 'B' || s14 == 'b' || s14 == 'D' || s14 == 'd'){
    cout << " \t - Wrong!You lost!You gained 16000 dollar. - \n\n";
    exit(0);
}
else {
    cout << " \t - Invalid!!Wrong!You lost!You gained 16000 dollar. - \n\n";
    exit(0);
}
cout << "  \t - Question 15 : Which journalist, in whole memory the First Bullet Monument was erected in Izmir Konak Square in 1973? - \n\n\t\t A) Abdi Ipekci \t\t B) Hasan Tahsin \n\t\t C) Metin Goktepe \t\t D) Cetin Emec \n\n";
cout << " \t - Answer : ";
cin >> s15;
if(s15 == 'B' || s15 == 'b') {
    cout << " \t - Correct!You gained 500000 dollar.Congrulationss!! - \n\n";
} else if(s15 == 'A' || s15 == 'a' || s15 == 'C' || s15 == 'c' || s15 == 'D' || s15 == 'd'){
    cout << " \t - Wrong!You lost!You gained 16000 dollar. - \n\n";
    exit(0);
}
else {
    cout << " \t - Invalid!!Wrong!You lost!You gained 16000 dollar. - \n\n";
    exit(0);
}
cout << " \t - Congratulations! You won the game! - \n\n";
    return 0;
}