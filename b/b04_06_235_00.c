BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,2,0,0,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623500_06_000");
MsgDisp("Himuro","...Haa, it's finally over. ");
MsgSel("It was scary, but it was fun!","I think my legs gave out...","The gimmicks were so weak, no good!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623500_06_010");
    MsgDisp("Himuro","Were you able to enjoy it thoroughly?
That's good.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623500_06_020");
    MsgDisp("Himuro","Did you not know you had a weakness for
this sort of thing?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("B040623500_06_030");
    MsgDisp("Himuro","Wow, you're pretty calm. But, I agree. I'm
fed up with those see-through productions.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
