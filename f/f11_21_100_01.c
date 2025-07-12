BGOpen("sc710",0);
MsgClose();
ChOpen(21,254,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("F112110001_21_000");
MsgDisp("Michiru","Ah, Mari!");
MsgDisp("主人公","｛みちる＊｝.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("F112110001_21_010");
MsgDisp("Michiru","Hey, don't you feel like
the number of couples always shoots up
right before the festival?");
MsgDisp("主人公","I guess...?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("F112110001_21_020");
MsgDisp("Michiru","It absolutely seems like it.
Yesterday, many of my classmates were
single, but today, they're couples...");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
ChCheek(21,5);
VoicePlay("F112110001_21_030");
MsgDisp("Michiru","Oh no... I don't know why I
care about this stuff.");
MsgDisp("主人公","...｛みちる＊｝, do you want to fall in
love?");
ChEye(21,5);
ChMouth(21,4);
ChMotion(21,0);
ChCheek(21,10);
VoicePlay("F112110001_21_040");
MsgDisp("Michiru","∋");
ChEye(21,1);
ChMouth(21,4);
ChMotion(21,5);
ChEyeOpenLevel(21,0);
VoicePlay("F112110001_21_050");
MsgDisp("Michiru","No way.
I'm going to the rooftop to cool off!");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(21,0,30);
MsgDisp("主人公","(｛みちる＊｝, your face was red
again this year...)");
MsgClose();
ScrFadeOut(0,0);
