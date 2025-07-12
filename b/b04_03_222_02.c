BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(3,3);
ChMouth(3,0);
ChMotion(3,3,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040322202_03_000");
MsgDisp("Honda","Seems like you can wear the armor 
and helmet and take a commemorative photo!");
MsgSel("Yeah, let's do it!","Do they have a town girl outfit too?","It might be a bit embarrassing.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040322202_03_010");
    MsgDisp("Honda","Yep yep.
I also want to wear it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040322202_03_020");
    MsgDisp("Honda","Ahhh, that would be good too!
Like a newspaper publisher's daughter.");
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
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040322202_03_030");
        MsgDisp("Honda","Really.
Then, I won't do it.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,4,1);
        VoicePlay("B040322202_03_040");
        MsgDisp("Honda","Well, let's just take a commemorative
photo then.");
        MsgDisp("主人公","eh?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,0);
        VoicePlay("B040322202_03_050");
        MsgDisp("Honda","We haven't taken 
a photo with the two of us before.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
        ChClose(3);
        SEWait();
        VoicePlay("B040322202_03_060");
        MsgDisp("Honda","Excuse me, 
Could you take a picture of us?");
        MsgDisp("主人公","(｛本多＊＊｝?)");
        MsgClose();
        ScrFadeOut(0);
        SEPlay("EV_SE_041");
        SEWait();
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        MsgClose();
        ScrFadeIn(0);
        VoicePlay("B040322202_03_070");
        MsgDisp("Honda","...Yep yep, 
Turns out this sort of picture 
is better than you in armor. ");
        MsgClose();
        SEPlay("EV_SE_544");
        ChOpen(3,255,1,3,3,0,#1,0,0);
        SEWait();
        VoicePlay("B040322202_03_080");
        MsgDisp("Honda","Thanks for turning down the cosplay idea.");
        MsgDisp("主人公","But, was it good?");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,4);
        VoicePlay("B040322202_03_090");
        MsgDisp("Honda","Yeah.
I should've taken lots of normal
pictures with you first.");
        MsgDisp("主人公","I see, I too——");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,2);
        VoicePlay("B040322202_03_100");
        MsgDisp("Honda","Then after that, wearing armour 
would be interesting, yep yep.");
        MsgDisp("主人公","(...Hm? Interesting?)");
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
