BGOpen("ex170",0);
ScrFadeIn(0);
VoiceEVSPlay(4);
VoicePlay("T020411000_04_000");
MsgDisp("Nanatsumori?","｛主人公｝.");
SEPlay("EV_SE_872",0.5);
Wait(50,0);
ChNanaType(0);
ChOpen(4,254,0,4,0,#1,#1,0,0);
MsgDisp("主人公","Eh...
｛七ツ森＊｝∋");
ChEye(4,2);
ChMouth(4,4);
VoicePlay("T020411000_04_010");
MsgDisp("Nanatsumori","Don't go any further.");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,1,1);
VoicePlay("T020411000_04_020");
MsgDisp("Nanatsumori","...I ask of you.");
MsgDisp("主人公","......");
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("T020411000_04_030");
MsgDisp("Nanatsumori","Once you've sorted out your feelings, come
with me.");
MsgClose();
ScrFadeOut(0);
ChClose(4);
ChClose(4);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_DOOR_019");
Wait(30,0);
BGOpen("sc300",1);
ScrFadeIn(0);
SEWait();
MsgDisp("主人公","The classroom...");
MsgClose();
ScrFadeOut(0,1);
MsgType(1);
BGOpen("ex980",0);
ChLayout(0);
ChNanaType(0);
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,0);
ChMouthOpenLevel(4,0);
ChOpen(4,40,0,0,0,#1,#1,0,0);
BGMPlay("BGM_C04_NANA_KOKU",0.01);
ScrFadeIn(0);
ChEye(4,4);
VoicePlay("T020411000_04_040");
MsgDisp("Nanatsumori","......");
ChMouthOpenLevel(4,#1);
VoicePlay("T020411000_04_050");
MsgDisp("Nanatsumori","I know it's unfair to bring you back here
but...");
ChEye(4,1);
ChMouth(4,0);
ChMotion(4,2);
VoicePlay("T020411000_04_060");
MsgDisp("Nanatsumori","I can't stand it.
Everything that's going to happen in that
church.");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("T020411000_04_070");
MsgDisp("Nanatsumori","Even if it means twisting your fate, I
can't give up.");
MsgDisp("主人公","｛七ツ森＊｝...");
ChEye(4,2);
ChMouth(4,4);
VoicePlay("T020411000_04_080");
MsgDisp("Nanatsumori","I treasure the long hours we used to spend
here together...");
ChEye(4,1);
ChMouth(4,0);
ChMotion(4,2,1);
ChEyeOpenLevel(4,0);
VoicePlay("T020411000_04_090");
MsgDisp("Nanatsumori","I absolutely cannot ignore that!");
MsgClear();
ChClose(4);
ChCustomLayout(4,5,0,-2.8);
Wait(60);
SEPlay("EV_SE_544");
ChNanaType(0);
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,0);
ChOpen(4,40,0,4,0,#1,#1,0,0,0,120);
VoicePlay("T020411000_04_100");
MsgDisp("Nanatsumori","...I like you.");
ChEye(4,2);
ChMouth(4,0);
VoicePlay("T020411000_04_110");
MsgDisp("Nanatsumori","Even if it means using under-handed
tactics, I don't want to hand you over to
anyone.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,3,1);
VoiceEVSPlay(4);
VoicePlay("T020411000_04_120");
MsgDisp("Nanatsumori","｛主人公｝, I like you.");
