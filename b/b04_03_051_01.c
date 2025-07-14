BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040305101_03_000");
MsgDisp("Honda","When I was in elementary school, I built a
planetarium and set it up in my room.");
MsgSel("Hehe, cute.","How did you build it?","I would've loved to see it.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("B040305101_03_010");
    MsgDisp("Honda","Eh, I actually made it pretty seriously,
you know?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040305101_03_020");
    MsgDisp("Honda","I covered a desk light with black paper.
Then, I invited my family as guests into
the room.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040305101_03_030");
    MsgDisp("Honda","Sure, I can show you anytime!
It's quick to make.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
