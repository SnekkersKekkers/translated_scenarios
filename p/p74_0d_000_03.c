MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Uugh, I fell...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,4,4,4,-1,-1,0,1);
ChOpen(22,254,0,2,2,-1,-1,0,2);
VoicePlay("P740D00003_21_000");
MsgDisp("Michiru","Good work.
I guess it was a bit hard 
to walk in that dress?");
ChEye(22,2);
ChMouth(22,2);
ChMotion(22,0,1);
VoicePlay("P740D00003_22_000");
MsgDisp("Hikaru","Hikaru was so worried～...
Are you okay?");
MsgDisp("主人公","Yeah...");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("P740D00003_21_010");
MsgDisp("Michiru","If Mari is unharmed, then it's fine.
Right, Hikaru?");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,3,1);
VoicePlay("P740D00003_22_010");
MsgDisp("Hikaru","Right, right.
Mari is most important.
Right, sis?");
MsgDisp("主人公","(｛みちる＊｝,｛ひかる＊｝...
I should have prepared a 
bit more thoroughly....");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
