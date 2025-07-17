BGOpen("tr520",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040124200_01_000");
MsgDisp("Kazama","It's different from what I'm used to in
the kitchen.");
MsgSel("｛風真＊＊｝, I'm counting on you♪","Camping means BBQ!","It seems super inconvenient and difficult...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040124200_01_010");
    MsgDisp("Kazama","OK! Then first is fire. I'd like to say
let's start a fire, but let's count on
modern conveniences here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040124200_01_020");
    MsgDisp("Kazama","Yeah, they were selling ingredients at the
ranch.
Let's have yakiniku, the two of us!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040124200_01_030");
    MsgDisp("Kazama","Isn't that what you want?
Geez... you're not allowed to use any
convenient tools for the rest of the day.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
