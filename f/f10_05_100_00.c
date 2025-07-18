BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Ah, that's right.
I have to return a book to the library.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0,0);
Wait(40,0);
BGOpen("sc330",0);
ScrFadeIn(0);
VoicePlay("F100510000_48_000");
MsgDisp("School Girl A","He's been like that for a while now...");
VoicePlay("F100510000_44_000");
MsgDisp("School Girl B","What's up with Yanosuke-kun, I wonder...?
Is he feeling unwell?");
MsgDisp("主人公","(Eh...
｛柊＊＊＊｝?)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C05_HIIRAGI_A",0.01);
ChOpen(5,254,2,2,2,0,#1,0,0);
Wait(70,1);
VoicePlay("F100510000_05_000");
MsgDisp("Hiiragi","Haa...");
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("F100510000_05_010");
MsgDisp("Hiiragi","Ah, it is you.");
MsgDisp("主人公","｛柊＊＊＊｝, what's wrong?");
ChMouth(5,2);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("F100510000_05_020");
MsgDisp("Hiiragi","No, it is my own problem. No, it's my
problem. I've wasted precious time on
nothing again.");
VoicePlay("F100510000_05_030");
MsgDisp("Hiiragi","I thought I'd study, opened my notebook
and textbook, but then I just sat there in
a daze...");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
MsgDisp("主人公","Ah, he left...");
MsgDisp("主人公","(Working in a theater company and studying
for school is tough, isn't it...
I wish I could help somehow.)");
MsgClose();
ScrFadeOut(0,0);
