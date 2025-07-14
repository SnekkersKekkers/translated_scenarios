BGMPlay("BGM_FESTIVAL",0.01);
BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,0,4,4,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛柊＊＊＊｝, good work.");
ChEye(5,3);
ChMotion(5,3);
VoicePlay("P850500006_05_000");
MsgDisp("Hiiragi","Thank you for your hard work.
You did a great job.");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("P850500006_05_010");
MsgDisp("Hiiragi","It's not just me, everyone in the student
council committee thought so too.");
MsgDisp("主人公","Thank you.
I'm happy to hear you say that!");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("P850500006_05_020");
MsgDisp("Hiiragi","Not just the student council executive
committee, but on behalf of all the
students, please let me say thank you.");
MsgDisp("主人公","Hey, you're exaggerating.");
ChEye(5,4);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
VoicePlay("P850500006_05_030");
MsgDisp("Hiiragi","No.
It's not even enough.");
ChEyeOpenLevel(5,#1);
MsgDisp("主人公","(Yay, I'm happy!
I was able to make a good memory of my
last cultural festival of high school.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
