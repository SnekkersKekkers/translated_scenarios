MsgClose();
BGMPlay("BGM_FESTIVAL");
BGOpen("sc710",0);
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(7);
VoicePlay("P650700000_07_000");
MsgDisp("Mikage","｛主人公｝, you did great. The herbs were
raised with care and served perfectly. It 
was highly praised in the staff room, too.");
MsgDisp("主人公","Really?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("P650700000_07_010");
MsgDisp("Mikage","Yeah. Even Vice Principal Himuro said he's
looking forward to seeing more from you
in the future.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("P650700000_07_020");
MsgDisp("Mikage","Thanks to you, I was praised by Vice
Principal Himuro for the first time.
So, thanks—really.");
MsgDisp("主人公","(Yay, a huge success!
All that hard work really paid off.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
BGMStop();
