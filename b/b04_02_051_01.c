BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040205101_02_000");
MsgDisp("Sassa","The vibe here is quite similar to
that other place, right?");
MsgSel("The movie theater?","Aquarium's Deep Sea Corner!","The Haunted House?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040205101_02_010");
    MsgDisp("Sassa","Yeah it's definitely similar.
The screen there is brighter, though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040205101_02_020");
    MsgDisp("Sassa","The music is a bit similar too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChEyeOpenLevel(2,7);
    VoicePlay("B040205101_02_030");
    MsgDisp("Sassa","You think that's funny, huh?
Well, you got me. It's worse though
because you're forced to sit still.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
