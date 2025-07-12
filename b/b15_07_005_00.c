BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(7,255,3,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B150700500_07_000");
MsgDisp("Mikage","Today is a full moon...");
MsgDisp("主人公","｛御影＊＊｝...?");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
ChClose(7);
ChLayout(0);
MsgClose();
ChOpen(7,255,0,1,0,#1,#1,0,0);
VoicePlay("B150700500_07_010");
MsgDisp("Mikage","Are you prepared?");
ChEye(7,1);
ChMouth(7,4);
ChMotion(7,3);
VoicePlay("B150700500_07_020");
MsgDisp("Mikage","Wuー......");
ChEye(7,1);
ChMouth(7,1);
ChMotion(7,5);
VoicePlay("B150700500_07_030");
MsgDisp("Mikage","Gaw∈");
MsgDisp("主人公","...Eh?");
MsgClose();
ScrFadeOut(0);
ChLayout(1);
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,4);
ScrFadeIn(0);
VoicePlay("B150700500_07_040");
MsgDisp("Mikage","Haa...
Could you act a bit more surprised?
Ah-, how embarrassing...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B150700500_07_050");
MsgDisp("Mikage","There's no point in saying it to
someone unaware and defenseless.
I tried to get revenge,
and this is what happens.");
MsgDisp("主人公","｛御影＊＊｝, sorry.
Did I go too far again?");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("B150700500_07_060");
MsgDisp("Mikage","Yeah, yeah, that's enough.
Now that you mention it, I said it at
the beginning, didn't I?
Do as you like.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B150700500_07_070");
MsgDisp("Mikage","I knew that myself.
No matter how far you took it,
there was no chance of winning.");
MsgDisp("主人公","Chance of winning?");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,4);
VoicePlay("B150700500_07_080");
MsgDisp("Mikage","Yeah, I'm running away with my 
tail between my legs.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","(｛御影＊＊｝, I'm sorry...)");
MsgClose();
ScrFadeOut(0,0);
