BGOpen("ne600",1);
ChLayout(1);
MsgClose();
ChOpen(6,253,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgSel("Today's movie was wonderful!","Today's movie was so-so","Today's movie was a miss huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040618700_06_000");
    MsgDisp("Himuro","Really?
Wasn't the story progression kind of
cheap?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040618700_06_010");
    MsgDisp("Himuro","Your rating is too lenient.
Well, I guess it's better than not
enjoying it at all.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040618700_06_020");
    MsgDisp("Himuro","Yeah. It was disappointing because there
was no twist. It definitely feels like a
miss.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
