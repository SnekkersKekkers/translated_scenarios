BGOpen("sc530",0);
BGMPlay("BGM_C07_MIKAGE_A");
MsgClose();
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoiceEVSPlay(7);
VoicePlay("L060700000_07_000");
MsgDisp("Mikage","｛主人公｝.");
MsgDisp("主人公","｛御影＊＊｝, what is it?");
VoicePlay("l060700003_07_010");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
MsgDisp("Mikage","This is thanks for the chocolate.
Pick the one you want.
It's fortune candy.");
MsgDisp("主人公","Um, thanks.");
SEPlay("EV_SE_668");
SEWait();
VoicePlay("l0607000033_07_020");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
MsgDisp("Mikage","You got...\"
Good luck\".
See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
MsgClose();
ChClose(7);
Wait(60);
MsgDisp("主人公","(Hm.
This is definitely obligatory...)");
MsgClose();
ScrFadeOut(0,0);
