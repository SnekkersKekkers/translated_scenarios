BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like I got here a little early...
Huh?)");
MsgDisp("主人公","｛柊＊＊＊｝!
This is before our meeting time, right?");
BGMPlay("BGM_C05_HIIRAGI_A",0.01);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,253,0,0,4,#1,#1,0,0);
    VoicePlay("B010500002_05_000");
    MsgDisp("Hiiragi","Yes, I finished my previous errand with
haste.
Waiting a little is no problem as well.");
    MsgDispSksp(1,0);
    MsgDisp("主人公","Hehe, I see.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgClose();
    ChOpen(5,253,0,0,4,#1,#1,0,0);
    VoicePlay("B010500002_05_010");
    MsgDisp("Hiiragi","I left my home early because I intended to
go on a leisurely walk.
Next thing I knew, I was already here.");
    MsgDisp("主人公","You must be a fast walker.
Well, let's be off then!");
    MsgDispSksp(1,0);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B010500002_05_020");
    MsgDisp("Hiiragi","Yes.
Though I am sure I would enjoy walking
with you more.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,253,0,0,4,#1,#1,0,0);
    VoicePlay("B010500002_05_030");
    MsgDisp("Hiiragi","Yes.
I wanted to see your surprised face.");
    MsgDisp("主人公","Hey, that's mean.");
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B010500002_05_040");
    MsgDisp("Hiiragi","... That face is also a good one.");
    MsgDisp("主人公","Huh?");
    MsgDispSksp(1,0);
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B010500002_05_050");
    MsgDisp("Hiiragi","No, it is nothing.
Let us be off.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
