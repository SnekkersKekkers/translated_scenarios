BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040303101_03_000");
MsgDisp("Honda","You can go first.
Which section do you want to visit first?");
MsgSel("Maybe...penguins?","I might want to see the big crabs?","Hmmm, I'm not sure...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,1);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040303101_03_010");
    MsgDisp("Honda","Hm...With that kind of enthusiasm, the
penguins might be sad, you know? Come on,
let's try it again!");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("B040303101_03_020");
    MsgDisp("Honda","The Japanese spider crab, right? It's nice
that they're caught in the waters near
Japan. Let's start by taking an interest
in something close to home!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040303101_03_030");
    MsgDisp("Honda","That's okay. Hesitating is important. I'll
wait as long as it takes until you have an
answer∈");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
