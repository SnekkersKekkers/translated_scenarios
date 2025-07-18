BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040610100_06_000");
MsgDisp("Himuro","Are you learning about Habataki City now?
...Well, that's fine.");
MsgSel("Habataki City History is wonderful right?","I get the feeling that mask looks like someone...","It feels like an ancient romance");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040610100_06_010");
    MsgDisp("Himuro","Really?
Isn't it quite normal?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040610100_06_020");
    MsgDisp("Himuro","Yeah, maybe it looks like you.
Now that I think about it, I do feel some
kinship towards it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040610100_06_030");
    MsgDisp("Himuro","You have a sensitivity for these things.
That's fortunate.
I want to learn from your example.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
