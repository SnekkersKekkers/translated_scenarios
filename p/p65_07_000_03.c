MsgClose();
BGMPlay("BGM_FESTIVAL");
BGOpen("sc710",0);
ChOpen(7,254,0,2,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("P650700003_07_000");
MsgDisp("Mikage","Haa... did you see the customer's faces?
Everyone had a bitter look");
MsgDisp("主人公","Ahhh...
It must've been no good...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P650700003_07_010");
MsgDisp("Mikage","Hey, hey, there's no point even if you
make that gloomy face.");
MsgDisp("主人公","Yes...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P650700003_07_020");
MsgDisp("Mikage","Well, fortunately the herbs themselves are
good.
Good medicine is bitter, right?");
MsgDisp("主人公","(I should have worked harder.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
BGMStop();
