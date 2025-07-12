BGOpen("sc230",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Hmm, the weather is nice today too!
I'll go eat lunch on the rooft—)");
VoicePlay("F100610002_41_000");
MsgDisp("Male Student","Finally got some useful information!
Thank you, Himuro!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
SEWait();
MsgClose();
BGMPlay("BGM_C06_INORI_A");
ChOpen(6,254,2,2,0,0,#1,0,0);
VoicePlay("F100610002_06_000");
MsgDisp("Himuro","What are you thanking me for...
I don't care.");
MsgDisp("主人公","｛氷室＊＊｝.
Could this be about Himuro-sensei again?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEyeOpenLevel(6,7);
VoicePlay("F100610002_06_010");
MsgDisp("Himuro","Haa...
There was another curious person here.");
MsgDisp("主人公","Ehh? I don't really care...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100610002_06_020");
MsgDisp("Himuro","Hmm, so you're not interested?
About Reiichi-san's love life.");
MsgDisp("主人公","Eh, did you find out something?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,7);
VoicePlay("F100610002_06_030");
MsgDisp("Himuro","Your eyes are sparkling.");
MsgDisp("主人公","Ugh...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100610002_06_040");
MsgDisp("Himuro","I couldn't ask Reiichi-san himself,
so I casually asked my father.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100610002_06_050");
MsgDisp("Himuro","\"There's this rumor going around,
do you know anything about it?\"
And then——");
BGMStop(0.6);
Wait(30,0);
VoicePlay("F100610002_32_000");
MsgDisp("Vice Principal Himuro?","So it was you and your Father
who spread that absurd rumor?
Himuro Inori.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
ChPosition(6,1);
MsgClose();
SEWait();
BGMPlay("BGM_C32_HIMURO_A");
ChOpen(32,254,0,1,1,0,#1,0,2);
ChEye(6,3);
ChMouth(6,0);
ChMotion(6,5);
VoicePlay("F100610002_06_060");
MsgDisp("Himuro","Reiichi-san∋");
MsgDisp("主人公","∋");
ChEye(32,1);
ChMouth(32,1);
VoicePlay("F100610002_32_010");
MsgDisp("VP Himuro","I will be making a sudden home visit
and then a parent-teacher meeting today.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,5);
VoicePlay("F100610002_06_070");
MsgDisp("Himuro","Eh...");
ChEye(32,1);
ChMouth(32,1);
VoicePlay("F100610002_32_020");
MsgDisp("VP Himuro","No objections will be accepted.
Wait in front of the staff room at 4pm.
That is all.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
MsgClose();
ChClose(32);
ChPosition(6,0);
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("F100610002_06_080");
MsgDisp("Himuro","This is the worst...");
MsgDisp("主人公","(My condolences, ｛氷室＊＊｝...)");
MsgClose();
ScrFadeOut(0,0);
