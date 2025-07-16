BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040422201_04_000");
MsgDisp("Nanatsumori","Hmm...
It's a love story between a townsgirl and
a lord.");
MsgSel("It's a tragic love, but it's wonderful...","Aren't their situations too different?","Seems kind of far-fetched...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040422201_04_010");
    MsgDisp("Nanatsumori","Seems like girls would like it.
It would probably be well-received if it
was turned into a movie.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,0);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040422201_04_020");
    MsgDisp("Nanatsumori","It can't be helped?
They fell in love after all.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,1,1);
    VoicePlay("B040422201_04_030");
    MsgDisp("Nanatsumori","Uwah, that's a cruel way of putting it...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
}