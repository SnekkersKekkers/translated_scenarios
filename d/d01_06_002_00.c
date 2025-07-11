BGOpen("sc760",0);
ChLayout(1);
BGMPlay("BGM_SPORTS_DAY",0.01);
ScrFadeIn(0);
VoicePlay("D010600200_47_000");
MsgDisp("Broadcast","Next up: Team Tug of War from the
2nd year boys.");
MsgClose();
SEPlay("EV_SE_628");
Wait(30,0);
ChOpen(6,30,0,0,0,-1,-1,0,0);
MsgDisp("主人公","Ah, ｛氷室＊＊｝. You're participating in
the Tug Of War, right?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("D010600200_06_000");
MsgDisp("Himuro","Unfortunately, all of the 
2nd year boys have to participate.");
VoicePlay("D010600200_47_010");
MsgDisp("Broadcast","One of the participants is absent so
there will be an emergency substitution.");
VoicePlay("D010600200_47_020");
ChEyeOpenLevel(6,10);
MsgDisp("Broadcast","Vice Principal Himuro will be
participating in his place.");
ChEye(6,0);
ChMouth(6,5);
ChMotion(6,5);
SEPlay("EV_SE_GAYA_011");
SEPlay("EV_SE_GAYA_022",0.1,0.8);
SEPlay("EV_SE_844");
VoicePlay("D010600200_40_030");
MsgDisp("Male Student A","Oy, is that for real!");
VoicePlay("D010600200_41_040");
MsgDisp("Male Student B","Seriously, Himurochi's 
participating∋");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D010600200_06_010");
MsgDisp("Himuro","No way......");
MsgDisp("主人公","Himuro-sensei......in Tug of War∋");
ChPosition(6,1);
SEStop("EV_SE_GAYA_011",1.5);
SEStop("EV_SE_GAYA_022",1.5);
SEStop("EV_SE_844",1.5);
MsgClose();
SEPlay("EV_SE_628");
Wait(30,0);
ChOpen(32,254,0,1,1,-1,-1,0,2);
ChEye(6,0);
VoicePlay("D010600200_32_000");
MsgDisp("Vice Principal Himuro","Quiet down.");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("D010600200_32_010");
MsgDisp("Vice Principal Himuro","As announced, gentlemen, do not 
hestitate to give me your full attention 
I want you to give it your all.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D010600200_06_020");
MsgDisp("Himuro","Why is it Reiichi-sa, I mean, why is it
the Vice Principal? There are other
teachers who could participate.");
ChEye(32,0);
ChMouth(32,0);
ChEyeOpenLevel(32,0);
VoicePlay("D010600200_32_020");
MsgDisp("Vice Principal Himuro","This is because the teachers who
preside over a class cannot be expected
to maintain impartiality.");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("D010600200_32_030");
MsgDisp("Vice Principal Himuro","If there aren't anymore questions...
Everyone, take your positions.");
MsgClose();
SEPlay("EV_SE_626");
MsgClose();
ChClose(32);
ChPosition(6,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEyeOpenLevel(6,8);
VoicePlay("D010600200_06_030");
MsgDisp("Himuro","Of course he's on the enemy team......");
MsgDisp("主人公","Uhm......｛氷室＊＊｝, good luck, okay?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("D010600200_06_040");
MsgDisp("Himuro","Sigh......I guess I have no choice.");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(6);
Wait(10);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
VoicePlay("D010600200_39_050");
MsgDisp("Referee","On your mark, get set——");
SEPlay("EV_SE_612",0,0.9);
Wait(30,0);
SEPlay("EV_SE_GAYA_003",0.5);
SEPlay("EV_SE_792",0.5);
SEPlay("EV_SE_847",0.5);
VoicePlay("D010600200_38_000");
MsgDisp("Students","HEAVE-HO!　HEAVE-HO!");
MsgDisp("主人公","(It's so intense!
｛氷室＊＊｝ vs Himuro-sensei......)");
BGMPlay("BGM_C06_INORI_C",0.01);
MsgClose();
ScrFadeOut(0);
StlOpen("ev_06_08");
StlEye(6,0);
StlMouth(6,0);
SEPlay("EV_SE_791",0.3,0.6);
SEStop("EV_SE_GAYA_003",2);
SEStop("EV_SE_792",2);
SEStop("EV_SE_847",2);
ScrFadeIn(0);
MsgDisp("主人公","(Ahhh∈　They're neck and neck......
It's like the two of them are
fighting??)");
StlEye(32,0);
StlMouth(32,0);
VoicePlay("D010600200_32_040");
MsgDisp("Vice Principal Himuro","Do not fear defeat!
Pull with all your might and emerge
victorious! This is Tug of War!");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("D010600200_06_050");
MsgDisp("Himuro","That's it!　Keep pulling like this!
We can't lose as long as we keep it up!
This is Tug of War!");
MsgDisp("主人公","(Ehh∋
Are they having a conversation??)");
StlEye(6,0,0);
StlMouth(6,1);
StlEyeOpenLevel(6,5,1);
VoicePlay("D010600200_06_060");
MsgDisp("Himuro","I'm going to make you regret joining
us dressed like that!");
SEPlay("EV_SE_792",0.2);
SEPlay("EV_SE_GAYA_011");
VoicePlay("D010600200_38_010");
MsgDisp("Students","HEAVE∈");
StlEye(32,0,0);
StlMouth(32,1);
StlEyeOpenLevel(32,5,1);
SEStop("EV_SE_GAYA_011",1.5);
SEStop("EV_SE_792",1.5);
VoicePlay("D010600200_32_050");
MsgDisp("Vice Principal Himuro","Hmm, is that all you've got?
Let's decide this now!");
SEPlay("EV_SE_793",0.3,0.8);
SEPlay("EV_SE_GAYA_011");
VoicePlay("D010600200_38_010");
MsgDisp("Students","PULL∈");
MsgDisp("主人公","(Himuro-telepathy......?
Thanks to you two the sports festival
is so much fun......!)");
BGMStop(3);
SEStop("EV_SE_791",2.5);
SEStop("EV_SE_792",2);
SEStop("EV_SE_793",2);
SEStop("EV_SE_GAYA_011",2);
MsgClose();
ScrFadeOut(0);
Wait(70);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_SPORTS_DAY",0.01);
ScrFadeIn(0);
MsgDisp("主人公","(It ended in a draw, huh......
But that was a really interesting match!)");
MsgClose();
SEPlay("EV_SE_628");
Wait(30);
ChOpen(6,30,2,1,0,0,-1,0,0);
MsgDisp("主人公","Ah, ｛氷室＊＊｝, good job!
Too bad, huh?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D010600200_06_070");
MsgDisp("Himuro","It wasn't supposed to turn out this
way......
It's frustrating when you can't win.");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("D010600200_06_080");
MsgDisp("Himuro","Next year we will definitely win.");
MsgDisp("主人公","(Will Vice Principal Himuro
participate again next year? Even though
that's after I graduated, I think I
want to watch it......?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
ChPrmTblAdd(6,0);
