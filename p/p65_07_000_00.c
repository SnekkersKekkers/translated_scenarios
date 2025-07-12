MsgClose();
BGMPlay("BGM_FESTIVAL");
BGOpen("sc710",0);
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(7);
VoicePlay("P650700000_07_000");
MsgDisp("Mikage","｛主人公｝, you really did your best.
You put your efforts into growing plants,
came up with how to serve tea.
Even the staffroom had high praise.");
MsgDisp("主人公","Genuinely?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("P650700000_07_010");
MsgDisp("Mikage","Yeah.
Even Vice Principal Himuro said he had
high hopes for your future. ");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("P650700000_07_020");
MsgDisp("Mikage","Thanks to you, I was praised by
Vice Principal Himuro for the first time.
Thanks?");
MsgDisp("主人公","(Yay, a huge success!
It was worth giving it my all.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
BGMStop();
