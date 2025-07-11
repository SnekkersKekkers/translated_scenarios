BGOpen("sc608",0);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(2,41,0,2,0,-1,-1,0,0);
VoicePlay("D010200400_02_000");
MsgDisp("Sassa","That's strange......Is it broken?");
MsgDisp("主人公","｛颯砂＊＊｝, what's wrong?");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("D010200400_02_010");
MsgDisp("Sassa","I wanted to measure my heart rate but
the machine isn't working.");
MsgDisp("主人公","We've been using it for a long time......
I'll ask if we can buy a new one.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("D010200400_02_020");
MsgDisp("Sassa","Please do, Manager.");
MsgDisp("主人公","Okay, sit down for me.");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,5);
VoicePlay("D010200400_02_030");
MsgDisp("Sassa","Eh?");
MsgDisp("主人公","You wanted to measure your heartrate
right?");
ChEye(2,5);
ChMouth(2,5);
ChMotion(2,5);
VoicePlay("D010200400_02_040");
MsgDisp("Sassa","Uh, yeah.");
MsgClose();
SEPlay("EV_SE_713");
SEWait();
ScrFadeOut(0);
ChClose(2,0,0);
BGMPlay("BGM_C02_SASSA_I",0.01);
StlOpen("ev_02_08");
StlEye(2,0);
StlMouth(2,0);
ScrFadeIn(0);
VoicePlay("D010200400_02_050");
MsgDisp("Sassa","Ah.........");
MsgDisp("主人公","One minute.");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5,1);
VoicePlay("D010200400_02_060");
MsgDisp("Sassa","Ha......");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,0,1);
VoicePlay("D010200400_02_070");
MsgDisp("Sassa","Nn.........");
StlEye(2,1);
StlMouth(2,1);
VoicePlay("D010200400_02_080");
MsgDisp("Sassa","Y-You know......
I don't see anyone in the clubroom
today?");
MsgDisp("主人公","Shhh.
Don't talk.");
StlEye(2,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5,1);
MsgDisp("主人公","６９,７０......Ehh?");
StlEye(2,1);
StlMouth(2,0);
VoicePlay("D010200400_02_090");
MsgDisp("Sassa","R-Really?");
MsgDisp("主人公","Your heart rate is so fast......!
｛颯砂＊＊｝, are you okay?");
StlEye(2,1);
StlMouth(2,1);
StlEyeOpenLevel(2,5,1);
StlCheek(2,5);
VoicePlay("D010200400_02_100");
MsgDisp("Sassa","Well......Your face is really close and
you're holding my hand, so......");
MsgDisp("主人公","Eh?　Ah......");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(60);
ChOpen(2,41,2,2,4,-1,-1,10,0,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Uhm......
Sorry......");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D010200400_02_110");
MsgDisp("Sassa","It's fine......
Why are you apologizing?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChCheek(2,0);
VoicePlay("D010200400_02_120");
MsgDisp("Sassa","I might not have been able to measure
my heart rate properly, but I found 
a new way to train.");
MsgDisp("主人公","Eh?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("D010200400_02_130");
MsgDisp("Sassa","Sigh......I can't believe my heart rate
rose like that. It's like when you train 
at a high altitude with less oxygen.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D010200400_02_140");
MsgDisp("Sassa","You're really amazing, you know?");
MsgDisp("主人公","Um......");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,1);
VoicePlay("D010200400_02_150");
MsgDisp("Sassa","I'm going to run a bit.
I need to calm down......");
MsgClose();
BGMStop();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ChClose(2);
SEWait();
VoicePlay("D010200400_02_160");
MsgDisp("Sassa","Let's do some high altitude training
again sometime.
Cya.");
SEPlay("EV_SE_DOOR_013");
SEWait();
MsgDisp("主人公","(Sigh, my heart is racing a bit
quickly too......)");
MsgClose();
ScrFadeOut(0);
ChPrmTblAdd(2,0);
