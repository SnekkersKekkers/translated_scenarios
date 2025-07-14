BGOpen("bh810",0);
ChLayout(1);
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,2);
ScrFadeIn(0);
VoicePlay("B040830001_08_000");
MsgDisp("Shirahane","Huh?
...There's kind of a nice smell?");
MsgSel("Is that so?","Is it a tasty smell?","To me, it smells like ｛大地＊＊｝!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,0,1);
    ChEyeOpenLevel(8,0);
    ChCheek(8,3);
    VoicePlay("B040830001_08_010");
    MsgDisp("Shirahane","...Ah. That's right, it's your smell! You
smell this nice.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("B040830001_08_020");
    MsgDisp("Shirahane","Haha! Are you hungry? Should I ask
Nee-chan to make us something?");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(8,4);
    ChMouth(8,4);
    ChMotion(8,4,1);
    ChCheek(8,3);
    VoicePlay("B040830001_08_030");
    MsgDisp("Shirahane","Now that you mention it, I'm curious...
something like my smell, is kinda
embarrassing.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
