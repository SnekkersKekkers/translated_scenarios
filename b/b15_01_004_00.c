BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,2,-1,-1,7,0);
ScrFadeIn(0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("B150100400_01_000");
MsgDisp("Kazama","That's enough.
Do it until you're satisfied.");
MsgDisp("主人公","Eh?
Ah, sorry.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
ChCheek(1,0);
VoicePlay("B150100400_01_010");
MsgDisp("Kazama","I see. Just as I thought.
You stop as soon as I tell
you to continue.");
MsgDisp("主人公","That's not what I intended...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("B150100400_01_020");
MsgDisp("Kazama","That's why it's fine.
Whether it's in front of your house, 
at school, wherever.
Do as you like and go ahead?");
MsgDisp("主人公","Even if you say that...
I'm sorry for getting caried away.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("B150100400_01_030");
MsgDisp("Kazama","Eh...
N-No, don't make that face.
This doesn't mean I'm mad.");
MsgDisp("主人公","But, I made you uncomfortable
didn't I?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B150100400_01_040");
MsgDisp("Kazama","Well, it's fine as long as you know.
That's why you should do as you like.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B150100400_01_050");
MsgDisp("Kazama","I feel like I've reached 
the other side of impulse");
MsgDisp("主人公","The other side of impulse?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B150100400_01_060");
MsgDisp("Kazama","Right, like enlightenment?
That's why you shouldn't hold back either.
See you.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(｛風真＊＊｝ was acting somewhat weird
right? I wonder if I made him feel bad...)");
MsgClose();
ScrFadeOut(0,0);
