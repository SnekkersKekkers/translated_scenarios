ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ScrFadeIn(0);
VoicePlay("P840500000_05_000");
MsgDisp("Hiiragi","The guests were extremely pleased.");
MsgDisp("主人公","Really?
I'm glad.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("P840500000_05_010");
MsgDisp("Hiiragi","You were considerate enough to write the
names of the guests and messages on the
maps you gave them.... As expected of you.");
MsgDisp("主人公","If they were pleased with it, I'm happy.");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,3);
Wait(20,1);
VoicePlay("P840500000_05_020");
MsgDisp("Hiiragi","It was a huge success.
Thank you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
MsgDisp("主人公","(Yay!
A huge success∈)");
MsgClose();
ScrFadeOut(0,0);
