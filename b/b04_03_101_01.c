BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChMouth(3,0);
ChMotion(3,0);
ChMotion(3,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040310101_03_000");
MsgDisp("Honda","It looks like there's a trip for
elementary school students today.");
MsgSel("How nostalgic, I remember coming a long time ago.","I want to hear ｛本多＊＊｝'s commentary though.","We might not be able to take our time looking around, huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040310101_03_010");
    MsgDisp("Honda","Yep yep, me too. I was so deep in
conversation with the curator, I was late
for the bus back home...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,4);
    ChEye(3,3);
    ChMotion(3,4);
    ChCheek(3,5);
    VoicePlay("B040310101_03_020");
    MsgDisp("Honda","That's fine but...
There's lots of things I want to talk to
you about today...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(3,1);
    ChMouth(3,2);
    ChMotion(3,3);
    VoicePlay("B040310101_03_030");
    MsgDisp("Honda","That's not true. Elementary school
students' opinions are quite sharp,
conversely, we might be able to hear a lot
of interesting conversations?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
ChCheek(3,0);
