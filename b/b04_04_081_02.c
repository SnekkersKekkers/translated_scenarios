BGOpen("fp210",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040408102_04_000");
MsgDisp("Nanatsumori","I don't dislike lively places, but the
atmosphere for cherry blossom viewing is
unique.");
MsgSel("I'd also like a place to peacefully admire them","You're a fool if you dance, and a fool if you just look on!","The cherry blossoms are different at night, right?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040408102_04_010");
    MsgDisp("Nanatsumori","That.
I want a separate space for relaxed people
and lively people.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040408102_04_020");
    MsgDisp("Nanatsumori","Haa.
You sure are strangely excited, aren't
you?");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,2,1);
        VoicePlay("B040408102_04_030");
        MsgDisp("Nanatsumori","Ahー, definitely...
There's probably a lof of drunkards
there...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040408102_04_040");
        MsgDisp("Nanatsumori","It'll be lit up and have a different
atmosphere.");
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040408102_04_050");
        MsgDisp("Nanatsumori","...But, there'll be more troublesome
cherry blossom viewers...");
        MsgDisp("主人公","Troublesome?");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040408102_04_060");
        MsgDisp("Nanatsumori","Well...
Everyone has their own way of enjoying
things, so it can't be helped.");
        ChEye(4,0);
        ChMouth(4,4);
        VoicePlay("B040408102_04_070");
        MsgDisp("Nanatsumori","The cherry blossoms at night.
The cherry blossoms at night...");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040408102_04_080");
        MsgDisp("Nanatsumori","Maybe it's a bit much for a date spot for
us high schoolers?");
        MsgDisp("主人公","Really?");
        ChMotion(4,0,1);
        VoicePlay("B040408102_04_090");
        MsgDisp("Nanatsumori","Really.
You might even get taken in by the police
for protection.");
        MsgDisp("主人公","Ah...
That's true.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040408102_04_100");
        MsgDisp("Nanatsumori","Haha. Well, there's no need to rush. The
cherry blossoms here aren't going
anywhere.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        ChCheek(4,8);
        VoicePlay("B040408102_04_110");
        MsgDisp("Nanatsumori","When we're old enough to not get taken in
by the police, I'll take you on a night
cherry blossom date. If you're okay with
that, that is.");
        MsgDisp("主人公","(｛七ツ森＊｝...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
