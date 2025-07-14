BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040403301_04_000");
MsgDisp("Nanatsumori","The deep sea fish' shape has evolved in a
strange way.
hasn't it?");
MsgSel("It's interesting.","Huh, it looks like you, ｛七ツ森＊｝.","It looks like I can learn to make weird faces here!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    VoicePlay("B040403301_04_010");
    MsgDisp("Nanatsumori","That pretty much sums 
it up in a word.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040403301_04_020");
    MsgDisp("Nanatsumori","Seriously∋ It really does... the color,
the spiky parts, it really might look like
me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040403301_04_030");
    MsgDisp("Nanatsumori","Your inventiveness is amazing! It seems
like a high hurdle, but if you could make
this face, your views on social media
would increase by tons.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
