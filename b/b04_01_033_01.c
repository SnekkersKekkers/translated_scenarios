BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040103301_01_000");
MsgDisp("Kazama","This atmosphere is a little different,
just in this place.");
MsgSel("The jellyfish look like fairy lights","It's like time is moving slower","The darkness makes me a little sleepy...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040103301_01_010");
    MsgDisp("Kazama","Yeah, it's beautiful.
And more eco-friendly than electric
lights.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040103301_01_020");
    MsgDisp("Kazama","You're right.
Deep sea creatures all seem to move
slowly.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040103301_01_030");
    MsgDisp("Kazama","Hey!
You aren't a kid! Wake up!");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
