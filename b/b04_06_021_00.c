BGOpen("wf210",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040602100_06_000");
MsgDisp("Himuro","The wind feels nice.");
MsgSel("It's nice to be able to take a relaxing walk huh?","Is that a jellyfish over there?","No one is here, it feels like we have the place to ourselves...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040602100_06_010");
    MsgDisp("Himuro","Well, this wasn't a bad time.
It's fine to have something like
this once in a while.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040602100_06_020");
    MsgDisp("Himuro","Is that the first thing
that caught your eye?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("B040602100_06_030");
    MsgDisp("Himuro","...Hmm, yeah that's right.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
