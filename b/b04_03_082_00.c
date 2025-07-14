BGOpen("fp200",0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040308200_03_000");
MsgDisp("Honda","It seems like there are a lot of genji
fireflies here.");
MsgSel("Are they larvae now?","There's even different types of fireflies, huh?","Genji? I wonder if there's a Heishi firefly too.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040308200_03_010");
    MsgDisp("Honda","Yep yep, They heartily eat underwater, And
soon they'll become pupa.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B040308200_03_020");
    MsgDisp("Honda","There is.
There's approximately 2000 kinds in the
world.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("B040308200_03_030");
    MsgDisp("Honda","Good! Nice point! But talking about
'Heishi' fireflies, if Genji was fine, why
not Heishi too, huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
