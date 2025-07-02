BGOpen("ne210",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040214001_02_000");
MsgDisp("Sassa","I wonder if today's band will be popular?");
MsgSel("I'll buy their ＣＤ when I go home. ","Yeah! They had lots of good songs.","They've got a long way to go. I guess we can expect a lot from now on?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040214001_02_010");
    MsgDisp("Sassa","Seems like you liked it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040214001_02_020");
    MsgDisp("Sassa","They did, they did!
I thought their first song was the best!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,0);
    VoicePlay("B040214001_02_030");
    MsgDisp("Sassa","Crap...
We have a harsh critic here.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
