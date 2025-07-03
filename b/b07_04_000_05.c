MsgDisp("主人公","What are your hobbies, ｛七ツ森＊｝?");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("B070400000_04_260");
MsgDisp("Nanatsumori","Various things.");
MsgDisp("主人公","More specifically.");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,2,1);
ChEyeOpenLevel(4,8);
VoicePlay("B070400000_04_270");
MsgDisp("Nanatsumori","Mmm～....");
ChEye(4,0);
ChMouth(4,2);
VoicePlay("B070400000_04_280");
MsgDisp("Nanatsumori","It's about time I tell...
No, I can't. These things need
to be done in order.");
ChEye(4,1);
ChMouth(4,0);
VoicePlay("B070400000_04_290");
MsgDisp("Nanatsumori","Yeah, as I thought, it's no good.");
MsgDisp("主人公","???
Whta's no good?");
ChEye(4,0);
ChMouth(4,0);
ChEyeOpenLevel(4,1);
VoicePlay("B070400000_04_300");
MsgDisp("Nanatsumori","…………");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B070400000_04_310");
MsgDisp("Nanatsumori","Right right.
One of those hobbies is photography.
ＯＫ?");
SEPlay("EV_SE_045");
SEWait();
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("B070400000_04_320");
MsgDisp("Nanatsumori","Save complete.
Yes, good work～");
MsgDisp("主人公","Ah, hey!
I must've been making a really
weird face just now∋");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B070400000_04_330");
MsgDisp("Nanatsumori","No, no. It was the best.
I think I'll make this my wallpaper.");
MsgDisp("主人公","(That's... embarrassing～!)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(4,-1);
ChMouthOpenLevel(4,-1);
ChCheek(4,0);
