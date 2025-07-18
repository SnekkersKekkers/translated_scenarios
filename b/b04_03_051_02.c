BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
ScrFadeIn(0);
VoicePlay("B040305102_03_000");
MsgDisp("Honda","You know, I always wanted to try being a
planetarium commentator～");
MsgSel("I feel like ｛本多＊＊｝ would go on a tangent.","｛本多＊＊｝'s commentary sounds more fun.","Next time, please do it!");
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
        ChEyeOpenLevel(3,8);
        VoicePlay("B040305102_03_010");
        MsgDisp("Honda","Oh...I see...I can't help but want to
share anything I know...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,1);
        ChEyeOpenLevel(3,8);
        VoicePlay("B040305102_03_020");
        MsgDisp("Honda","Huh?
Is my talk, by any chance, getting in the
way?");
        MsgDisp("主人公","No, not at all.
It's really enjoyable.");
        ChEye(3,4);
        ChEye(3,0);
        ChMotion(3,4);
        VoicePlay("B040305102_03_030");
        MsgDisp("Honda","If it's interesting, it's all good, but...
I might not read it exactly as scripted,
though.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,1);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040305102_03_040");
        MsgDisp("Honda","I'm sure I'll talk not only about stars,
but projectors too.");
        MsgDisp("主人公","Hehe, that's still fun though.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,5);
        VoicePlay("B040305102_03_050");
        MsgDisp("Honda","Really?");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,3);
        VoicePlay("B040305102_03_060");
        MsgDisp("Honda","If you're okay with it, then it's fine.
Let's do our own planetarium next time,
just the two of us.");
        MsgDisp("主人公","Okay, I'm looking forward to it.");
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
    VoicePlay("B040305102_03_070");
    MsgDisp("Honda","Yeah, I'll explain everything!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040305102_03_080");
    MsgDisp("Honda","Okay, I'll ask around and see if they're
looking for part-timers. If push comes to
shove, I'll do two jobs at once!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
