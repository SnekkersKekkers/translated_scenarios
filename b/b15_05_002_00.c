BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(5,255,1,2,2,0,-1,0,0);
ScrFadeIn(0);
VoicePlay("B150500200_05_000");
MsgDisp("Hiiragi","Phew.
You completely change 
when it gets dark.");
MsgDisp("主人公","eh?");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("B150500200_05_010");
MsgDisp("Hiiragi","You start doing that when it 
becomes dark on the way home,
don't you?");
MsgDisp("主人公","By \"that\"...
do you mean skinship?");
ChEye(5,4);
ChMotion(5,2);
VoicePlay("B150500200_05_020");
MsgDisp("Hiiragi","That's one way to put it.
One after the other, one after the other, 
in rapid succession...
I can't evade them all.");
ChEye(5,2);
ChEyeOpenLevel(5,0);
VoicePlay("B150500200_05_030");
MsgDisp("Hiiragi","Haa, you're like a cat
with perfect nightvision.");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("B150500200_05_040");
MsgDisp("Hiiragi","Is it alright?
I may not be able to evade them, 
but I can catch them.");
MsgDisp("主人公","Eh, catch?");
ChMotion(5,4);
VoicePlay("B150500200_05_050");
MsgDisp("Hiiragi","Yes.
I'll block your movements and 
perform a counterattack.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("B150500200_05_060");
MsgDisp("Hiiragi","If you don't want that, 
you should stop here.");
MsgDisp("主人公","Y-Yeah.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B150500200_05_070");
MsgDisp("Hiiragi","As long as you understand.
I'll see you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
MsgDisp("主人公","(Block my movements...
I wonder what he'll do to me?)");
MsgClose();
ScrFadeOut(0,0);
