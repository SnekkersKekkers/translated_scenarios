BGOpen("sc130",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Come to think of it......
Isn't today Kuya's graduation?)");
MsgDisp("主人公","(I might not make it in time but
shouldn't I go to Hanegasaki High School?)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc000",1);
ScrFadeIn(0);
MsgDisp("主人公","(Hmm......
Like I thought, he probably went home
already......)");
VoicePlay("D030901100_09_000");
MsgDisp("Kuya?","Is there a problem?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C09_KUYA_B",0.01);
ChOpen(9,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Kuya-san!
How did you——");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030901100_09_010");
MsgDisp("Kuya","I got the feeling you were coming to
see me......So I came to see you too.");
MsgDisp("主人公","Hehe!
Congratulations on your graduation.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,8);
VoicePlay("D030901100_09_020");
MsgDisp("Kuya","Thank you.");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030901100_09_030");
MsgDisp("Kuya","I may have just graduated from high
school, but now it's time for the real
thing, ......Right?");
MsgDisp("主人公","Yeah!");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
BGOpen("ho000",2);
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,0,1);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for walking me home.");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("D030901100_09_040");
MsgDisp("Kuya","The pleasure is all mine. It's too 
perfect that my last high school memory 
will be walking home with you.");
MsgDisp("主人公","Hehe, I'm happy.");
VoicePlay("D030901100_09_050");
MsgDisp("Kuya","Yeah.
Starting tomorrow, I'll be taking a
gap year.");
MsgDisp("主人公","......Do you regret anything?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,1,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030901100_09_060");
MsgDisp("Kuya","Not at all.
Starting on the same level as you is
refreshing.");
ChEye(9,0);
ChMouth(9,0);
VoicePlay("D030901100_09_070");
MsgDisp("Kuya","......Hey.");
MsgDisp("主人公","Yes?");
ChEye(9,0);
ChMouth(9,4);
ChMotion(9,0,1);
VoicePlay("D030901100_09_080");
MsgDisp("Kuya","I have to study like crazy this year
so I can get into a first-rate
university.");
ChMotion(9,4,1);
VoicePlay("D030901100_09_090");
MsgDisp("Kuya","Because of that, I think we'll see
each other less often.");
MsgDisp("主人公","Kuya-san......");
ChEye(9,2);
ChMouth(9,0);
ChMotion(9,0,1);
ChCheek(9,5);
VoicePlay("D030901100_09_100");
MsgDisp("Kuya","So......don't forget about me.
Think about me once in a while.");
MsgDisp("主人公","Hehe, of course.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030901100_09_110");
MsgDisp("Kuya","What a relief.
Let's work hard in \"study\"ing and in
art and aim for a first-rate university!");
MsgDisp("主人公","Yes!");
ChEye(9,2);
ChMouth(9,0);
ChMotion(9,4,1);
ChCheek(9,7);
VoicePlay("D030901100_09_120");
MsgDisp("Kuya","......But can I give you a call when I
start to get lonely?");
MsgDisp("主人公","Eh?
Of course. I'll be waiting.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,6);
VoicePlay("D030901100_09_130");
MsgDisp("Kuya","Thank you.
Let's continue to support each other
from now on.");
MsgDisp("主人公","(I will also take entrance exams in
April......Kuya-san is also working hard,
so let's do our best!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
