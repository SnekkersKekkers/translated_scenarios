ChClose(8);
BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ho000",0);
MsgClose();
ChOpen(8,255,0,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for walking me home.
Well-");
ChEye(8,4);
ChMouth(8,5);
ChMotion(8,1,1);
VoicePlay("K020801000_08_000");
MsgDisp("Shirahane","Ah, wait jus' a bit.");
MsgDisp("主人公","Hm?");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("K020801000_08_010");
MsgDisp("Shirahane","C'mon, there's still somethin' left today,
right?");
MsgDisp("主人公","Something left...?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("K020801000_08_020");
MsgDisp("Shirahane","Your birthday.");
MsgDisp("主人公","Eh...
｛大地＊＊｝, you remembered?");
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("K020801000_08_030");
MsgDisp("Shirahane","'Course.
'S'a happy day for everyone around the
world, how could I forget it?");
ChEye(8,3);
ChMouth(8,3);
ChEyeOpenLevel(8,0);
VoicePlay("K020801000_08_040");
VoiceEVSPlay(8);
MsgDisp("Shirahane","Happy birthday,
｛主人公｝.");
MsgDisp("主人公","Thanks!");
ChEye(8,3);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("K020801000_08_050");
MsgDisp("Shirahane","And, here.
Take this.");
MsgDisp("主人公","Ah... a present?");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,2,1);
ChEyeOpenLevel(8,0);
VoicePlay("K020801000_08_060");
MsgDisp("Shirahane","Heheh.
A New Year's gift from me▼");
MsgDisp("主人公","Wah, thank you so much!");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("K020801000_08_070");
MsgDisp("Shirahane","Well, see ya.
Lookin' forward to this year too!");
MsgDisp("主人公","Yeah, please take care of me too!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(8,0,30);
SEWait();
MsgDisp("主人公","(I'm so happy...
This year is going to be a good one!)");
MsgClose();
ScrFadeOut(0,0);
