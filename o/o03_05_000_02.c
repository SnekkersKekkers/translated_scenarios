BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,30,0,0,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030500002_05_000");
    MsgDisp("Hiiragi","Staying in sync is quite difficult,
it seems.");
    MsgDisp("主人公","(Haa, last, huh......
I wish I had tried a little harder......)");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,30,4,2,4,0,-1,0,0);
    ScrFadeIn(0);
    ChEyeOpenLevel(5,9);
    VoiceEVSPlay(5);
    VoicePlay("O030500002_05_010");
    MsgDisp("Hiiragi","｛主人公｝.
My apologizes for pulling on your leg.
Are you hurt?");
    MsgDisp("主人公","No, I'm fine.
What about you, ｛柊＊＊＊｝?");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("O030500002_05_020");
    MsgDisp("Hiiragi","Yes, I'm fine. Remember that a horse
that doesn't get injured to superior to
one with a slightly higher ability.");
    MsgDisp("主人公","(Haa...... last......
I wish I had tried a little harder......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,30,0,4,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(5);
    VoicePlay("O030500002_05_030");
    MsgDisp("Hiiragi","｛主人公｝, are you not hurt?");
    MsgDisp("主人公","I'm fine, but sorry.
We're last......");
    ChEye(5,2);
    ChMotion(5,4);
    ChEyeOpenLevel(5,9);
    VoicePlay("O030500002_05_040");
    MsgDisp("Hiiragi","I as well.
However, wasn't it nice to feel
like such a big deal?");
    MsgDisp("主人公","Big deal?");
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("O030500002_05_050");
    MsgDisp("Hiiragi","Don't you feel that we,
the last on the course,
received the most cheers?");
    MsgDisp("主人公","(Y, yeah...... but, last......
I wish I had tried a little harder......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
