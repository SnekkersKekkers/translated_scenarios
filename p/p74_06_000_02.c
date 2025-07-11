MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad!
It seems like it was a success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,254,0,0,4,-1,-1,0,0);
VoicePlay("P740600002_06_000");
MsgDisp("Himuro","Good work.
It was beautiful.");
MsgDisp("主人公","Really?
Thank you!");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("P740600002_06_010");
MsgDisp("Himuro","What did you think? It seemed like
everyone was completely captivated. I'd
like to hear your thoughts on that.");
MsgDisp("主人公","(Yay! A huge success!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
