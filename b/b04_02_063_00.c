BGOpen("wf620",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040206300_02_000");
MsgDisp("Sassa","During this time of year, there aren't
many people out.");
MsgSel("A winter sea just for two!","The sea in winter is so sad...","The sea at winter is full of delicious food♪");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040206300_02_010");
    MsgDisp("Sassa","What are you planning on doing out here
with just us two!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040206300_02_020");
    MsgDisp("Sassa","I don't know what you mean by sad. When I
come out here to run, the only thing
that's sad is the washed up seaweed that
gets in the way.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040206300_02_030");
    MsgDisp("Sassa","Yeah, that's good.
Eating gives you stamina.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
