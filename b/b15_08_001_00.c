MsgClose();
BGOpen("ho000",2);
ChLayout(1);
ChOpen(8,255,0,2,2,#1,#1,7,0);
ScrFadeIn(0);
ChMotion(8,2,1);
VoicePlay("B150800100_08_000");
MsgDisp("Shirahane","Turns out it's no good!
Wait!");
MsgDisp("主人公","Eh?");
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,0,1);
VoicePlay("B150800100_08_010");
MsgDisp("Shirahane","When you tickle me, I feel strange.");
MsgDisp("主人公","?");
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,4,1);
VoicePlay("B150800100_08_020");
MsgDisp("Shirahane","Hmー...
I wanna explain how, 
but it's hard.");
ChEye(8,0);
ChMouth(8,4);
ChMotion(8,0,1);
VoicePlay("B150800100_08_030");
MsgDisp("Shirahane","Right, hey.
Like my heart's poundin' 
when I think of you——");
ChEye(8,2);
ChMouth(8,2);
ChMotion(8,4,1);
ChCheek(8,10);
VoicePlay("B150800100_08_040");
MsgDisp("Shirahane","∈
No! I can't say it after all!");
MsgDisp("主人公","｛大地＊＊｝?");
ChEye(8,2);
ChMouth(8,4);
ChEyeOpenLevel(8,8);
VoicePlay("B150800100_08_050");
MsgDisp("Shirahane","Am I really that obscene...");
ChEye(8,4);
ChMouth(8,4);
ChMotion(8,0,1);
ChEyeOpenLevel(8,10);
VoicePlay("B150800100_08_060");
MsgDisp("Shirahane","Yeah.
I'll cool my head as I go home.
Well then, see ya.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(8,0,30);
MsgDisp("主人公","(｛大地＊＊｝'s face is red...)");
MsgClose();
ScrFadeOut(0,0);
