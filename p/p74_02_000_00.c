MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad, seems like it was somewhat of a
success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(2,254,3,0,4,#1,#1,0,0);
VoicePlay("P740200000_02_000");
MsgDisp("Sassa","Congratulations.
You did it.");
MsgDisp("主人公","Yes, thank you.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("P740200000_02_010");
MsgDisp("Sassa","When you appeared on stage, the applause
and cheers were the loudest.");
MsgDisp("主人公","That was thanks to ｛颯砂＊＊｝, huh?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("P740200000_02_020");
MsgDisp("Sassa","No, it wasn't.
I was quiet.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("P740200000_02_030");
MsgDisp("Sassa","It's proof of how you mesmerized everyone
in the audience. Hurray!");
MsgDisp("主人公","(I was praised by ｛颯砂＊＊｝!
I'm happy!
A huge success.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
