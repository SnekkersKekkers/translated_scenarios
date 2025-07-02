BGOpen("ex110",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Today there's a track meet......
I wish everyone the best.)");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
ChOpen(2,37,3,0,4,-1,-1,0,0);
VoiceEVSPlay(2);
VoicePlay("D010200600_02_000");
MsgDisp("Sassa","｛主人公｝.
After this is the １１０ Meter Hurdle.");
MsgDisp("主人公","Right. Good luck.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("D010200600_02_010");
MsgDisp("Sassa","I'm hoping for clean jumps.
Let's see if those adjustments I made
will help.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,1);
VoicePlay("D010200600_02_020");
MsgDisp("Sassa","I'm going.");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ChClose(2);
MsgDisp("主人公","(Since the last interhigh ｛颯砂＊＊｝
has slowly been improving. I'm looking
forward to seeing today's results!)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40);
MsgDisp("主人公","It's starting!");
MsgClose();
SEPlay("EV_SE_612");
BGMPlay("BGM_C02_SASSA_I",0.01);
Wait(50);
SEPlay("EV_SE_613",0,0.8);
Wait(50,0);
MsgDisp("主人公","(Yes, nice start!
He's making good time before the first
hurdle!)");
SEPlay("EV_SE_614");
MsgClose();
ChClose(2,0,0);
StlOpen("ev_02_10");
StlEye(2,0);
StlMouth(2,0);
ScrFadeIn(0);
StlEye(2,0);
StlMouth(2,0);
VoicePlay("D010200600_02_030");
MsgDisp("Sassa","Ha, ha, ha......");
MsgDisp("主人公","Making good time!");
MsgDisp("主人公","(Yeah, the jumps are smooth......
He's got a good rhythm too!)");
StlEye(2,0);
StlMouth(2,0);
VoicePlay("D010200600_02_040");
MsgDisp("Sassa","Ha, ha, ha......");
MsgDisp("主人公","｛颯砂＊＊｝, try your best!");
SEStop("EV_SE_614",2);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(60);
BGMVol(0.5,2);
ScrFadeIn(0);
ChOpen(2,37,3,0,3,-1,-1,0,0);
VoiceEVSPlay(2);
VoicePlay("D010200600_02_050");
MsgDisp("Sassa","｛主人公｝.");
MsgDisp("主人公","｛颯砂＊＊｝, that was amazing!
It's your personal best∈");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("D010200600_02_060");
MsgDisp("Sassa","Yeah. Just like my senpai told me
during the second interhigh. I need to
do it my way until the end.");
MsgDisp("主人公","Yeah.
I'm sure you can do it and win it all!");
ChEye(2,4);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("D010200600_02_070");
MsgDisp("Sassa","Alright!
I'll give it my all too for the final
events.");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
BGMStop();
MsgClose();
ChClose(2);
MsgDisp("主人公","(Ever since ｛颯砂＊＊｝ got encouraged
from his senpai, his time keeps
improving......!)");
ChPrmTblAdd(2,0);
