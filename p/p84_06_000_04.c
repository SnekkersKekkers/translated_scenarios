MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc710",0);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,254,2,0,0,0,-1,0,0);
VoicePlay("P840600004_06_000");
MsgDisp("Himuro","I'm glad we found that 
girl's Mom quickly.");
MsgDisp("主人公","Yeah, she was a good kid.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("P840600004_06_010");
MsgDisp("Himuro","You responded well.
You were used to dealing with kids, 
And you described her features p
perfectly on the school broadcast.");
MsgDisp("主人公","Is that so?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("P840600004_06_020");
MsgDisp("Himuro","Yeah.
I thought you were reliable.
As expected.");
MsgDisp("主人公","(Yay!
｛氷室＊＊｝ praised me!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
