BGOpen("ne330",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040616000_06_000");
MsgDisp("Himuro","What game shall we play?");
MsgSel("I want to take on the medal game!","Shall we challenge ourselves with the quiz game?","How about getting our compatibility read?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040616000_06_010");
    MsgDisp("Himuro","...Take care to
not get so frantic.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040616000_06_020");
    MsgDisp("Himuro","Alright, I accept your challenge.
Just so you know, I have no intention of
losing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040616000_06_030");
    MsgDisp("Himuro","The machine is the one telling your
fortune right...
Is there any point in that?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
