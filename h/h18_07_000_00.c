MsgClose();
BGOpen("sc620",0);
ScrFadeIn(0);
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoicePlay("H180700000_07_000");
MsgDisp("Mikage","So this is the Koshien, it's pretty
amazing.");
MsgDisp("主人公","Ah, ｛御影＊＊｝! Did you come to
support us?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("H180700000_07_010");
MsgDisp("Mikage","Yeah, I never thought I'd be able to step
on the ground at Koshien.
It's thanks to you, you know?");
MsgDisp("主人公","Don't go onto the ground, okay?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("H180700000_07_020");
MsgDisp("Mikage","What a shame.
I'll watch it quietly from the stands.
Your brave figure.");
MsgDisp("主人公","Okay. It won't be easy to win, but we'll
all do our best.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("H180700000_07_030");
MsgDisp("Mikage","You're a good manager.
Get out there and do all you can.");
MsgDisp("主人公","Yes......!");
MsgDisp("主人公","(Alright! I'll support the players as best
I can and win!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7);
