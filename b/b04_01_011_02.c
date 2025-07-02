BGOpen("wf110",0);
ChLayout(1);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040101102_01_000");
MsgDisp("Kazama","Should we go all around the circle?");
MsgSel("We should go in opposite directions and see where we meet up!","Don't walk too close to the edge","Yeah, I think I'm finally adjusting to it.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040101102_01_010");
    MsgDisp("Kazama","ＯＫ!
Then we'll start back-to-back!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(1,2);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040101102_01_020");
        MsgDisp("Kazama","I know that.
... Sheesh, no matter where you go,
it's not like it's going to collapse.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040101102_01_030");
        MsgDisp("Kazama","Then why don't you move further inside?");
        MsgDisp("主人公","It's not me I'm worried about, it's you.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040101102_01_040");
        MsgDisp("Kazama","I'm not particularly scared here.");
        MsgDisp("主人公","I'm not going to be able to watch.");
        ChMotion(1,0);
        Wait(16,0);
        ChEye(1,0);
        ChMouth(1,3);
        VoicePlay("B040101102_01_050");
        MsgDisp("Kazama","Ooh. It's precious that you're that
worried for me.");
        ChClose(1,0,30);
        ChLayout(2);
        SEPlay("EV_SE_544");
        MsgClose();
        ChOpen(1,255,0,0,3,8,-1,0,0,0,30);
        SEWait();
        VoicePlay("B040101102_01_060");
        MsgDisp("Kazama","Here, what about this?");
        MsgDisp("主人公","Jeez, I already said don't do it
because it's dangerous.");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040101102_01_070");
        MsgDisp("Kazama","Okay, my bad.
Don't make that face at me.");
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
        ChClose(1,0,30);
        ChLayout(0);
        MsgClose();
        ChOpen(1,255,0,4,3,-1,-1,0,0,0,30);
        SEWait();
        VoicePlay("B040101102_01_080");
        MsgDisp("Kazama","Look, I'm safe now, okay?
We can make another lap around like this!");
        MsgDisp("主人公","(Hehe, it's just like being
back in first grade with him.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040101102_01_090");
    MsgDisp("Kazama","I find that a little disappointing.
Now you're basically invincible.");
    MsgDispSksp(1,0);
    ChEyeOpenLevel(1,-1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
