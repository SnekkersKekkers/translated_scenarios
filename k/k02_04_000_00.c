BGOpen("ho100",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
MsgDisp("主人公","Coming!");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.5);
BGMPlay("BGM_C04_NANA_A");
ChNanaType(#1);
ChOpen(4,255,0,0,0,#1,#1,0,0,0,60);
VoicePlay("K020400000_04_000");
MsgDisp("Nanatsumori","Evening.");
MsgDisp("主人公","｛七ツ森＊｝!?
Um, what's up?");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("K020400000_04_010");
MsgDisp("Nanatsumori","What's up?
There isn't a girl who'd forget their own
birthday, right?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoiceEVSPlay(4);
VoicePlay("K020400000_04_020");
MsgDisp("Nanatsumori","｛主人公｝, happy
birthday.");
MsgDisp("主人公","Thank you, ｛七ツ森＊｝.");
ChMotion(4,1,1);
VoicePlay("K020400000_04_030");
MsgDisp("Nanatsumori","And...... here.
A present.");
SEPlay("EV_SE_665");
SEWait();
MsgDisp("主人公","Wah, thank you!
Can I open it?");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("K020400000_04_040");
MsgDisp("Nanatsumori","L, look at it later!
I'm too nervous to see your reaction.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("K020400000_04_050");
MsgDisp("Nanatsumori","Well, see you at school.
Night.");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMStop();
MsgClose();
ChClose(4,0,30);
Wait(30);
MsgDisp("主人公","(I got a present from
｛七ツ森＊｝! )");
MsgClose();
ScrFadeOut(0,0);
