BGOpen("fp200",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040308502_03_000");
MsgDisp("Honda","It looks like it's going to snow in the
evening.");
MsgSel("I hope it piles up","If it snowed here, it would look even more magical","Will the fireflies in the pond be okay?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040308502_03_010");
    MsgDisp("Honda","Yep yep, that's right!
It would be good if it was covered it
snow!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,1);
        VoicePlay("B040308502_03_020");
        MsgDisp("Honda","That's right.
But I liked today's landscape too.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,1);
        VoicePlay("B040308502_03_030");
        MsgDisp("Honda","Yep yep.
Okay, I understand.");
        MsgDisp("主人公","What's wrong?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,0);
        VoicePlay("B040308502_03_040");
        MsgDisp("Honda","It's about time, look.");
        MsgDisp("主人公","?");
        EfctOpen(5);
        MsgDisp("主人公","Ah, snow...");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,4);
        VoicePlay("B040308502_03_050");
        MsgDisp("Honda","The current weather forecasts, thanks to
the supercomputers are very accurate, even
down to the area.");
        ChSet(3,3);
        VoicePlay("B040308502_03_060");
        MsgDisp("Honda","Look, a scenery just as you hoped for has
appeared.");
        MsgDisp("主人公","Yeah, ｛本多＊＊｝ thank you.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040308502_03_070");
        MsgDisp("Honda","You shouldn't be saying that to me, but
the supercomputer.");
        MsgDisp("主人公","Hehe.");
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,0);
        VoicePlay("B040308502_03_080");
        MsgDisp("Honda","Maybe this will pile up?");
        MsgDisp("主人公","(I'm glad I was able to see this with
｛本多＊＊｝...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChSet(3,3);
    VoicePlay("B040308502_03_090");
    MsgDisp("Honda","Yep yep, there's nothing to fear.
They're in the middle of vigorously eating
and becoming adults!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
