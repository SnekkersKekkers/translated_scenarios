BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChSet(3,0,1);
ScrFadeIn(0);
VoicePlay("B040311001_03_000");
MsgDisp("Honda","Look, that guy is amazing.
I wonder how it feels to be able to swim
like that.");
MsgSel("You end up enchanted huh","Maybe he's a swimmer?","But, the splashing might be annoying");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("B040311001_03_010");
    MsgDisp("Honda","That's right...
Haa, you've been captivated.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1);
    VoicePlay("B040311001_03_020");
    MsgDisp("Honda","Yeah, maybe.
Because he's on a different level to
everyone around him.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040311001_03_030");
    MsgDisp("Honda","That's true. That would bother others.
Even if they can see underwater, if they
can't see the people around them, that's a
point deduction.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
