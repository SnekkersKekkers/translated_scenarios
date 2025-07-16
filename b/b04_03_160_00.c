BGOpen("ne330",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040316000_03_000");
MsgDisp("Honda","Which one do you want to play?");
MsgSel("I want to challenge the medal game!","How about challenging the quiz game?","Shall we get our compatibility read?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B040316000_03_010");
    MsgDisp("Honda","Okay.
It feels good when those jangling medals
come out.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChSet(3,3);
    VoicePlay("B040316000_03_020");
    MsgDisp("Honda","Yes, yeees!
I won't go easy on you okayー?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,1);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040316000_03_030");
    MsgDisp("Honda","Ehh?
With one rich?
Ours?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
