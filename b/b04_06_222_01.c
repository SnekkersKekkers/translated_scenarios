BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040622201_06_000");
MsgDisp("Himuro","If you live in Habataki, you will
definitely come here on a field trip.");
MsgSel("Let's learn today too!","In other words, you're bored of it?","Yeah, it's nostalgic.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040622201_06_010");
    MsgDisp("Himuro","Do you love your hometown that much?
How surprising.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040622201_06_020");
    MsgDisp("Himuro","Good judgement. Honestly, I'm already
tired of looking at it. But I enjoy
talking to you, though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040622201_06_030");
    MsgDisp("Himuro","Well yeah.
I was probably impressed back then.
It's true, it brings back memories.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
