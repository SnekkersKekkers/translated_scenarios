MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad, 
Seems like it was somehow a success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(7,254,0,0,0,-1,-1,0,0);
VoicePlay("P740700002_07_000");
MsgDisp("Mikage","Welcome back, to the beautiful princess.");
MsgDisp("主人公","Hehe.
｛御影＊＊｝ gave me the push I needed, 
so I walked with my head held high.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("P740700002_07_010");
MsgDisp("Mikage","Yeah, when you stepped onto stage, 
the gymnasium transformed into a 
castle ballroom, you know?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P740700002_07_020");
MsgDisp("Mikage","Everyone was cheering you on.
As expected.");
MsgDisp("主人公","I'm glad...
I'm happy!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P740700002_07_030");
MsgDisp("Mikage","I'm also happy.
It's the best when your 
efforts have paid off.");
MsgDisp("主人公","(Yay, the show was a huge success!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
