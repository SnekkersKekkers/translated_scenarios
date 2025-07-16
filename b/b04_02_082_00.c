BGOpen("fp200",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040208200_02_000");
MsgDisp("Sassa","The perimeter of the pond is a good course
to take a walk.
Especially at this time of year.");
MsgSel("Yes, lovely flowers are blooming too","The doggies seem happy too","Does this make you want to run?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040208200_02_010");
    MsgDisp("Sassa","It's not just the ones being looked after,
there's also some growing wildly.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040208200_02_020");
    MsgDisp("Sassa","Yeah, they'll be happy, but it's a lot of
work to bring them all the way here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040208200_02_030");
    MsgDisp("Sassa","Hey, don't talk as if I'm like a dog.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
