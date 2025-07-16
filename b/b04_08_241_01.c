BGOpen("tr510",0);
ChLayout(1);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040824101_08_000");
MsgDisp("Shirahane","Hey, shall we get ice cream at the stand?");
MsgSel("Yeah, I want to eat it!","I'd rather look at the coes and sheep.","...The cows are watching though?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040824101_08_010");
    MsgDisp("Shirahane","Right!
It's made with freshly squeezed milk, so
I'm sure it'll be super delicious!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,4,1);
    VoicePlay("B040824101_08_020");
    MsgDisp("Shirahane","I want to... eat ice cream.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,4,1);
    VoicePlay("B040824101_08_030");
    MsgDisp("Shirahane","That's fine.
It's not like we're havin' a barbecue.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
