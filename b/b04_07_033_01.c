BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
VoicePlay("B040703301_07_000");
MsgDisp("Mikage","This is the world 200 metres underwater.");
MsgSel("Yes, the water pressure here is 20 atmospheres","This is basement floor one, though?","Is it really that deep here∋");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("B040703301_07_010");
    MsgDisp("Mikage","Oh, nice, Majime-chan.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("B040703301_07_020");
    MsgDisp("Mikage","Oh thank goodness.
That teacher's pretend
was way too lame.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,4);
    ChEyeOpenLevel(7,0);
    VoicePlay("B040703301_07_030");
    MsgDisp("Mikage","C-crap, my lungs are collapsing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
