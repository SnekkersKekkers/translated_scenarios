MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa, I fell...
My dress also got drity...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(5,254,0,4,4,-1,-1,0,0);
VoiceEVSPlay(5);
VoicePlay("P740500003_05_000");
MsgDisp("Hiiragi","｛主人公｝, are you alright?");
MsgDisp("主人公","Yeah, but it was a fail...");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P740500003_05_010");
MsgDisp("Hiiragi","You weren't injured.
If you get out the stains from the dress,
It seems as though it'll also be fine.");
MsgDisp("主人公","Y-yeah...");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("P740500003_05_020");
MsgDisp("Hiiragi","Isn't the rest up to you to decide
how to make the most out of this failure?");
MsgDisp("主人公","(That's right.
I have to do some self-reflection...
I need to participade in 
club activities more properly.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
