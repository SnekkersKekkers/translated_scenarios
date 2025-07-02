BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040405100_04_000");
MsgDisp("Nanatsumori","The manmade starry sky was 
a nice touch too. It was lightly
educational too.");
MsgSel("The starry sky was romantic.","｛七ツ森＊｝, did you fall asleep?","The seat was so fluffy I fell asleep...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040405100_04_010");
    MsgDisp("Nanatsumori","They were only artificial lights though?
I think the night sky in Habataki
is more beautiful.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040405100_04_020");
    MsgDisp("Nanatsumori","You found out?
It felt so nice, I just fell asleep.
It was the best place for a nap.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040405100_04_030");
    MsgDisp("Nanatsumori","I know what you mean.
The angle and fit of the seats are 
just right. I want one for my house.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
