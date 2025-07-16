BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
MsgClose();
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040323602_03_000");
MsgDisp("Honda","That tuna man has been flocking around in
front of us for a while.");
MsgSel("Does he have business with ｛本多＊＊｝?","Is he ｛本多＊＊｝'s acquaintance?'","Does he want to dance with us?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,1);
        ChMouth(3,4);
        ChMotion(3,2);
        VoicePlay("B040323602_03_010");
        MsgDisp("Honda","Eh, I don't have any business with him
though?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,5);
        VoicePlay("B040323602_03_020");
        MsgDisp("Honda","Ah, it might be that time I saved a tuna.");
        MsgDisp("主人公","Eh?
Is the tuna repaying your kindness?");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040323602_03_030");
        MsgDisp("Honda","Right right, when I was in elementary
school, there was a weakening tuna at an
aquarium, so I told the caretaker.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,4);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040323602_03_040");
        MsgDisp("Honda","He definitely remembers me, so he's
showing me a dance as a thanks.");
        MsgDisp("主人公","Hehe.
It's like a mix of the \"Grateful Crane\"
and Urashima Taro.");
        ChFace(3,4);
        ChMotion(3,0);
        VoicePlay("B040323602_03_050");
        MsgDisp("Honda","Hm? Wait. If we're talking about the
\"Grateful Crane\", then the tuna I rescued
that time must be you.");
        MsgDisp("主人公","Ehhh?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040323602_03_060");
        MsgDisp("Honda","After all, the crane becomes a beautiful
woman and appears before her benefactor
right?");
        ChMouth(3,3);
        ChCheek(3,8);
        VoicePlay("B040323602_03_070");
        MsgDisp("Honda","Well, in my surroundings, the beautiful
woman that appears before me is you.");
        MsgDisp("主人公","｛本多＊＊｝...");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        ChEyeOpenLevel(3,0);
        ChCheek(3,0);
        VoicePlay("B040323602_03_080");
        MsgDisp("Honda","Well instead of weaving, can you cook me
something that's full of docosahexaenoic
acid?");
        MsgDisp("主人公","(Let's take on the challenge...)");
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
    ChMotion(3,1);
    VoicePlay("B040323602_03_090");
    MsgDisp("Honda","Hahaha, the tuna doesn't have any friends!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040323602_03_100");
    MsgDisp("Honda","There's no reason to refuse!
Let's dance!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
