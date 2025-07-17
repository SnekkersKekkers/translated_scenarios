MsgClose();
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,0);
ChMouthOpenLevel(4,0);
VoicePlay("G020420100_04_000");
MsgDisp("Nanatsumori","......");
MsgDisp("主人公","......");
ChEye(4,1);
ChEyeOpenLevel(4,0);
VoicePlay("G020420100_04_010");
MsgDisp("Nanatsumori","......");
MsgDisp("主人公","...｛七ツ森＊｝, are you angry?");
ChEye(4,5);
ChMotion(4,1,1);
ChMouthOpenLevel(4,#1);
VoicePlay("G020420100_04_020");
MsgDisp("Nanatsumori","...Eh?");
MsgDisp("主人公","You're making a scary face...
I thought maybe I did something to upset
you.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,2,1);
VoicePlay("G020420100_04_030");
MsgDisp("Nanatsumori","Haa... sorry.
It's not to do with anything that happened
on our date today.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("G020420100_04_040");
MsgDisp("Nanatsumori","...Conversely, can I ask you something?");
MsgDisp("主人公","Y-Yeah.");
ChEye(4,2);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("G020420100_04_050");
MsgDisp("Nanatsumori","Did I do something to make you dislike me?");
MsgDisp("主人公","Eh?");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("G020420100_04_060");
MsgDisp("Nanatsumori","It hurts.
I'm experiencing my heart being torn open
for the first time.");
ChEyeOpenLevel(4,0);
VoicePlay("G020420100_04_070");
MsgDisp("Nanatsumori","...If you were to dislike me, it would be
the same as the world ending.");
MsgDisp("主人公","｛七ツ森＊｝...");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0,1);
ChMouthOpenLevel(4,#1);
VoicePlay("G020420100_04_080");
MsgDisp("Nanatsumori","PLease...don't come to dislike me.");
MsgDisp("主人公","(｛七ツ森＊｝ seems like he's hurting...
I wonder if there's something I did to
cause this...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
