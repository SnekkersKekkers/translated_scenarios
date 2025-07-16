BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like I got here a little early...
Huh?)");
MsgDisp("主人公","｛氷室＊＊｝!
You're already here?");
BGMPlay("BGM_C06_INORI_A",0.01);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,253,0,0,0,#1,#1,0,0);
    VoicePlay("B010600002_06_000");
    MsgDisp("Himuro","Acting ahead of time is the natural thing
to do.");
    MsgDisp("主人公","You're an on-the-dot type, huh.");
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B010600002_06_010");
    MsgDisp("Himuro","That's what's normal.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgClose();
    ChOpen(6,253,0,0,0,#1,#1,0,0);
    VoicePlay("B010600002_06_020");
    MsgDisp("Himuro","I just got here a little early.");
    MsgDisp("主人公","How early is a little?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B010600002_06_030");
    MsgDisp("Himuro","About 15 minutes ago.
It would be a problem if something
unexpected popped up.");
    MsgDisp("主人公","Are you worried about something...?");
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    VoicePlay("B010600002_06_040");
    MsgDisp("Himuro","The future is unpredictable.
That's all.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,253,4,0,2,#1,#1,0,0);
    VoicePlay("B010600002_06_050");
    MsgDisp("Himuro","Isn't this fine?
I can't feel at ease, even at home.");
    MsgDisp("主人公","Are you restless?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChEyeOpenLevel(6,8);
    ChCheek(6,5);
    VoicePlay("B010600002_06_060");
    MsgDisp("Himuro","... Is that a bad thing?");
    MsgDisp("主人公","Hehe, not really?");
    ChEye(6,0);
    ChMouth(6,1);
    ChMotion(6,1);
    ChEyeOpenLevel(6,8);
    VoicePlay("B010600002_06_070");
    MsgDisp("Himuro","What's with that happy look.
Enough, I'm leaving you behind.");
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    MsgDisp("主人公","Wah!
I'm sorry, I'm sorry!");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
