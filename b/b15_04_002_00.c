MsgClose();
BGOpen("ho000",2);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,253,0,4,1,#1,#1,5,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B150400200_04_000");
MsgDisp("Nanatsumori","Ahー...hey!");
MsgDisp("主人公","∈");
ChEye(4,0);
ChMotion(4,0,1);
VoicePlay("B150400200_04_010");
MsgDisp("Nanatsumori","Even I'm trying really hard too.
Understand?");
MsgDisp("主人公","Ummm...");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("B150400200_04_020");
MsgDisp("Nanatsumori","Ahー, Heyー...
Ah～...");
MsgDisp("主人公","Sorry, 
I won't touch you anymore.");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,0,1);
ChMouthOpenLevel(4,0);
VoicePlay("B150400200_04_030");
MsgDisp("Nanatsumori","............");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("B150400200_04_040");
MsgDisp("Nanatsumori","Girls are sneaky.
With just one, \"sorry\" they can control a
girl's heart.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("B150400200_04_050");
MsgDisp("Nanatsumori","But... even I don't dislike it. If I
could, I would also——");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B150400200_04_060");
MsgDisp("Nanatsumori","I'll stop.
I'm starting to feel pathetic...");
MsgDisp("主人公","｛七ツ森＊｝?");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B150400200_04_070");
MsgDisp("Nanatsumori","I wonder if I'm breaking down...
Well, I'll stop here.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4,0,30);
MsgDisp("主人公","(｛七ツ森＊｝...?)");
MsgClose();
ScrFadeOut(0,0);
