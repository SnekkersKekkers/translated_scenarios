BGOpen("fp210",0);
ChLayout(1);
ChOpen(6,253,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040608102_06_000");
MsgDisp("Himuro","To think I would go cherry blossom
viewing...");
MsgSel("Are you having fun?","It's fun once in a while","It's not like you huh");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040608102_06_010");
    MsgDisp("Himuro","Not sure how I feel about that
assumption...
Well, it's not bad.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040608102_06_020");
    MsgDisp("Himuro","Well, if it's once in a while, I don't
want to do frivolous things, But it's a
nice change of pace.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,1);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040608102_06_030");
        MsgDisp("Himuro","...Sorry.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040608102_06_040");
        MsgDisp("Himuro","Then let me ask you this; what is \"like\"
me?");
        MsgDisp("主人公","Eh?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040608102_06_050");
        MsgDisp("Himuro","You don't think it's like me to watch the
cherry blossoms right?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040608102_06_060");
        MsgDisp("Himuro","Then at what times am I doin something
\"like\" me?
Tell me.");
        MsgDisp("主人公","Hm... When you're surfing?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0,1);
        VoicePlay("B040608102_06_070");
        MsgDisp("Himuro","Ah... so its like that?");
        MsgDisp("主人公","Eh, \"like that\"");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        ChCheek(6,10);
        VoicePlay("B040608102_06_080");
        MsgDisp("Himuro","Ah, no...
I thought you would say something like
studying or being an honor's student....");
        ChEye(6,2);
        ChMouth(6,2);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        ChCheek(6,0);
        VoicePlay("B040608102_06_090");
        MsgDisp("Himuro","Perhaps it's just me who's caught up with
the Himuro surname...");
        MsgDisp("主人公","(｛氷室＊＊｝ also has a lot of worries
huh...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
