MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Uuugh, I fell...it was a failure.)");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
ChOpen(2,254,3,2,0,#1,#1,0,0);
VoicePlay("P740200001_02_000");
MsgDisp("Sassa","Are you alright?
You're not injured?");
MsgDisp("主人公","Yeah.
But, I failed...");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("P740200001_02_010");
MsgDisp("Sassa","I'm glad you're not injured.
Well, maybe you just didn't get enough
practice on the modelling side.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("P740200001_02_020");
MsgDisp("Sassa","But, that's not related to whether your
work is good, or whether the show was a
success.");
MsgDisp("主人公","(Thank you, ｛颯砂＊＊｝...I should have
participated more in club more during the
preparation period, and practiced more for
the show.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
