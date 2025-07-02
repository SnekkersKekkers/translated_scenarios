ChLayout(1);
BGOpen("sc000",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yawn......So sleepy......
I knew I had cleaning duty today, I
should have gone to bed earlier......)");
SEPlay("EV_SE_749",0.1,0.4);
VoicePlay("D010700300_07_000");
MsgDisp("Mikage?","Hey!");
MsgDisp("主人公","......Hm?");
SEWait();
VoicePlay("D010700300_07_010");
MsgDisp("Mikage","Morning!
What a nice day today!");
SEPlay("EV_SE_748",0,0.8);
Wait(60,0);
MsgClose();
ScrFadeOut(0);
StlOpen("ev_07_05");
StlEye(7,0);
StlMouth(7,0);
BGMPlay("BGM_C07_MIKAGE_C",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Ehh∈　｛御影＊＊｝ ∋");
VoicePlay("D010700300_07_020");
MsgDisp("Mikage","Don't walk around looking like you're
about to fall asleep!");
MsgClose();
SEPlay("EV_SE_749",1);
ScrFadeOut(0,1);
StlClose();
BGMVol(0.5,2);
BGOpen("sc000",0);
ScrFadeIn(0);
SEPlay("EV_SE_750");
SEWait();
VoicePlay("D010700300_07_030");
MsgDisp("Mikage","Okay, first thing first!
Finish cleaning duty quickly!");
BGMStop(3);
Wait(20,0);
SEPlay("EV_SE_751");
MsgDisp("主人公","Y-Yes sir!");
MsgDisp("主人公","(He's gone......)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(7,0);
