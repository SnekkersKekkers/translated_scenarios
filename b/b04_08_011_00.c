BGOpen("wf110",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,2,1);
VoicePlay("B040801100_08_000");
MsgDisp("Shirahane","This place is so stylish that I feel a lil'
embarrassed.");
MsgSel("Wow! The horizon looks like it's shining!","I wonder if we can see ｛Daichi＊＊｝'s house from here?","It's so high, I can't move my legs...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("B040801100_08_010");
    MsgDisp("Shirahane","Aah... yeah, it really does.
From up here it looks like it goes on forever, y'know...
It's gorgeous!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,4,1);
    VoicePlay("B040801100_08_020");
    MsgDisp("Shirahane","Hmm, I dunno?
Let's go lookin' for it together.
Probably over that way, I reckon.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,4,1);
    VoicePlay("B040801100_08_030");
    MsgDisp("Shirahane","I'm feelin' so intimidated by the stylish
place that my legs are frozen...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
