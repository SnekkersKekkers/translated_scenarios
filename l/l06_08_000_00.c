BGOpen("sc130",1);
ChLayout(1);
ScrFadeIn(0);
BGMPlay("BGM_C08_DAICHI_A",0.01);
MsgClose();
ChOpen(8,254,0,3,3,#1,#1,0,0);
VoiceEVSPlay(8);
VoicePlay("L060800000_08_000");
MsgDisp("Shirahane","｛主人公｝.");
MsgDisp("主人公","Ah, ｛大地＊＊｝! What's up?");
ChEye(8,0);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("L060800000_08_010");
MsgDisp("Shirahane","I got you a gift for White Day.
Take this.");
SEPlay("EV_SE_665");
SEWait();
MsgDisp("主人公","Thanks.");
ChMotion(8,0,1);
VoicePlay("L060800000_08_020");
MsgDisp("Shirahane","Well, I'm headin' home now.
See ya!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(8);
MsgDisp("主人公","(Hm......
This is obligatory.)");
MsgClose();
ScrFadeOut(0,0);
