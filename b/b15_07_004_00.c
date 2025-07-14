BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(7,255,1,2,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B150700400_07_000");
MsgDisp("Mikage","Haha, hey, I can't help but laugh.");
MsgDisp("主人公","I'm sorry, did I touch you too much.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("B150700400_07_010");
MsgDisp("Mikage","Yeah, I thought I could guard against it,
but that was impossible.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("B150700400_07_020");
MsgDisp("Mikage","You were like the 
Thousand-Armed Kannon.");
MsgDisp("主人公","Umm...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B150700400_07_030");
MsgDisp("Mikage","Hey, You said you were caught in a trance,
unaware. Once the waves are in motion, you
won't be able to stop it, you know?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B150700400_07_040");
MsgDisp("Mikage","...Are you ready for that?");
MsgDisp("主人公","Am I ready....");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B150700400_07_050");
MsgDisp("Mikage","If you don't, stop it here.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,4);
VoicePlay("B150700400_07_060");
MsgDisp("Mikage","By the way, I don't have that kind of
resolve either.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
SEWait();
MsgDisp("主人公","(｛御影＊＊｝ seems a bit different to
usual.
I wonder what he means by resolve...)");
MsgClose();
ScrFadeOut(0,0);
