BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1,1);
ScrFadeIn(0);
VoicePlay("B040103101_01_000");
MsgDisp("Kazama","This tank is ginormous.");
MsgSel("Yeah, it's like a movie theater screen.▼","It's a little scary, being this big","The fish seem to be swimming happily▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040103101_01_010");
    MsgDisp("Kazama","Oh, that's a pretty smart thing to say,
huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040103101_01_020");
    MsgDisp("Kazama","I wonder just how much water pressure they
apply to this thing... Don't get too close
to it. Come over here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040103101_01_030");
    MsgDisp("Kazama","Yeah they are. Safe, secure, and they
don't even have to find their own meals
since they fall from above.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
