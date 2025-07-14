BGOpen("wf110",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ScrFadeIn(0);
VoicePlay("B040301102_03_000");
MsgDisp("Honda","Look, there's reinforced glass over there!");
MsgSel("That's dangerous!","｛本多＊＊｝ can go first.","Can those below see us?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("B040301102_03_010");
    MsgDisp("Honda","Eh, it's not.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B040301102_03_020");
    MsgDisp("Honda","Will do～");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,4);
        ChMouth(3,2);
        ChMotion(3,0);
        VoicePlay("B040301102_03_030");
        MsgDisp("Honda","What?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040301102_03_040");
        MsgDisp("Honda","Being seen...");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,5);
        ChCheek(3,5);
        VoicePlay("B040301102_03_050");
        MsgDisp("Honda","Oh I see.
So girls have those sort of concerns, huh.");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,4);
        ChCheek(3,0);
        VoicePlay("B040301102_03_060");
        MsgDisp("Honda","But it's off-limits to be down there.
Besides, isn't it impossible without
binoculars?");
        ChEye(3,5);
        MsgDisp("主人公","Pfft, I was just kidding.");
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,5);
        VoicePlay("B040301102_03_070");
        MsgDisp("Honda","Darn!
You got me.");
        ChSet(3,3);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040301102_03_080");
        MsgDisp("Honda","Hahaha, you're the best!");
        ChEye(3,1);
        ChMouth(3,3);
        ChMotion(3,4);
        VoicePlay("B040301102_03_090");
        MsgDisp("Honda","Okay then, next time it's my turn to prank
you.
Be prepared for it, okay?");
        MsgDisp("主人公","Really? I feel like a prank from
｛本多＊＊｝ is going to be something
amazing.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,2);
        VoicePlay("B040301102_03_100");
        MsgDisp("Honda","Yup, amazing.
First off I'll need to gather a lot of
rhinoceros beetle larvae...");
        MsgDisp("主人公","(Ummm, is he planning something weird?)");
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
