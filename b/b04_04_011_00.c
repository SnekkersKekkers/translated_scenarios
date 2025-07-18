BGOpen("wf110",0);
ChLayout(1);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,3);
ScrFadeIn(0);
VoicePlay("B040401100_04_000");
MsgDisp("Nanatsumori","Oh, it's stunning.");
MsgSel("Waa! The horizon looks like it's sparkling!","I wonder if you can see ｛七ツ森＊｝'s house from here?'","It's so high my legs are giving out...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("B040401100_04_010");
    MsgDisp("Nanatsumori","Yeah, the weather is nice.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040401100_04_020");
    MsgDisp("Nanatsumori","Which one. If it's my family home...ahh,
I see it, I see it. Look, can you see that
blue high-rise?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,0);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040401100_04_030");
    MsgDisp("Nanatsumori","If you're bad with high places, it would
be good if you didn't push yourself.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
