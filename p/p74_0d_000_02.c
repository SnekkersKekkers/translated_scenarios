MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yay, it was a huge success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,0,3,-1,-1,0,1);
ChOpen(22,254,0,3,3,-1,-1,0,2);
VoicePlay("P740D00002_21_000");
MsgDisp("Michiru","That was a splendid runway.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,2,1);
ChEyeOpenLevel(22,0);
VoicePlay("P740D00002_22_000");
MsgDisp("Hikaru","You were an uber cute princess～▼");
MsgDisp("主人公","Thank you!");
ChEye(21,3);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P740D00002_21_010");
MsgDisp("Michiru","Hey, how about taking a
commemorative photo with us?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P740D00002_22_010");
MsgDisp("Hikaru","Let's do it, let's do it! I want to take a
photo with princess Mari♪");
MsgDisp("主人公","(Yay!
The show was a huge success1)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
