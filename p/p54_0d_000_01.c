BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Haa... that was a huge fail...)");
MsgClose();
SEPlay("EV_SE_544",0,0.5);
ChOpen(21,254,0,0,0,#1,#1,0,1);
SEPlay("EV_SE_544",0,0.5);
ChOpen(22,254,0,2,2,#1,#1,0,2);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,1,1);
ChEyeOpenLevel(22,10);
VoicePlay("P540D00001_22_000");
MsgDisp("Hikaru","No～, you stood out, right? ");
ChEye(21,1);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("P540D00001_21_000");
MsgDisp("Michiru","...Hikaru.");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,0,1);
VoicePlay("P540D00001_22_010");
MsgDisp("Hikaru","Sorry, sorry!
Well, don't let it dishearten
you, okay?");
MsgDisp("主人公","(Haa...
It would be good if I practiced more...)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
