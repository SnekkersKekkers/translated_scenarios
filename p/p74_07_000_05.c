MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I fell...
Even though it was my last show...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(7,254,0,2,0,#1,#1,0,0);
VoiceEVSPlay(7);
VoicePlay("P740700005_07_000");
MsgDisp("Mikage","｛主人公｝, Are you okay?
Are you hurt?");
MsgDisp("主人公","｛御影＊＊｝... Yes, I'm okay...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P740700005_07_010");
MsgDisp("Mikage","...Good grief, you surprised me.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("P740700005_07_020");
MsgDisp("Mikage","But, that's to be expected. You mesmerized
everyone with your beauty, then in the end
you feel flat on your face, huh?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("P740700005_07_030");
MsgDisp("Mikage","For better or worse, you were still the
leading part today.");
MsgDisp("主人公","Uuugh...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P740700005_07_040");
MsgDisp("Mikage","But for the real thing, the guy next to
you will be there to support you right?");
MsgDisp("主人公","The real thing you say...
you mean my wedding?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P740700005_07_050");
MsgDisp("Mikage","That's right.
I'm sure at that time, you'll remember
today too.");
MsgDisp("主人公","(｛御影＊＊｝, you're kind...
But if I prepared more carefully, I'm sure
this would be a nicer memory...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
