BGOpen("tr520",0);
ChLayout(1);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040824201_08_000");
MsgDisp("Shirahane","Hey, do you want to try climbing a tree?");
MsgSel("That's dangerous?","My clothes will get dirty...","Sounds good!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("B040824201_08_010");
    MsgDisp("Shirahane","If you're worried, I'll stop.
I'm good at climbing trees though?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,2,1);
    VoicePlay("B040824201_08_020");
    MsgDisp("Shirahane","Hmー.
When you go camping, I think you're going
to get dirty to some extent, right?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("B040824201_08_030");
    MsgDisp("Shirahane","Hehe, that's right.
Then, let's look for a tree that's good
for climbing!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
