MsgClose();
BGOpen("ho000",2);
ChLayout(1);
ChNanaType(-1);
ChOpen(4,255,0,0,1,-1,-1,0,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B150400400_04_000");
MsgDisp("Nanatsumori","I told you didn't I?");
MsgDisp("主人公","Eh?");
VoicePlay("B150400400_04_010");
MsgDisp("Nanatsumori","Touching me all over.
You've already destroyed me.
I told you next time will 
already be no good.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B150400400_04_020");
MsgDisp("Nanatsumori","You're underestimating me.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
ChClose(4,0,30);
ChLayout(0);
ChNanaType(-1);
ChOpen(4,255,0,0,0,-1,-1,8,0,0,60);
VoicePlay("B150400400_04_030");
MsgDisp("Nanatsumori","I'm serious.");
MsgDisp("主人公","｛七ツ森＊｝∋");
ChEye(4,2);
ChMouth(4,4);
VoicePlay("B150400400_04_040");
MsgDisp("Nanatsumori","Idiot.");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_551");
SEWait();
VoicePlay("B150400400_04_050");
MsgDisp("Nanatsumori","Even though I really
wanted to cherish you...");
VoicePlay("B150400400_04_060");
MsgDisp("Nanatsumori","This is making me lose confidence.
Come on, understand... ");
MsgDisp("主人公","｛七ツ森＊｝……");
MsgClose();
ScrFadeIn(0);
ChMouthOpenLevel(4,0);
VoicePlay("B150400400_04_070");
MsgDisp("Nanatsumori","…………");
MsgDisp("主人公","…………");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B150400400_04_080");
MsgDisp("Nanatsumori","If you want, I can 
do more than this?");
MsgDisp("主人公","That...");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,3,1);
ChCheek(4,0);
VoicePlay("B150400400_04_090");
MsgDisp("Nanatsumori","Pfft!
You really are a weirdoー.");
MsgDisp("主人公","Uugh...");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B150400400_04_100");
MsgDisp("Nanatsumori","This was payback for everything
until now. See you!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4,0,30);
MsgDisp("主人公","(My heart is thudding really loudly...)");
MsgClose();
ScrFadeOut(0,0);
