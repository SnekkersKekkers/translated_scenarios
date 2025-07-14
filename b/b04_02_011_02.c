BGOpen("wf110",0);
ChLayout(1);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040201102_02_000");
MsgDisp("Sassa","It really feels like a date spot here,
doesn't it?");
MsgSel("You can see beneath the glass floor!","Is it for couples only?","There are a lot of families here, though?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,5);
    VoicePlay("B040201102_02_010");
    MsgDisp("Sassa","Woah, awesome!
......Hey, are you even listening to me?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        ChEyeOpenLevel(2,7);
        VoicePlay("B040201102_02_020");
        MsgDisp("Sassa","I don't think that's true.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040201102_02_030");
        MsgDisp("Sassa","I don't think so, but I think they
probably have days like that.
Couple only days.");
        MsgDisp("主人公","Eh, what if its like that
today......");
        ChEye(2,3);
        ChMouth(2,4);
        ChMotion(2,4);
        ChEyeOpenLevel(2,0);
        VoicePlay("B040201102_02_040");
        MsgDisp("Sassa","It's not a big deal, right?
It's not like there's a certificate.");
        MsgDisp("主人公","That's true, proving it would be
difficult, I guess.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040201102_02_050");
        MsgDisp("Sassa","I guess......
It's not like I'm going to do that in
public......");
        MsgDisp("主人公","In public?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,2);
        VoicePlay("B040201102_02_060");
        MsgDisp("Sassa","No, no.
I mean, unless you want me to show you...?");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,2);
        ChEyeOpenLevel(2,7);
        VoicePlay("B040201102_02_070");
        MsgDisp("Sassa","That's not right either......");
        MsgDisp("主人公","(｛颯砂＊＊｝ seems troubled......)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,0);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040201102_02_080");
    MsgDisp("Sassa","Just pretend we're ex-lovers then.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
