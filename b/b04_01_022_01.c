BGOpen("wf221",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040102201_01_000");
MsgDisp("Kazama","This boat is great for just cruising
around Habataki bay.");
MsgSel("Yeah, it's like we can go anywhere","Yeah, it's like there's a secret to it","Yeah, it's a real luxury liner");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040102201_01_010");
    MsgDisp("Kazama","If you could go anywhere, where would you
want to go?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040102201_01_020");
    MsgDisp("Kazama","What, like it's going to fly off into
space if there's a crisis on Earth?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040102201_01_030");
    MsgDisp("Kazama","That's about right.
Someday, I'd love to go on a fancy cruise.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
