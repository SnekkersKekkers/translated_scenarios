BGOpen("fp210",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040108101_01_000");
MsgDisp("Kazama","It just feels too obvious to compare
cherry blossoms to life, you know what I
mean?");
MsgSel("Fleeting, just like life... It's a little sad","The leaves that come after this are lovely, and twice as yummy right?","What a wonderful life, to see the flowers bloom every year");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,4);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040108101_01_010");
    MsgDisp("Kazama","Yeah, that's what I mean.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    ChEye(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040108101_01_020");
    MsgDisp("Kazama","That's just like you.
You've got a good idea of life.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("B040108101_01_030");
    MsgDisp("Kazama","That's an amazing way of thinking.
Thinking that way, you'll live for
hundreds of years.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
