BGOpen("sc310",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_597",1,0.4);
Wait(50,0);
MsgDisp("主人公","(Ah......What a nice breeze.
Having the window seat is a privilege♪)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0,0.8);
Wait(40,0);
ChOpen(1,254,0,0,3,-1,-1,0,0);
VoicePlay("D010100100_01_000");
MsgDisp("Kazama","Eh, you're in a pretty good mood, huh?");
MsgDisp("主人公","｛風真＊＊｝.
There's a really nice breeze right now.");
SEStop("EV_SE_597",2);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D010100100_01_010");
MsgDisp("Kazama","Where?
..................");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("D010100100_01_020");
MsgDisp("Kazama","I don't feel it.");
MsgDisp("主人公","Hehe, it's a habit.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("D010100100_01_030");
MsgDisp("Kazama","Ahh, a habit of yours?
I wouldn't want to disturb a sunbather
with too much time on their hands. Cya.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
Wait(20,0);
SEPlay("EV_SE_598",0,0.8);
Wait(5,0);
MsgDisp("主人公","Woah∈
That was a huge breeze......");
MsgClose();
ScrFadeOut(0,0);
StlOpen("ev_01_08");
StlEye(1,0);
StlMouth(1,0);
SEPlay("EV_SE_617",0.2,0.7,0);
SEStop("EV_SE_598",5);
ScrFadeIn(0);
BGMPlay("BGM_C01_RYOUTA_I",0.01);
VoicePlay("D010100100_01_040");
MsgDisp("Kazama","Are you okay∋");
MsgDisp("主人公","I'm fine.");
StlEyeOpenLevel(1,5);
StlMouth(1,1);
StlMouthOpenLevel(1,0);
VoicePlay("D010100100_01_050");
MsgDisp("Kazama","…………");
MsgDisp("主人公","(It's such an intimate feeling......
Somehow it feels like we're the only
two people in this world right now......)");
StlEye(1,1);
StlMouth(1,1);
StlCheek(1,7);
VoiceEVSPlay(1);
VoicePlay("D010100100_01_060");
MsgDisp("Kazama","｛主人公｝.
You know......");
MsgDisp("主人公","......What?");
SEPlay("EV_SE_597",0,0.8);
StlEyeOpenLevel(1,0);
Wait(16,0);
StlEye(1,0);
StlMouth(1,0);
StlCheek(1,0);
ScrFadeOut(0,1);
VoicePlay("D010100100_44_000");
MsgDisp("School Girl","Gym is next so I'm going to change～
Huh, are those two hiding or something?");
VoicePlay("D010100100_42_010");
MsgDisp("Male Student","Oy, what are you guys doing behind
the curtains∋");
BGMVol(0.5,2);
StlClose();
SEPlay("EV_SE_545",0.2);
SEWait();
SEPlay("EV_SE_599");
BGOpen("sc310",0);
MsgClose();
SEWait();
ChOpen(1,254,7,1,1,0,-1,10,0);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("D010100100_01_070");
MsgDisp("Kazama","It's windy so I'm closing the window.");
SEPlay("EV_SE_GAYA_017");
MsgDisp("主人公","(｛風真＊＊｝ was going to say something
earlier......)");
SEStop("EV_SE_GAYA_017",1.5);
BGMStop(2);
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
Wait(60,1);
ChPrmTblAdd(1,0);
