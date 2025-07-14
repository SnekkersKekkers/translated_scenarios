BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040203201_02_000");
MsgDisp("Sassa","Such a huge outdoor aquarium seems
difficult to manage.");
MsgSel("Yeah, when it rains......","What about snowy days?","Does lightning strike the water?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040203201_02_010");
    MsgDisp("Sassa","Like that, wouldn't it overflow?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040203201_02_020");
    MsgDisp("Sassa","That would make the penguins happy
though!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,5);
    VoicePlay("B040203201_02_030");
    MsgDisp("Sassa","Eh, don't say such scary things...... I
guess it's true that water does conduct
electricity. It's dangerous, let's go
inside.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
