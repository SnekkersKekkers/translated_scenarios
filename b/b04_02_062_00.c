BGOpen("wf610",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040206200_02_000");
MsgDisp("Sassa","Ehh......
It feels like a completely different
world than the beach.");
MsgSel("The air feels so nice and cool","Is the water deep here?","The water's surface shines blue like a jewel……");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040206200_02_010");
    MsgDisp("Sassa","Yeah, the temperature is a lot
different here, huh?");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040206200_02_020");
    MsgDisp("Sassa","Doesn't that have something to do with
the wavelength of blue light? No matter
how many times I hear it, I don't
understand.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040206200_02_030");
    MsgDisp("Sassa","Yeah, that girly side of you
is nice.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
