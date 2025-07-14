BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(3,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was the best!","Today's movie was so-so","Today's movie was a miss, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040318100_03_000");
    MsgDisp("Honda","Is that so?
It was only running, I got tired of it.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChEye(3,0);
    ChMotion(3,4);
    VoicePlay("B040318100_03_010");
    MsgDisp("Honda","Yeah, it was just so-so.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040318100_03_020");
    MsgDisp("Honda","\"Connect with the sash!
The connections of youth!\" That
catchphrase is already awful.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
