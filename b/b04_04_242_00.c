BGOpen("tr520",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040424200_04_000");
MsgDisp("Nanatsumori","Well then.
Where should we start...");
MsgSel("｛七ツ森＊｝, I'm counting on you♪","Camping means barbecue!","It seems like it'll be inconvenient and tough...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040424200_04_010");
    MsgDisp("Nanatsumori","Oh, oh—.
You say, \"I'll leave it to you\", even
though I'm the indoors type...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,2,1);
    VoicePlay("B040424200_04_020");
    MsgDisp("Nanatsumori","Seriously∋
I didn't really think about it that
seriously...");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040424200_04_030");
    MsgDisp("Nanatsumori","Is that how it looks? Then, you should
help out too. That's what camping is all
about, isn't it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
