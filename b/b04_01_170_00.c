BGOpen("ne340",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ScrFadeIn(0);
ChEye(1,4);
ChMouth(1,4);
ChMotion(1,2);
VoicePlay("B040117000_01_000");
MsgDisp("Kazama","Karaoke huh...
It's a unique situation.");
MsgSel("I want to hear ｛風真＊＊｝'s beautiful voice.","Let's sing a duet together.","Please listen to my song!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040117000_01_010");
    MsgDisp("Kazama","Sorry.
I don't care about what's trending, 
so I don't know most of these songs.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040117000_01_020");
    MsgDisp("Kazama","Understood.
It'll be fine as long as I 
copy you, right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040117000_01_030");
    MsgDisp("Kazama","Has the songstress of Haba
High arrived?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
