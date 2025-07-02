MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Uugh, I fell...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,4,4,4,-1,-1,0,1);
ChOpen(22,254,0,2,0,-1,-1,0,2);
VoicePlay("P740D00001_21_000");
MsgDisp("Michiru","Are you alright?
Seems like your legs are shaking....");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,0);
VoicePlay("P740D00001_22_000");
MsgDisp("Hikaru","Even though your clothes were so lovely～.
Maybe yoru body is a bit stiff?");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("P740D00001_21_010");
MsgDisp("Michiru","It can't be helped.
You were nervous for the show.");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("P740D00001_22_010");
MsgDisp("Hikaru","Next time we can teach you 
our runway trick. Okay?");
MsgDisp("主人公","(Haa... that was a huge fail...)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
