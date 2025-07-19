MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
ChSet(7,0,1);
ChMouth(7,0);
ScrFadeIn(0);
VoicePlay("B040723602_07_000");
MsgDisp("Mikage","There's a lot of people...
It's night time, so don't get separated,
okay?");
MsgSel("Please hold my hand.","Can we get a little closer?","｛御影＊＊｝'s head stands out, so it'll be okay.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(7,1);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("B040723602_07_010");
    MsgDisp("Mikage","...That's right.
I got it,");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,1);
        VoicePlay("B040723602_07_020");
        MsgDisp("Mikage","Hey, hey.
You won;t be able to see anything like
that.");
        MsgDateResultDisp();
        DateRateSet(5);
        break ;
        case 4:
        case 5:
        ChEye(7,2);
        ChMouth(7,1);
        ChMotion(7,1);
        VoicePlay("B040723602_07_030");
        MsgDisp("Mikage","Is this so that we don't get separated?");
        MsgDisp("主人公","Umm, yes.
That's right.");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040723602_07_040");
        MsgDisp("Mikage","That's fine, but if you're only looking at
me, there's no point in coming to the
night parade.");
        MsgDisp("主人公","Got it.");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,4);
        VoicePlay("B040723602_07_050");
        MsgDisp("Mikage","If you got it, that's good.
So as you'd like.");
        SEPlay("EV_SE_544",0,0.7);
        MsgClose();
        ChClose(7,0,30);
        ChLayout(0);
        ChOpen(7,253,1,0,0,#1,#1,0,0,0,30);
        VoicePlay("B040723602_07_060");
        MsgDisp("Mikage","Look. Now, there's no need to worry we'll
get separated, but you can't see anything,
right?～?");
        MsgDisp("主人公","I can see ｛御影＊＊｝ very well.");
        ChEye(7,1);
        ChMouth(7,1);
        ChMotion(7,1);
        VoicePlay("B040723602_07_070");
        MsgDisp("Mikage","......");
        ChEye(7,1);
        ChMouth(7,1);
        ChMotion(7,5);
        Wait(40,0);
        ChCustomLayout(7,6,0,-2.6);
        MsgDisp("主人公","∋");
        ChEye(7,1);
        ChMouth(7,0);
        ChMotion(7,3);
        VoicePlay("B040723602_07_080");
        MsgDisp("Mikage","Heheh, I finally surprised you.");
        MsgDisp("主人公","Over there! the skull bear is changing
colors∈");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,5);
        VoicePlay("B040723602_07_090");
        MsgDisp("Mikage","Ha...what's with that?
I feel like I can't win with you.");
        MsgDisp("主人公","(Haa, my heart might be racing a
little...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,5);
    VoicePlay("B040723602_07_100");
    MsgDisp("Mikage","I guess my head is useful at times huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
