BGMPlay("BGM_FESTIVAL",0.01);
BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛柊＊＊＊｝, good work...
I failed at the end...");
ChEye(5,2);
ChEyeOpenLevel(5,9);
VoiceEVSPlay(5);
VoicePlay("P850500003_05_000");
MsgDisp("Hiiragi","｛主人公｝, please look up.
It wasn't only your responsibility.");
MsgDisp("主人公","But.");
ChEye(5,2);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P850500003_05_010");
MsgDisp("Hiiragi","You even minded my work.
Therefore, it was my fault for adding to
your worries.");
MsgDisp("主人公","Uugh...｛柊＊＊＊｝.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("P850500003_05_020");
MsgDisp("Hiiragi","It's over.
So even if it's just a little show me a
smile.");
MsgDisp("主人公","(Haa...even though it was the last
cultural festival of my high school
life... I should have prepared more
carefully");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
