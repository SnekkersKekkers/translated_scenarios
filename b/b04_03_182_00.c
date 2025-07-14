BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(3,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040318200_03_000");
    MsgDisp("Honda","Yep yep, it was scaryー!
It is absurdity that's the best spice,
huh∋");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,1);
    VoicePlay("B040318200_03_010");
    MsgDisp("Honda","It's no good.
Because I already know you were flinching
next to me.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChSet(3,2);
    VoicePlay("B040318200_03_020");
    MsgDisp("Honda","Hmmm... I knew it wouldn't be popular with
the general public, But I thought you
would like itー...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
