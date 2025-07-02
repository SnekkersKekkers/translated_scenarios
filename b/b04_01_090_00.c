BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
VoicePlay("B040109000_01_000");
MsgDisp("Kazama","It's like paradise no matter how many
times you come here.");
MsgSel("This flower smells so good…","It's so damp and humid, right?","Where are the carnivorous plants?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040109000_01_010");
    MsgDisp("Kazama","Don't put your face that close to sniff.
You look like a honeybee.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,1);
    VoicePlay("B040109000_01_020");
    MsgDisp("Kazama","Yeah, it is.
It must be hard to adapt this place
to where the plants originate from.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040109000_01_030");
    MsgDisp("Kazama","Hey, what's wrong?
Just where are you dragging me along to?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
