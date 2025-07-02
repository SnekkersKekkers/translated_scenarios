BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad! It was a huge success!)");
MsgClose();
SEPlay("EV_SE_544",0,0.5);
ChOpen(21,254,0,0,0,-1,-1,0,1);
SEPlay("EV_SE_544",0,0.5);
ChOpen(22,254,0,0,3,-1,-1,0,2);
VoicePlay("P540D00000_21_000");
MsgDisp("Michiru","That was wonderful...!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,2,1);
ChEyeOpenLevel(22,0);
VoicePlay("P540D00000_22_000");
MsgDisp("Hikaru","It was too wonderful, Mari...!");
MsgDisp("主人公","It's thanks to you
two watching over me.
Thank you!");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P540D00000_21_010");
MsgDisp("Michiru","Hehe.
We're the ones who should
be thanking you.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P540D00000_22_010");
MsgDisp("Hikaru","Right!
We were super moved.
Mari, you're the best▼");
MsgDisp("主人公","(Hurray!
Seems like it went well!)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
