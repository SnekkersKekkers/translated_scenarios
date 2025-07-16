BGOpen("ex080",0);
ChLayout(2);
ScrFadeIn(0);
MsgDisp("主人公","(What should I eat today......)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(1,254,0,0,0,#1,#1,0,0,0,30);
ChOpen(2,254,0,0,4,#1,#1,0,1,0,30);
ChOpen(6,254,0,0,0,#1,#1,0,2,0,30);
VoiceEVSPlay(1);
VoicePlay("D120A00000_01_000");
MsgDisp("Kazama","｛主人公｝, let's eat
together.");
MsgDisp("主人公","Ah, lunch with everyone?
Hehe, we're really close, huh?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D120A00000_06_000");
MsgDisp("Himuro","What's with that giggle?
This is just normal.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,2);
VoicePlay("D120A00000_02_000");
MsgDisp("Sassa","Inori, are you hungry?
Don't be so grouchy.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("D120A00000_01_010");
MsgDisp("Kazama","Come on, let's go.");
BGMStop();
MsgClose();
ScrFadeOut(0);
EnvAutoSet(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(1,0,0);
ChClose(2,0,0);
ChClose(6,0,0);
StlOpen("ev_0a_02");
StlEye(1,0);
StlMouth(1,0);
StlEye(2,0);
StlMouth(2,0);
StlEye(6,0);
StlMouth(6,0);
EnvPlay("SE_ENV_BG_EX090_CS0",1.5);
BGMPlay("BGM_SCHOOL_LUNCH",0.01,0.9);
ScrFadeIn(0);
Wait(40,0);
StlMouth(1,1);
VoicePlay("D120A00000_01_020");
MsgDisp("Kazama","Huh......
This is really a big serving, isn't it?");
VoicePlay("D120A00000_47_000");
MsgDisp("Staff","A service for the young master▼
Itadakimasu.");
StlEyeOpenLevel(1,5,1);
StlMouth(1,0);
VoicePlay("D120A00000_01_030");
MsgDisp("Kazama","Please stop.
Don't call me \"Young Master\".");
MsgDisp("主人公","Hehe. A lot of people call
｛風真＊＊｝ a young master,
huh?");
StlEyeOpenLevel(1,#1);
StlEye(6,0);
StlMouth(6,1);
VoicePlay("D120A00000_06_010");
MsgDisp("Himuro","Ryota-senpai's family are celebrities in
Habataki City.");
MsgClose();
Wait(30,0);
StlNear(1,0,30);
Wait(40,0);
StlEye(2,1);
StlMouth(2,1);
VoicePlay("D120A00000_02_010");
MsgDisp("Sassa","Auntie!
This is way too much.");
MsgDisp("主人公","Ehh∋
｛颯砂＊＊｝'s serving......");
StlEye(1,1);
StlMouth(1,1);
VoicePlay("D120A00000_01_040");
MsgDisp("Kazama","Uh......");
StlEye(6,1);
StlMouth(6,1);
VoicePlay("D120A00000_06_020");
MsgDisp("Himuro","The young master lost, huh?");
StlEyeOpenLevel(1,0);
StlMouth(1,1);
VoicePlay("D120A00000_01_050");
MsgDisp("Kazama","Were we playing a game?");
StlEye(2,0,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5,1);
VoicePlay("D120A00000_02_020");
MsgDisp("Sassa","Crap.
Everyone back up a bit, it's going to
spill.");
StlEye(6,1,0);
StlMouth(6,1);
StlEyeOpenLevel(6,0,1);
VoicePlay("D120A00000_06_030");
MsgDisp("Himuro","It looks like Ryota-senpai isn't the only
one who gets special treatment huh?");
StlEye(1,1);
StlMouth(1,1);
VoicePlay("D120A00000_01_060");
MsgDisp("Kazama","......Shut up.");
MsgDisp("主人公","(｛風真＊＊｝ looks a bit annoyed......?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
StlClose();
ChLayout(1);
EnvAutoSet(1);
ChPrmTblAdd(1,0);
ChPrmTblAdd(2,0);
ChPrmTblAdd(6,0);
