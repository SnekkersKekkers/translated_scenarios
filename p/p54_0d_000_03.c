BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Haa... what a massive fail...)");
MsgClose();
SEPlay("EV_SE_544",0,0.5);
ChOpen(21,254,4,4,4,-1,-1,0,1);
SEPlay("EV_SE_544",0,0.5);
ChOpen(22,254,0,2,0,-1,-1,0,2);
VoicePlay("P540D00003_21_000");
MsgDisp("Michiru","It was only a little mistake, maybe?");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,2,1);
VoicePlay("P540D00003_22_000");
MsgDisp("Hikaru","Mari, that wasn't it～");
MsgDisp("主人公","Ugh...");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("P540D00003_21_010");
MsgDisp("Michiru","It's alright.
If you practice, you'll get better.");
ChEye(22,2);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P540D00003_22_010");
MsgDisp("Hikaru","Right right.
If it's Mari, she can do it, 
right?");
MsgDisp("主人公","(Ugh...
If only I practiced more...)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
