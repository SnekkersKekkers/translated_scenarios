BGOpen("fp200",0);
ChLayout(1);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040308302_03_000");
MsgDisp("Honda","Doesn't the air temperature here feel two
times cooler?");
MsgSel("Seems like the fireflies are also comfortable with it","It's a mysterious spot","Maybe it's thanks to the spring water?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040308302_03_010");
        MsgDisp("Honda","Yeah, it's the firefly habitat after all?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,1);
        VoicePlay("B040308302_03_020");
        MsgDisp("Honda","Yeah, the fireflies in the daytime take
their time to rest so they can preserve
their energy.");
        MsgDisp("主人公","Shining and flying around at night must be
tough huh.");
        ChEye(3,1);
        ChMouth(3,3);
        ChMotion(3,3);
        VoicePlay("B040308302_03_030");
        MsgDisp("Honda","Yep yep, nighttime is a battle for
fireflies! In order to leave behind
descendants, it's a battle of serious
appeal.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,4); 
        VoicePlay("B040308302_03_040");
        MsgDisp("Honda","They're definitely polishing their
strategies right about now.");
        MsgDisp("主人公","If ｛本多＊＊｝ were a firefly, he'd come
up with some amazing strategies huh?");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,1);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040308302_03_050");
        MsgDisp("Honda","If I were a firefly, I'd go for a front
attack!
I'd fly around flashily in front of you.");
        MsgDisp("主人公","Ummm...
This is if I were a firefly too?");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,3);
        ChEyeOpenLevel(3,10);
        VoicePlay("B040308302_03_060");
        MsgDisp("Honda","Yep yep!
Even if you were a firefly, I'm sure I'd
find you right away!");
        MsgDisp("主人公","(I'm sure I'd find ｛本多＊＊｝ as a
firefly right away too.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B040308302_03_070");
    MsgDisp("Honda","There are lots of different rumours huh.
I think I'm getting the chills a bit.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B040308302_03_080");
    MsgDisp("Honda","That's right.
Thanks to the spring water, the water
temperature is low.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
